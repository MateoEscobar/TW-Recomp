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

// Function: sub_0019AC48
// Address: 0x19ac48 - 0x19add0
void sub_0019AC48_0x19ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AC48_0x19ac48");
#endif

    switch (ctx->pc) {
        case 0x19ac48u: goto label_19ac48;
        case 0x19ac4cu: goto label_19ac4c;
        case 0x19ac50u: goto label_19ac50;
        case 0x19ac54u: goto label_19ac54;
        case 0x19ac58u: goto label_19ac58;
        case 0x19ac5cu: goto label_19ac5c;
        case 0x19ac60u: goto label_19ac60;
        case 0x19ac64u: goto label_19ac64;
        case 0x19ac68u: goto label_19ac68;
        case 0x19ac6cu: goto label_19ac6c;
        case 0x19ac70u: goto label_19ac70;
        case 0x19ac74u: goto label_19ac74;
        case 0x19ac78u: goto label_19ac78;
        case 0x19ac7cu: goto label_19ac7c;
        case 0x19ac80u: goto label_19ac80;
        case 0x19ac84u: goto label_19ac84;
        case 0x19ac88u: goto label_19ac88;
        case 0x19ac8cu: goto label_19ac8c;
        case 0x19ac90u: goto label_19ac90;
        case 0x19ac94u: goto label_19ac94;
        case 0x19ac98u: goto label_19ac98;
        case 0x19ac9cu: goto label_19ac9c;
        case 0x19aca0u: goto label_19aca0;
        case 0x19aca4u: goto label_19aca4;
        case 0x19aca8u: goto label_19aca8;
        case 0x19acacu: goto label_19acac;
        case 0x19acb0u: goto label_19acb0;
        case 0x19acb4u: goto label_19acb4;
        case 0x19acb8u: goto label_19acb8;
        case 0x19acbcu: goto label_19acbc;
        case 0x19acc0u: goto label_19acc0;
        case 0x19acc4u: goto label_19acc4;
        case 0x19acc8u: goto label_19acc8;
        case 0x19acccu: goto label_19accc;
        case 0x19acd0u: goto label_19acd0;
        case 0x19acd4u: goto label_19acd4;
        case 0x19acd8u: goto label_19acd8;
        case 0x19acdcu: goto label_19acdc;
        case 0x19ace0u: goto label_19ace0;
        case 0x19ace4u: goto label_19ace4;
        case 0x19ace8u: goto label_19ace8;
        case 0x19acecu: goto label_19acec;
        case 0x19acf0u: goto label_19acf0;
        case 0x19acf4u: goto label_19acf4;
        case 0x19acf8u: goto label_19acf8;
        case 0x19acfcu: goto label_19acfc;
        case 0x19ad00u: goto label_19ad00;
        case 0x19ad04u: goto label_19ad04;
        case 0x19ad08u: goto label_19ad08;
        case 0x19ad0cu: goto label_19ad0c;
        case 0x19ad10u: goto label_19ad10;
        case 0x19ad14u: goto label_19ad14;
        case 0x19ad18u: goto label_19ad18;
        case 0x19ad1cu: goto label_19ad1c;
        case 0x19ad20u: goto label_19ad20;
        case 0x19ad24u: goto label_19ad24;
        case 0x19ad28u: goto label_19ad28;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad30u: goto label_19ad30;
        case 0x19ad34u: goto label_19ad34;
        case 0x19ad38u: goto label_19ad38;
        case 0x19ad3cu: goto label_19ad3c;
        case 0x19ad40u: goto label_19ad40;
        case 0x19ad44u: goto label_19ad44;
        case 0x19ad48u: goto label_19ad48;
        case 0x19ad4cu: goto label_19ad4c;
        case 0x19ad50u: goto label_19ad50;
        case 0x19ad54u: goto label_19ad54;
        case 0x19ad58u: goto label_19ad58;
        case 0x19ad5cu: goto label_19ad5c;
        case 0x19ad60u: goto label_19ad60;
        case 0x19ad64u: goto label_19ad64;
        case 0x19ad68u: goto label_19ad68;
        case 0x19ad6cu: goto label_19ad6c;
        case 0x19ad70u: goto label_19ad70;
        case 0x19ad74u: goto label_19ad74;
        case 0x19ad78u: goto label_19ad78;
        case 0x19ad7cu: goto label_19ad7c;
        case 0x19ad80u: goto label_19ad80;
        case 0x19ad84u: goto label_19ad84;
        case 0x19ad88u: goto label_19ad88;
        case 0x19ad8cu: goto label_19ad8c;
        case 0x19ad90u: goto label_19ad90;
        case 0x19ad94u: goto label_19ad94;
        case 0x19ad98u: goto label_19ad98;
        case 0x19ad9cu: goto label_19ad9c;
        case 0x19ada0u: goto label_19ada0;
        case 0x19ada4u: goto label_19ada4;
        case 0x19ada8u: goto label_19ada8;
        case 0x19adacu: goto label_19adac;
        case 0x19adb0u: goto label_19adb0;
        case 0x19adb4u: goto label_19adb4;
        case 0x19adb8u: goto label_19adb8;
        case 0x19adbcu: goto label_19adbc;
        case 0x19adc0u: goto label_19adc0;
        case 0x19adc4u: goto label_19adc4;
        case 0x19adc8u: goto label_19adc8;
        case 0x19adccu: goto label_19adcc;
        default: break;
    }

    ctx->pc = 0x19ac48u;

label_19ac48:
    // 0x19ac48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_19ac4c:
    // 0x19ac4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_19ac50:
    // 0x19ac50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_19ac54:
    // 0x19ac54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ac54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ac58:
    // 0x19ac58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_19ac5c:
    // 0x19ac5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_19ac60:
    // 0x19ac60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19ac64:
    // 0x19ac64: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_19ac68:
    // 0x19ac68: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_19ac6c:
    // 0x19ac6c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_19ac70:
    // 0x19ac70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19ac74:
    // 0x19ac74: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_19ac78:
    // 0x19ac78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19ac7c:
    if (ctx->pc == 0x19AC7Cu) {
        ctx->pc = 0x19AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC78u;
        // 0x19ac7c: 0x262200e0  addiu       $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC80u;
        goto label_19ac80;
    }
    ctx->pc = 0x19AC78u;
    {
        const bool branch_taken_0x19ac78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC78u;
        // 0x19ac7c: 0x262200e0  addiu       $v0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac78) {
            ctx->pc = 0x19AC9Cu;
            goto label_19ac9c;
        }
    }
    ctx->pc = 0x19AC80u;
label_19ac80:
    // 0x19ac80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19ac80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19ac84:
    // 0x19ac84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ac84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ac88:
    // 0x19ac88: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x19ac88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_19ac8c:
    // 0x19ac8c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19ac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_19ac90:
    // 0x19ac90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_19ac94:
    // 0x19ac94: 0x10000003  b           . + 4 + (0x3 << 2)
label_19ac98:
    if (ctx->pc == 0x19AC98u) {
        ctx->pc = 0x19AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC94u;
        // 0x19ac98: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC9Cu;
        goto label_19ac9c;
    }
    ctx->pc = 0x19AC94u;
    {
        const bool branch_taken_0x19ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC94u;
        // 0x19ac98: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac94) {
            ctx->pc = 0x19ACA4u;
            goto label_19aca4;
        }
    }
    ctx->pc = 0x19AC9Cu;
label_19ac9c:
    // 0x19ac9c: 0xc066992  jal         func_19A648
label_19aca0:
    if (ctx->pc == 0x19ACA0u) {
        ctx->pc = 0x19ACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC9Cu;
        // 0x19aca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ACA4u;
        goto label_19aca4;
    }
    ctx->pc = 0x19AC9Cu;
    SET_GPR_U32(ctx, 31, 0x19ACA4u);
    ctx->pc = 0x19ACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC9Cu;
    // 0x19aca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A648u, 0x19AC9Cu, 0x19ACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACA4u;
label_19aca4:
    // 0x19aca4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x19aca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aca8:
    // 0x19aca8: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_19acac:
    // 0x19acac: 0x2123018  mult        $a2, $s0, $s2
    ctx->pc = 0x19acacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_19acb0:
    // 0x19acb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19acb4:
    // 0x19acb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19acb8:
    // 0x19acb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19acb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19acbc:
    // 0x19acbc: 0x24c60098  addiu       $a2, $a2, 0x98
    ctx->pc = 0x19acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
label_19acc0:
    // 0x19acc0: 0xc066a38  jal         func_19A8E0
label_19acc4:
    if (ctx->pc == 0x19ACC4u) {
        ctx->pc = 0x19ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACC0u;
        // 0x19acc4: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ACC8u;
        goto label_19acc8;
    }
    ctx->pc = 0x19ACC0u;
    SET_GPR_U32(ctx, 31, 0x19ACC8u);
    ctx->pc = 0x19ACC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ACC0u;
    // 0x19acc4: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E0u, 0x19ACC0u, 0x19ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACC8u;
label_19acc8:
    // 0x19acc8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19accc:
    // 0x19accc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x19acccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19acd0:
    // 0x19acd0: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x19acd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19acd4:
    // 0x19acd4: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
label_19acd8:
    if (ctx->pc == 0x19ACD8u) {
        ctx->pc = 0x19ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD4u;
        // 0x19acd8: 0x2123018  mult        $a2, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ACDCu;
        goto label_19acdc;
    }
    ctx->pc = 0x19ACD4u;
    {
        const bool branch_taken_0x19acd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19acd4) {
            ctx->pc = 0x19ACD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ACD4u;
            // 0x19acd8: 0x2123018  mult        $a2, $s0, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acb0;
        }
    }
    ctx->pc = 0x19ACDCu;
label_19acdc:
    // 0x19acdc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_19ace0:
    // 0x19ace0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_19ace4:
    if (ctx->pc == 0x19ACE4u) {
        ctx->pc = 0x19ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACE0u;
        // 0x19ace4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ACE8u;
        goto label_19ace8;
    }
    ctx->pc = 0x19ACE0u;
    {
        const bool branch_taken_0x19ace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACE0u;
        // 0x19ace4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ace0) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19ACE8u;
label_19ace8:
    // 0x19ace8: 0x2636002c  addiu       $s6, $s1, 0x2C
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
label_19acec:
    // 0x19acec: 0x2417001c  addiu       $s7, $zero, 0x1C
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_19acf0:
    // 0x19acf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x19acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_19acf4:
    // 0x19acf4: 0x0  nop
    ctx->pc = 0x19acf4u;
    // NOP
label_19acf8:
    // 0x19acf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19acfc:
    // 0x19acfc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_19ad00:
    // 0x19ad00: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x19ad00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19ad04:
    // 0x19ad04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19ad08:
    // 0x19ad08: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x19ad08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ad0c:
    // 0x19ad0c: 0x13a040  sll         $s4, $s3, 1
    ctx->pc = 0x19ad0cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_19ad10:
    // 0x19ad10: 0xc0669e0  jal         func_19A780
label_19ad14:
    if (ctx->pc == 0x19AD14u) {
        ctx->pc = 0x19AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD10u;
        // 0x19ad14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD18u;
        goto label_19ad18;
    }
    ctx->pc = 0x19AD10u;
    SET_GPR_U32(ctx, 31, 0x19AD18u);
    ctx->pc = 0x19AD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD10u;
    // 0x19ad14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A780u, 0x19AD10u, 0x19AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD18u;
label_19ad18:
    // 0x19ad18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x19ad18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ad1c:
    // 0x19ad1c: 0x0  nop
    ctx->pc = 0x19ad1cu;
    // NOP
label_19ad20:
    // 0x19ad20: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_19ad24:
    if (ctx->pc == 0x19AD24u) {
        ctx->pc = 0x19AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD20u;
        // 0x19ad24: 0x2902821  addu        $a1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD28u;
        goto label_19ad28;
    }
    ctx->pc = 0x19AD20u;
    {
        const bool branch_taken_0x19ad20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD20u;
        // 0x19ad24: 0x2902821  addu        $a1, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad20) {
            ctx->pc = 0x19AD4Cu;
            goto label_19ad4c;
        }
    }
    ctx->pc = 0x19AD28u;
label_19ad28:
    // 0x19ad28: 0x2173018  mult        $a2, $s0, $s7
    ctx->pc = 0x19ad28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_19ad2c:
    // 0x19ad2c: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_19ad30:
    // 0x19ad30: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x19ad30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19ad34:
    // 0x19ad34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ad38:
    // 0x19ad38: 0x24c60098  addiu       $a2, $a2, 0x98
    ctx->pc = 0x19ad38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 152));
label_19ad3c:
    // 0x19ad3c: 0xc066a38  jal         func_19A8E0
label_19ad40:
    if (ctx->pc == 0x19AD40u) {
        ctx->pc = 0x19AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD3Cu;
        // 0x19ad40: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD44u;
        goto label_19ad44;
    }
    ctx->pc = 0x19AD3Cu;
    SET_GPR_U32(ctx, 31, 0x19AD44u);
    ctx->pc = 0x19AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD3Cu;
    // 0x19ad40: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A8E0u, 0x19AD3Cu, 0x19AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD44u;
label_19ad44:
    // 0x19ad44: 0x1000000b  b           . + 4 + (0xB << 2)
label_19ad48:
    if (ctx->pc == 0x19AD48u) {
        ctx->pc = 0x19AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD44u;
        // 0x19ad48: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD4Cu;
        goto label_19ad4c;
    }
    ctx->pc = 0x19AD44u;
    {
        const bool branch_taken_0x19ad44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD44u;
        // 0x19ad48: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad44) {
            ctx->pc = 0x19AD74u;
            goto label_19ad74;
        }
    }
    ctx->pc = 0x19AD4Cu;
label_19ad4c:
    // 0x19ad4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ad4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ad50:
    // 0x19ad50: 0xc066efe  jal         func_19BBF8
label_19ad54:
    if (ctx->pc == 0x19AD54u) {
        ctx->pc = 0x19AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD50u;
        // 0x19ad54: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD58u;
        goto label_19ad58;
    }
    ctx->pc = 0x19AD50u;
    SET_GPR_U32(ctx, 31, 0x19AD58u);
    ctx->pc = 0x19AD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD50u;
    // 0x19ad54: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x19AD50u, 0x19AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD58u;
label_19ad58:
    // 0x19ad58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19ad5c:
    // 0x19ad5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ad5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ad60:
    // 0x19ad60: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_19ad64:
    // 0x19ad64: 0x8c660044  lw          $a2, 0x44($v1)
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_19ad68:
    // 0x19ad68: 0xc0f809  jalr        $a2
label_19ad6c:
    if (ctx->pc == 0x19AD6Cu) {
        ctx->pc = 0x19AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD68u;
        // 0x19ad6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD70u;
        goto label_19ad70;
    }
    ctx->pc = 0x19AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x19AD70u);
        ctx->pc = 0x19AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD68u;
        // 0x19ad6c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AD68u, 0x19AD70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19ad74:
    // 0x19ad74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x19ad74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19ad78:
    // 0x19ad78: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x19ad78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_19ad7c:
    // 0x19ad7c: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_19ad80:
    if (ctx->pc == 0x19AD80u) {
        ctx->pc = 0x19AD84u;
        goto label_19ad84;
    }
    ctx->pc = 0x19AD7Cu;
    {
        const bool branch_taken_0x19ad7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad7c) {
            ctx->pc = 0x19AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad20;
        }
    }
    ctx->pc = 0x19AD84u;
label_19ad84:
    // 0x19ad84: 0x327000ff  andi        $s0, $s3, 0xFF
    ctx->pc = 0x19ad84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_19ad88:
    // 0x19ad88: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x19ad88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_19ad8c:
    // 0x19ad8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ad90:
    if (ctx->pc == 0x19AD90u) {
        ctx->pc = 0x19AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD8Cu;
        // 0x19ad90: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD94u;
        goto label_19ad94;
    }
    ctx->pc = 0x19AD8Cu;
    {
        const bool branch_taken_0x19ad8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD8Cu;
        // 0x19ad90: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad8c) {
            ctx->pc = 0x19ADA4u;
            goto label_19ada4;
        }
    }
    ctx->pc = 0x19AD94u;
label_19ad94:
    // 0x19ad94: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_19ad98:
    // 0x19ad98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19ad98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19ad9c:
    // 0x19ad9c: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_19ada0:
    if (ctx->pc == 0x19ADA0u) {
        ctx->pc = 0x19ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD9Cu;
        // 0x19ada0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADA4u;
        goto label_19ada4;
    }
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD9Cu;
        // 0x19ada0: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19ACF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acf8;
        }
    }
    ctx->pc = 0x19ADA4u;
label_19ada4:
    // 0x19ada4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19ada4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19ada8:
    // 0x19ada8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19ada8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19adac:
    // 0x19adac: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19adacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19adb0:
    // 0x19adb0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19adb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19adb4:
    // 0x19adb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19adb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19adb8:
    // 0x19adb8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19adb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19adbc:
    // 0x19adbc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19adbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19adc0:
    // 0x19adc0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19adc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19adc4:
    // 0x19adc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19adc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19adc8:
    // 0x19adc8: 0x3e00008  jr          $ra
label_19adcc:
    if (ctx->pc == 0x19ADCCu) {
        ctx->pc = 0x19ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC8u;
        // 0x19adcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADD0u;
        goto label_fallthrough_0x19adc8;
    }
    ctx->pc = 0x19ADC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC8u;
        // 0x19adcc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19adc8:
    ctx->pc = 0x19ADD0u;
}
