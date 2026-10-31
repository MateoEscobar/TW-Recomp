#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150218
// Address: 0x150218 - 0x150260
void sub_00150218_0x150218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150218_0x150218");
#endif

    switch (ctx->pc) {
        case 0x15022cu: goto label_15022c;
        case 0x150234u: goto label_150234;
        case 0x150240u: goto label_150240;
        case 0x150248u: goto label_150248;
        case 0x150250u: goto label_150250;
        default: break;
    }

    ctx->pc = 0x150218u;

    // 0x150218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15021c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150224: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150224u;
    SET_GPR_U32(ctx, 31, 0x15022Cu);
    ctx->pc = 0x150228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150224u;
    // 0x150228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150224u, 0x15022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15022Cu;
label_15022c:
    // 0x15022c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x15022Cu;
    SET_GPR_U32(ctx, 31, 0x150234u);
    ctx->pc = 0x150230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15022Cu;
    // 0x150230: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x15022Cu, 0x150234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150234u;
label_150234:
    // 0x150234: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150238: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150238u;
    SET_GPR_U32(ctx, 31, 0x150240u);
    ctx->pc = 0x15023Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150238u;
    // 0x15023c: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150238u, 0x150240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150240u;
label_150240:
    // 0x150240: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150240u;
    SET_GPR_U32(ctx, 31, 0x150248u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150240u, 0x150248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150248u;
label_150248:
    // 0x150248: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150248u;
    SET_GPR_U32(ctx, 31, 0x150250u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150248u, 0x150250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150250u;
label_150250:
    // 0x150250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150258: 0x3e00008  jr          $ra
    ctx->pc = 0x150258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150258u;
        // 0x15025c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150260u;
}
