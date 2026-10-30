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

// Function: sub_00164410
// Address: 0x164410 - 0x164458
void sub_00164410_0x164410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164410_0x164410");
#endif

    switch (ctx->pc) {
        case 0x16444cu: goto label_16444c;
        default: break;
    }

    ctx->pc = 0x164410u;

    // 0x164410: 0x24080024  addiu       $t0, $zero, 0x24
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x164414: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x164418: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x164418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16441c: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x16441cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x164420: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x164420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164424: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x164424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16442c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16442cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164430: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x164430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x164434: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x164434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x164438: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16443c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164440: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x164440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x164444: 0xc10c4de  jal         func_431378
    ctx->pc = 0x164444u;
    SET_GPR_U32(ctx, 31, 0x16444Cu);
    ctx->pc = 0x164448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164444u;
    // 0x164448: 0xa0400023  sb          $zero, 0x23($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x164444u, 0x16444Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16444Cu;
label_16444c:
    // 0x16444c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164450: 0x3e00008  jr          $ra
    ctx->pc = 0x164450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164450u;
        // 0x164454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164458u;
}
