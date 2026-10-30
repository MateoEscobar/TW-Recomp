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

// Function: sub_001548C0
// Address: 0x1548c0 - 0x154950
void sub_001548C0_0x1548c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001548C0_0x1548c0");
#endif

    switch (ctx->pc) {
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        default: break;
    }

    ctx->pc = 0x1548c0u;

label_1548c0:
    // 0x1548c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1548c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1548c4:
    // 0x1548c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1548c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1548c8:
    // 0x1548c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1548c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1548cc:
    // 0x1548cc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1548ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1548d0:
    // 0x1548d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1548d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1548d4:
    // 0x1548d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1548d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1548d8:
    // 0x1548d8: 0x8c44b788  lw          $a0, -0x4878($v0)
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_1548dc:
    // 0x1548dc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1548e0:
    // 0x1548e0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1548e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1548e4:
    // 0x1548e4: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1548e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1548e8:
    // 0x1548e8: 0x8c6c27e4  lw          $t4, 0x27E4($v1)
    ctx->pc = 0x1548e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10212)));
label_1548ec:
    // 0x1548ec: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_1548f0:
    // 0x1548f0: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x1548f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_1548f4:
    // 0x1548f4: 0x24a5e5d8  addiu       $a1, $a1, -0x1A28
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960600));
label_1548f8:
    // 0x1548f8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1548f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1548fc:
    // 0x1548fc: 0x2508e5a8  addiu       $t0, $t0, -0x1A58
    ctx->pc = 0x1548fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294960552));
label_154900:
    // 0x154900: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x154900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_154904:
    // 0x154904: 0x254ae5e0  addiu       $t2, $t2, -0x1A20
    ctx->pc = 0x154904u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294960608));
label_154908:
    // 0x154908: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x154908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15490c:
    // 0x15490c: 0x3c060006  lui         $a2, 0x6
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6 << 16));
label_154910:
    // 0x154910: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x154910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_154914:
    // 0x154914: 0x24090039  addiu       $t1, $zero, 0x39
    ctx->pc = 0x154914u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_154918:
    // 0x154918: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_15491c:
    // 0x15491c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x15491cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154920:
    // 0x154920: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x154920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_154924:
    // 0x154924: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x154924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_154928:
    // 0x154928: 0x40f809  jalr        $v0
label_15492c:
    if (ctx->pc == 0x15492Cu) {
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154930u;
        goto label_154930;
    }
    ctx->pc = 0x154928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154930u);
        ctx->pc = 0x15492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154928u;
        // 0x15492c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154928u, 0x154930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154930u;
label_154930:
    // 0x154930: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x154930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_154934:
    // 0x154934: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x154934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_154938:
    // 0x154938: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x154938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_15493c:
    // 0x15493c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15493cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154940:
    // 0x154940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154944:
    // 0x154944: 0x3e00008  jr          $ra
label_154948:
    if (ctx->pc == 0x154948u) {
        ctx->pc = 0x154948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154944u;
        // 0x154948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15494Cu;
        goto label_15494c;
    }
    ctx->pc = 0x154944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154944u;
        // 0x154948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15494Cu;
label_15494c:
    // 0x15494c: 0x0  nop
    ctx->pc = 0x15494cu;
    // NOP
    ctx->pc = 0x154950u;
}
