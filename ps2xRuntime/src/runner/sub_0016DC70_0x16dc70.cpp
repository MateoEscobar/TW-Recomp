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

// Function: sub_0016DC70
// Address: 0x16dc70 - 0x16dda8
void sub_0016DC70_0x16dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DC70_0x16dc70");
#endif

    switch (ctx->pc) {
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd6cu: goto label_16dd6c;
        default: break;
    }

    ctx->pc = 0x16dc70u;

    // 0x16dc70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16dc74: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x16dc74u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16dc7c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x16dc7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16dc84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16dc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16dc8c: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x16dc8cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc90: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x16dc90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dc94: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16dc98: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x16dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x16dc9c: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x16DC9Cu;
    {
        const bool branch_taken_0x16dc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC9Cu;
        // 0x16dca0: 0xafab0000  sw          $t3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc9c) {
            ctx->pc = 0x16DD8Cu;
            goto label_16dd8c;
        }
    }
    ctx->pc = 0x16DCA4u;
    // 0x16dca4: 0x8e2200b4  lw          $v0, 0xB4($s1)
    ctx->pc = 0x16dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x16dca8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16dca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dcac: 0x14460004  bne         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x16DCACu;
    {
        const bool branch_taken_0x16dcac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x16DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCACu;
        // 0x16dcb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcac) {
            ctx->pc = 0x16DCC0u;
            goto label_16dcc0;
        }
    }
    ctx->pc = 0x16DCB4u;
    // 0x16dcb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16DCB4u;
    {
        const bool branch_taken_0x16dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB4u;
        // 0x16dcb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcb4) {
            ctx->pc = 0x16DCECu;
            goto label_16dcec;
        }
    }
    ctx->pc = 0x16DCBCu;
    // 0x16dcbc: 0x0  nop
    ctx->pc = 0x16dcbcu;
    // NOP
label_16dcc0:
    // 0x16dcc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16dcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16dcc4:
    // 0x16dcc4: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x16dcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x16dcc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16DCC8u;
    {
        const bool branch_taken_0x16dcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC8u;
        // 0x16dccc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcc8) {
            ctx->pc = 0x16DCECu;
            goto label_16dcec;
        }
    }
    ctx->pc = 0x16DCD0u;
    // 0x16dcd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dcd4: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x16dcd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16dcd8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16dcdc: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x16dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x16dce0: 0x5464fff8  bnel        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16DCE0u;
    {
        const bool branch_taken_0x16dce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x16dce0) {
            ctx->pc = 0x16DCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DCE0u;
            // 0x16dce4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DCC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16dcc4;
        }
    }
    ctx->pc = 0x16DCE8u;
    // 0x16dce8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16dce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16dcec:
    // 0x16dcec: 0x4c00027  bltz        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x16DCECu;
    {
        const bool branch_taken_0x16dcec = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCECu;
        // 0x16dcf0: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcec) {
            ctx->pc = 0x16DD8Cu;
            goto label_16dd8c;
        }
    }
    ctx->pc = 0x16DCF4u;
    // 0x16dcf4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x16dcf8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x16dcf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16dcfc: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16dd00: 0x8c46b734  lw          $a2, -0x48CC($v0)
    ctx->pc = 0x16dd00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x16dd04: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x16dd04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16dd08: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x16dd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dd0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd10: 0x8cc20048  lw          $v0, 0x48($a2)
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x16dd14: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x16dd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16dd18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x16dd1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16dd20: 0xac6200b4  sw          $v0, 0xB4($v1)
    ctx->pc = 0x16dd20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 2));
    // 0x16dd24: 0x260600bc  addiu       $a2, $s0, 0xBC
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x16dd28: 0xae0a00b8  sw          $t2, 0xB8($s0)
    ctx->pc = 0x16dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 10));
    // 0x16dd2c: 0xc5800000  lwc1        $f0, 0x0($t4)
    ctx->pc = 0x16dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd30: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x16dd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x16dd34: 0xc5810004  lwc1        $f1, 0x4($t4)
    ctx->pc = 0x16dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dd38: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x16dd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x16dd3c: 0xc5800008  lwc1        $f0, 0x8($t4)
    ctx->pc = 0x16dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dd40: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x16dd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x16dd44: 0xa20d00cb  sb          $t5, 0xCB($s0)
    ctx->pc = 0x16dd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 203), (uint8_t)GPR_U32(ctx, 13));
    // 0x16dd48: 0xa20f00ca  sb          $t7, 0xCA($s0)
    ctx->pc = 0x16dd48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 202), (uint8_t)GPR_U32(ctx, 15));
    // 0x16dd4c: 0xa60e00c8  sh          $t6, 0xC8($s0)
    ctx->pc = 0x16dd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 200), (uint16_t)GPR_U32(ctx, 14));
    // 0x16dd50: 0xa20700cd  sb          $a3, 0xCD($s0)
    ctx->pc = 0x16dd50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 205), (uint8_t)GPR_U32(ctx, 7));
    // 0x16dd54: 0xc0e409a  jal         func_390268
    ctx->pc = 0x16DD54u;
    SET_GPR_U32(ctx, 31, 0x16DD5Cu);
    ctx->pc = 0x16DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD54u;
    // 0x16dd58: 0xa20700cc  sb          $a3, 0xCC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x16DD54u, 0x16DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD5Cu;
label_16dd5c:
    // 0x16dd5c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16DD5Cu;
    {
        const bool branch_taken_0x16dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd5c) {
            ctx->pc = 0x16DD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16DD5Cu;
            // 0x16dd60: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16DD7Cu;
            goto label_16dd7c;
        }
    }
    ctx->pc = 0x16DD64u;
    // 0x16dd64: 0xc087502  jal         func_21D408
    ctx->pc = 0x16DD64u;
    SET_GPR_U32(ctx, 31, 0x16DD6Cu);
    ctx->pc = 0x16DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD64u;
    // 0x16dd68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x16DD64u, 0x16DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD6Cu;
label_16dd6c:
    // 0x16dd6c: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x16dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16dd70: 0x94620030  lhu         $v0, 0x30($v1)
    ctx->pc = 0x16dd70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x16dd74: 0xa20200cd  sb          $v0, 0xCD($s0)
    ctx->pc = 0x16dd74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 205), (uint8_t)GPR_U32(ctx, 2));
    // 0x16dd78: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_16dd7c:
    // 0x16dd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16dd84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16DD84u;
    {
        const bool branch_taken_0x16dd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD84u;
        // 0x16dd88: 0xae2300b0  sw          $v1, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd84) {
            ctx->pc = 0x16DD90u;
            goto label_16dd90;
        }
    }
    ctx->pc = 0x16DD8Cu;
label_16dd8c:
    // 0x16dd8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16dd8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16dd90:
    // 0x16dd90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16dd90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16dd94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16dd94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16dd98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dd98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16dd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x16DD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD9Cu;
        // 0x16dda0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16DDA4u;
    // 0x16dda4: 0x0  nop
    ctx->pc = 0x16dda4u;
    // NOP
    ctx->pc = 0x16dda8u;
}
