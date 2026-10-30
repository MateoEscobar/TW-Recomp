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

// Function: sub_00150028
// Address: 0x150028 - 0x150078
void sub_00150028_0x150028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150028_0x150028");
#endif

    switch (ctx->pc) {
        case 0x15003cu: goto label_15003c;
        case 0x150044u: goto label_150044;
        case 0x150050u: goto label_150050;
        case 0x150058u: goto label_150058;
        case 0x150060u: goto label_150060;
        default: break;
    }

    ctx->pc = 0x150028u;

    // 0x150028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15002c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150030: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150034: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x150034u;
    SET_GPR_U32(ctx, 31, 0x15003Cu);
    ctx->pc = 0x150038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150034u;
    // 0x150038: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x150034u, 0x15003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15003Cu;
label_15003c:
    // 0x15003c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x15003Cu;
    SET_GPR_U32(ctx, 31, 0x150044u);
    ctx->pc = 0x150040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15003Cu;
    // 0x150040: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x15003Cu, 0x150044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150044u;
label_150044:
    // 0x150044: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x150044u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x150048: 0xc053722  jal         func_14DC88
    ctx->pc = 0x150048u;
    SET_GPR_U32(ctx, 31, 0x150050u);
    ctx->pc = 0x15004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150048u;
    // 0x15004c: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x150048u, 0x150050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150050u;
label_150050:
    // 0x150050: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x150050u;
    SET_GPR_U32(ctx, 31, 0x150058u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x150050u, 0x150058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150058u;
label_150058:
    // 0x150058: 0xc05471c  jal         func_151C70
    ctx->pc = 0x150058u;
    SET_GPR_U32(ctx, 31, 0x150060u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x150058u, 0x150060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150060u;
label_150060:
    // 0x150060: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150068: 0x3e00008  jr          $ra
    ctx->pc = 0x150068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150068u;
        // 0x15006c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150070u;
    // 0x150070: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x150070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x150074: 0x0  nop
    ctx->pc = 0x150074u;
    // NOP
    ctx->pc = 0x150078u;
}
