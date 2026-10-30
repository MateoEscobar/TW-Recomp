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

// Function: sub_00272918
// Address: 0x272918 - 0x2729a8
void sub_00272918_0x272918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272918_0x272918");
#endif

    switch (ctx->pc) {
        case 0x272934u: goto label_272934;
        case 0x272958u: goto label_272958;
        case 0x272964u: goto label_272964;
        case 0x272970u: goto label_272970;
        case 0x27297cu: goto label_27297c;
        case 0x272988u: goto label_272988;
        case 0x272994u: goto label_272994;
        default: break;
    }

    ctx->pc = 0x272918u;

    // 0x272918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x272918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27291c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27291cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272920: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x272920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272924: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x272924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x272928: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x272928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27292c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27292Cu;
    SET_GPR_U32(ctx, 31, 0x272934u);
    ctx->pc = 0x272930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27292Cu;
    // 0x272930: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27292Cu, 0x272934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272934u;
label_272934:
    // 0x272934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x272934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272938: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x272938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x27293c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x27293cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x272940: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x272944: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x272944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x272948: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27294c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27294cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272950: 0xc09db66  jal         func_276D98
    ctx->pc = 0x272950u;
    SET_GPR_U32(ctx, 31, 0x272958u);
    ctx->pc = 0x272954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272950u;
    // 0x272954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276D98u, 0x272950u, 0x272958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272958u;
label_272958:
    // 0x272958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27295c: 0xc089988  jal         func_226620
    ctx->pc = 0x27295Cu;
    SET_GPR_U32(ctx, 31, 0x272964u);
    ctx->pc = 0x272960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27295Cu;
    // 0x272960: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x27295Cu, 0x272964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272964u;
label_272964:
    // 0x272964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272968: 0xc089974  jal         func_2265D0
    ctx->pc = 0x272968u;
    SET_GPR_U32(ctx, 31, 0x272970u);
    ctx->pc = 0x27296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272968u;
    // 0x27296c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x272968u, 0x272970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272970u;
label_272970:
    // 0x272970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272974: 0xc089988  jal         func_226620
    ctx->pc = 0x272974u;
    SET_GPR_U32(ctx, 31, 0x27297Cu);
    ctx->pc = 0x272978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272974u;
    // 0x272978: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x272974u, 0x27297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27297Cu;
label_27297c:
    // 0x27297c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272980: 0xc089974  jal         func_2265D0
    ctx->pc = 0x272980u;
    SET_GPR_U32(ctx, 31, 0x272988u);
    ctx->pc = 0x272984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272980u;
    // 0x272984: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x272980u, 0x272988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272988u;
label_272988:
    // 0x272988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27298c: 0xc0a0152  jal         func_280548
    ctx->pc = 0x27298Cu;
    SET_GPR_U32(ctx, 31, 0x272994u);
    ctx->pc = 0x272990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27298Cu;
    // 0x272990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x27298Cu, 0x272994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272994u;
label_272994:
    // 0x272994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x272994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x272998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27299c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27299cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2729a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2729A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2729A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729A0u;
        // 0x2729a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2729A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729A8u;
}
