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

// Function: sub_002348F8
// Address: 0x2348f8 - 0x2349a0
void sub_002348F8_0x2348f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002348F8_0x2348f8");
#endif

    switch (ctx->pc) {
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        default: break;
    }

    ctx->pc = 0x2348f8u;

label_2348f8:
    // 0x2348f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2348f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2348fc:
    // 0x2348fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2348fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_234900:
    // 0x234900: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x234900u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_234904:
    // 0x234904: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x234904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_234908:
    // 0x234908: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x234908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_23490c:
    // 0x23490c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23490cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_234910:
    // 0x234910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_234914:
    // 0x234914: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234918:
    // 0x234918: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x234918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23491c:
    // 0x23491c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_234920:
    // 0x234920: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x234920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_234924:
    // 0x234924: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_234928:
    // 0x234928: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23492c:
    // 0x23492c: 0x40f809  jalr        $v0
label_234930:
    if (ctx->pc == 0x234930u) {
        ctx->pc = 0x234930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23492Cu;
        // 0x234930: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234934u;
        goto label_234934;
    }
    ctx->pc = 0x23492Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234934u);
        ctx->pc = 0x234930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23492Cu;
        // 0x234930: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23492Cu, 0x234934u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234934u;
label_234934:
    // 0x234934: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x234934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_234938:
    // 0x234938: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x234938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23493c:
    // 0x23493c: 0xac620248  sw          $v0, 0x248($v1)
    ctx->pc = 0x23493cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 2));
label_234940:
    // 0x234940: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234944:
    // 0x234944: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_234948:
    // 0x234948: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x234948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23494c:
    // 0x23494c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_234950:
    // 0x234950: 0x40f809  jalr        $v0
label_234954:
    if (ctx->pc == 0x234954u) {
        ctx->pc = 0x234954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234950u;
        // 0x234954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234958u;
        goto label_234958;
    }
    ctx->pc = 0x234950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234958u);
        ctx->pc = 0x234954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234950u;
        // 0x234954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234950u, 0x234958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234958u;
label_234958:
    // 0x234958: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x234958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23495c:
    // 0x23495c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_234960:
    // 0x234960: 0xac620240  sw          $v0, 0x240($v1)
    ctx->pc = 0x234960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 2));
label_234964:
    // 0x234964: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x234964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_234968:
    // 0x234968: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x234968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23496c:
    // 0x23496c: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23496cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_234970:
    // 0x234970: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x234970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_234974:
    // 0x234974: 0x40f809  jalr        $v0
label_234978:
    if (ctx->pc == 0x234978u) {
        ctx->pc = 0x234978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234974u;
        // 0x234978: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23497Cu;
        goto label_23497c;
    }
    ctx->pc = 0x234974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23497Cu);
        ctx->pc = 0x234978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234974u;
        // 0x234978: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234974u, 0x23497Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23497Cu;
label_23497c:
    // 0x23497c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_234980:
    // 0x234980: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x234980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_234984:
    // 0x234984: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x234984u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_234988:
    // 0x234988: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x234988u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23498c:
    // 0x23498c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_234990:
    // 0x234990: 0xac620244  sw          $v0, 0x244($v1)
    ctx->pc = 0x234990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 580), GPR_U32(ctx, 2));
label_234994:
    // 0x234994: 0x3e00008  jr          $ra
label_234998:
    if (ctx->pc == 0x234998u) {
        ctx->pc = 0x234998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234994u;
        // 0x234998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23499Cu;
        goto label_23499c;
    }
    ctx->pc = 0x234994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234994u;
        // 0x234998: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23499Cu;
label_23499c:
    // 0x23499c: 0x0  nop
    ctx->pc = 0x23499cu;
    // NOP
    ctx->pc = 0x2349a0u;
}
