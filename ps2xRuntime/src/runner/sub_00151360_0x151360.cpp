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

// Function: sub_00151360
// Address: 0x151360 - 0x1513d0
void sub_00151360_0x151360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151360_0x151360");
#endif

    switch (ctx->pc) {
        case 0x151374u: goto label_151374;
        case 0x151384u: goto label_151384;
        case 0x1513b4u: goto label_1513b4;
        case 0x1513bcu: goto label_1513bc;
        default: break;
    }

    ctx->pc = 0x151360u;

    // 0x151360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x151364: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x151364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x151368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15136c: 0xc10f3e4  jal         func_43CF90
    ctx->pc = 0x15136Cu;
    SET_GPR_U32(ctx, 31, 0x151374u);
    ctx->pc = 0x151370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15136Cu;
    // 0x151370: 0x3c10005e  lui         $s0, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CF90u, 0x15136Cu, 0x151374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151374u;
label_151374:
    // 0x151374: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x151374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151378: 0x261041e0  addiu       $s0, $s0, 0x41E0
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16864));
    // 0x15137c: 0xc1102de  jal         func_440B78
    ctx->pc = 0x15137Cu;
    SET_GPR_U32(ctx, 31, 0x151384u);
    ctx->pc = 0x151380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15137Cu;
    // 0x151380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440B78u, 0x15137Cu, 0x151384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151384u;
label_151384:
    // 0x151384: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x151388: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x151388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x15138c: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x15138cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
    // 0x151390: 0x3c051234  lui         $a1, 0x1234
    ctx->pc = 0x151390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4660 << 16));
    // 0x151394: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x151394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151398: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x151398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15139c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15139cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1513a0: 0x24c614a8  addiu       $a2, $a2, 0x14A8
    ctx->pc = 0x1513a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5288));
    // 0x1513a4: 0x24e74280  addiu       $a3, $a3, 0x4280
    ctx->pc = 0x1513a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17024));
    // 0x1513a8: 0x248441f8  addiu       $a0, $a0, 0x41F8
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16888));
    // 0x1513ac: 0xc110304  jal         func_440C10
    ctx->pc = 0x1513ACu;
    SET_GPR_U32(ctx, 31, 0x1513B4u);
    ctx->pc = 0x1513B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513ACu;
    // 0x1513b0: 0x34a54321  ori         $a1, $a1, 0x4321 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17185);
    ctx->in_delay_slot = false;
    ctx->pc = 0x440C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440C10u, 0x1513ACu, 0x1513B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513B4u;
label_1513b4:
    // 0x1513b4: 0xc1103c2  jal         func_440F08
    ctx->pc = 0x1513B4u;
    SET_GPR_U32(ctx, 31, 0x1513BCu);
    ctx->pc = 0x1513B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513B4u;
    // 0x1513b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440F08u, 0x1513B4u, 0x1513BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513BCu;
label_1513bc:
    // 0x1513bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1513bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1513c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1513c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1513c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1513C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1513C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513C4u;
        // 0x1513c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1513C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1513CCu;
    // 0x1513cc: 0x0  nop
    ctx->pc = 0x1513ccu;
    // NOP
    ctx->pc = 0x1513d0u;
}
