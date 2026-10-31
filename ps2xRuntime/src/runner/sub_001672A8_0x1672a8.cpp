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

// Function: sub_001672A8
// Address: 0x1672a8 - 0x167370
void sub_001672A8_0x1672a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672A8_0x1672a8");
#endif

    ctx->pc = 0x1672a8u;

    // 0x1672a8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1672a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1672ac: 0x24090130  addiu       $t1, $zero, 0x130
    ctx->pc = 0x1672acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x1672b0: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x1672b0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1672b4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1672b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672b8: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x1672b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1672bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1672bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1672c0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1672c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1672c4: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x1672c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1672c8: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1672c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1672cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1672ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1672d0: 0x8c48489c  lw          $t0, 0x489C($v0)
    ctx->pc = 0x1672d0u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1672d4: 0x8482069c  lh          $v0, 0x69C($a0)
    ctx->pc = 0x1672d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1692)));
    // 0x1672d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1672d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1672dc: 0xa4a2069c  sh          $v0, 0x69C($a1)
    ctx->pc = 0x1672dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 1692), (uint16_t)GPR_U32(ctx, 2));
    // 0x1672e0: 0x95030432  lhu         $v1, 0x432($t0)
    ctx->pc = 0x1672e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 1074)));
    // 0x1672e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1672e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1672e8: 0xa5030432  sh          $v1, 0x432($t0)
    ctx->pc = 0x1672e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 1074), (uint16_t)GPR_U32(ctx, 3));
    // 0x1672ec: 0x8d62002c  lw          $v0, 0x2C($t3)
    ctx->pc = 0x1672ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x1672f0: 0x14460012  bne         $v0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1672F0u;
    {
        const bool branch_taken_0x1672f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1672F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1672F0u;
        // 0x1672f4: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1672f0) {
            ctx->pc = 0x16733Cu;
            goto label_16733c;
        }
    }
    ctx->pc = 0x1672F8u;
    // 0x1672f8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1672f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1672fc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1672fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x167300: 0x84440692  lh          $a0, 0x692($v0)
    ctx->pc = 0x167300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1682)));
    // 0x167304: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167304u;
    {
        const bool branch_taken_0x167304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167304u;
        // 0x167308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167304) {
            ctx->pc = 0x167314u;
            goto label_167314;
        }
    }
    ctx->pc = 0x16730Cu;
    // 0x16730c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16730Cu;
    {
        const bool branch_taken_0x16730c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x16730c) {
            ctx->pc = 0x167368u;
            goto label_167368;
        }
    }
    ctx->pc = 0x167314u;
label_167314:
    // 0x167314: 0xe91018  mult        $v0, $a3, $t1
    ctx->pc = 0x167314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167318: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x167318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x16731c: 0x95020324  lhu         $v0, 0x324($t0)
    ctx->pc = 0x16731cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 804)));
    // 0x167320: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167324: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x167324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x167328: 0xa5020324  sh          $v0, 0x324($t0)
    ctx->pc = 0x167328u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 804), (uint16_t)GPR_U32(ctx, 2));
    // 0x16732c: 0x8483069a  lh          $v1, 0x69A($a0)
    ctx->pc = 0x16732cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 1690)));
    // 0x167330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x167330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x167334: 0x3e00008  jr          $ra
    ctx->pc = 0x167334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167334u;
        // 0x167338: 0xa4a3069a  sh          $v1, 0x69A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 1690), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16733Cu;
label_16733c:
    // 0x16733c: 0x1491018  mult        $v0, $t2, $t1
    ctx->pc = 0x16733cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167340: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x167340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x167344: 0x84620692  lh          $v0, 0x692($v1)
    ctx->pc = 0x167344u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1682)));
    // 0x167348: 0x2442fff7  addiu       $v0, $v0, -0x9
    ctx->pc = 0x167348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x16734c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x16734cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x167350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x167350u;
    {
        const bool branch_taken_0x167350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167350u;
        // 0x167354: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167350) {
            ctx->pc = 0x167368u;
            goto label_167368;
        }
    }
    ctx->pc = 0x167358u;
    // 0x167358: 0x8443069a  lh          $v1, 0x69A($v0)
    ctx->pc = 0x167358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1690)));
    // 0x16735c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16735cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167360: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x167360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x167364: 0xa483069a  sh          $v1, 0x69A($a0)
    ctx->pc = 0x167364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1690), (uint16_t)GPR_U32(ctx, 3));
label_167368:
    // 0x167368: 0x3e00008  jr          $ra
    ctx->pc = 0x167368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167370u;
}
