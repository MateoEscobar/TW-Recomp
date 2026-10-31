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

// Function: sub_00377FD8
// Address: 0x377fd8 - 0x378050
void sub_00377FD8_0x377fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377FD8_0x377fd8");
#endif

    switch (ctx->pc) {
        case 0x378000u: goto label_378000;
        case 0x378008u: goto label_378008;
        case 0x37801cu: goto label_37801c;
        case 0x378024u: goto label_378024;
        case 0x378030u: goto label_378030;
        default: break;
    }

    ctx->pc = 0x377fd8u;

    // 0x377fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x377fdc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377fe0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x377fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x377fe4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x377fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x377fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377fec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x377fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377ff0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x377ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x377ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377ff8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377FF8u;
    SET_GPR_U32(ctx, 31, 0x378000u);
    ctx->pc = 0x377FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377FF8u;
    // 0x377ffc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377FF8u, 0x378000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378000u;
label_378000:
    // 0x378000: 0xc10b108  jal         func_42C420
    ctx->pc = 0x378000u;
    SET_GPR_U32(ctx, 31, 0x378008u);
    ctx->pc = 0x378004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378000u;
    // 0x378004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x378000u, 0x378008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378008u;
label_378008:
    // 0x378008: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x378008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37800c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378010: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x378010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378014: 0xc102472  jal         func_4091C8
    ctx->pc = 0x378014u;
    SET_GPR_U32(ctx, 31, 0x37801Cu);
    ctx->pc = 0x378018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378014u;
    // 0x378018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x378014u, 0x37801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37801Cu;
label_37801c:
    // 0x37801c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37801Cu;
    SET_GPR_U32(ctx, 31, 0x378024u);
    ctx->pc = 0x378020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37801Cu;
    // 0x378020: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37801Cu, 0x378024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378024u;
label_378024:
    // 0x378024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378028: 0xc0e5a82  jal         func_396A08
    ctx->pc = 0x378028u;
    SET_GPR_U32(ctx, 31, 0x378030u);
    ctx->pc = 0x37802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378028u;
    // 0x37802c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x396A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396A08u, 0x378028u, 0x378030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378030u;
label_378030:
    // 0x378030: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x378030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378038: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x378038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37803c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37803cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378044: 0x3e00008  jr          $ra
    ctx->pc = 0x378044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378044u;
        // 0x378048: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37804Cu;
    // 0x37804c: 0x0  nop
    ctx->pc = 0x37804cu;
    // NOP
    ctx->pc = 0x378050u;
}
