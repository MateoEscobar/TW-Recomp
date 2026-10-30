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

// Function: sub_00379210
// Address: 0x379210 - 0x379288
void sub_00379210_0x379210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379210_0x379210");
#endif

    switch (ctx->pc) {
        case 0x379238u: goto label_379238;
        case 0x379240u: goto label_379240;
        case 0x379254u: goto label_379254;
        case 0x37925cu: goto label_37925c;
        case 0x379268u: goto label_379268;
        default: break;
    }

    ctx->pc = 0x379210u;

    // 0x379210: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x379210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x379214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379218: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x379218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37921c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37921cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x379220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379224: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379224u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379228: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x379228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37922c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379230: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379230u;
    SET_GPR_U32(ctx, 31, 0x379238u);
    ctx->pc = 0x379234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379230u;
    // 0x379234: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379230u, 0x379238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379238u;
label_379238:
    // 0x379238: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379238u;
    SET_GPR_U32(ctx, 31, 0x379240u);
    ctx->pc = 0x37923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379238u;
    // 0x37923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379238u, 0x379240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379240u;
label_379240:
    // 0x379240: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x379240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37924c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37924Cu;
    SET_GPR_U32(ctx, 31, 0x379254u);
    ctx->pc = 0x379250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37924Cu;
    // 0x379250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37924Cu, 0x379254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379254u;
label_379254:
    // 0x379254: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x379254u;
    SET_GPR_U32(ctx, 31, 0x37925Cu);
    ctx->pc = 0x379258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379254u;
    // 0x379258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x379254u, 0x37925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37925Cu;
label_37925c:
    // 0x37925c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37925cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379260: 0xc0e5db2  jal         func_3976C8
    ctx->pc = 0x379260u;
    SET_GPR_U32(ctx, 31, 0x379268u);
    ctx->pc = 0x379264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379260u;
    // 0x379264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3976C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3976C8u, 0x379260u, 0x379268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379268u;
label_379268:
    // 0x379268: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x379268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37926c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37926cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379270: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x379270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379274: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x379274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37927c: 0x3e00008  jr          $ra
    ctx->pc = 0x37927Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37927Cu;
        // 0x379280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37927Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379284u;
    // 0x379284: 0x0  nop
    ctx->pc = 0x379284u;
    // NOP
    ctx->pc = 0x379288u;
}
