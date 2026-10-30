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

// Function: sub_003E6008
// Address: 0x3e6008 - 0x3e61d8
void sub_003E6008_0x3e6008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6008_0x3e6008");
#endif

    switch (ctx->pc) {
        case 0x3e6008u: goto label_3e6008;
        case 0x3e600cu: goto label_3e600c;
        case 0x3e6010u: goto label_3e6010;
        case 0x3e6014u: goto label_3e6014;
        case 0x3e6018u: goto label_3e6018;
        case 0x3e601cu: goto label_3e601c;
        case 0x3e6020u: goto label_3e6020;
        case 0x3e6024u: goto label_3e6024;
        case 0x3e6028u: goto label_3e6028;
        case 0x3e602cu: goto label_3e602c;
        case 0x3e6030u: goto label_3e6030;
        case 0x3e6034u: goto label_3e6034;
        case 0x3e6038u: goto label_3e6038;
        case 0x3e603cu: goto label_3e603c;
        case 0x3e6040u: goto label_3e6040;
        case 0x3e6044u: goto label_3e6044;
        case 0x3e6048u: goto label_3e6048;
        case 0x3e604cu: goto label_3e604c;
        case 0x3e6050u: goto label_3e6050;
        case 0x3e6054u: goto label_3e6054;
        case 0x3e6058u: goto label_3e6058;
        case 0x3e605cu: goto label_3e605c;
        case 0x3e6060u: goto label_3e6060;
        case 0x3e6064u: goto label_3e6064;
        case 0x3e6068u: goto label_3e6068;
        case 0x3e606cu: goto label_3e606c;
        case 0x3e6070u: goto label_3e6070;
        case 0x3e6074u: goto label_3e6074;
        case 0x3e6078u: goto label_3e6078;
        case 0x3e607cu: goto label_3e607c;
        case 0x3e6080u: goto label_3e6080;
        case 0x3e6084u: goto label_3e6084;
        case 0x3e6088u: goto label_3e6088;
        case 0x3e608cu: goto label_3e608c;
        case 0x3e6090u: goto label_3e6090;
        case 0x3e6094u: goto label_3e6094;
        case 0x3e6098u: goto label_3e6098;
        case 0x3e609cu: goto label_3e609c;
        case 0x3e60a0u: goto label_3e60a0;
        case 0x3e60a4u: goto label_3e60a4;
        case 0x3e60a8u: goto label_3e60a8;
        case 0x3e60acu: goto label_3e60ac;
        case 0x3e60b0u: goto label_3e60b0;
        case 0x3e60b4u: goto label_3e60b4;
        case 0x3e60b8u: goto label_3e60b8;
        case 0x3e60bcu: goto label_3e60bc;
        case 0x3e60c0u: goto label_3e60c0;
        case 0x3e60c4u: goto label_3e60c4;
        case 0x3e60c8u: goto label_3e60c8;
        case 0x3e60ccu: goto label_3e60cc;
        case 0x3e60d0u: goto label_3e60d0;
        case 0x3e60d4u: goto label_3e60d4;
        case 0x3e60d8u: goto label_3e60d8;
        case 0x3e60dcu: goto label_3e60dc;
        case 0x3e60e0u: goto label_3e60e0;
        case 0x3e60e4u: goto label_3e60e4;
        case 0x3e60e8u: goto label_3e60e8;
        case 0x3e60ecu: goto label_3e60ec;
        case 0x3e60f0u: goto label_3e60f0;
        case 0x3e60f4u: goto label_3e60f4;
        case 0x3e60f8u: goto label_3e60f8;
        case 0x3e60fcu: goto label_3e60fc;
        case 0x3e6100u: goto label_3e6100;
        case 0x3e6104u: goto label_3e6104;
        case 0x3e6108u: goto label_3e6108;
        case 0x3e610cu: goto label_3e610c;
        case 0x3e6110u: goto label_3e6110;
        case 0x3e6114u: goto label_3e6114;
        case 0x3e6118u: goto label_3e6118;
        case 0x3e611cu: goto label_3e611c;
        case 0x3e6120u: goto label_3e6120;
        case 0x3e6124u: goto label_3e6124;
        case 0x3e6128u: goto label_3e6128;
        case 0x3e612cu: goto label_3e612c;
        case 0x3e6130u: goto label_3e6130;
        case 0x3e6134u: goto label_3e6134;
        case 0x3e6138u: goto label_3e6138;
        case 0x3e613cu: goto label_3e613c;
        case 0x3e6140u: goto label_3e6140;
        case 0x3e6144u: goto label_3e6144;
        case 0x3e6148u: goto label_3e6148;
        case 0x3e614cu: goto label_3e614c;
        case 0x3e6150u: goto label_3e6150;
        case 0x3e6154u: goto label_3e6154;
        case 0x3e6158u: goto label_3e6158;
        case 0x3e615cu: goto label_3e615c;
        case 0x3e6160u: goto label_3e6160;
        case 0x3e6164u: goto label_3e6164;
        case 0x3e6168u: goto label_3e6168;
        case 0x3e616cu: goto label_3e616c;
        case 0x3e6170u: goto label_3e6170;
        case 0x3e6174u: goto label_3e6174;
        case 0x3e6178u: goto label_3e6178;
        case 0x3e617cu: goto label_3e617c;
        case 0x3e6180u: goto label_3e6180;
        case 0x3e6184u: goto label_3e6184;
        case 0x3e6188u: goto label_3e6188;
        case 0x3e618cu: goto label_3e618c;
        case 0x3e6190u: goto label_3e6190;
        case 0x3e6194u: goto label_3e6194;
        case 0x3e6198u: goto label_3e6198;
        case 0x3e619cu: goto label_3e619c;
        case 0x3e61a0u: goto label_3e61a0;
        case 0x3e61a4u: goto label_3e61a4;
        case 0x3e61a8u: goto label_3e61a8;
        case 0x3e61acu: goto label_3e61ac;
        case 0x3e61b0u: goto label_3e61b0;
        case 0x3e61b4u: goto label_3e61b4;
        case 0x3e61b8u: goto label_3e61b8;
        case 0x3e61bcu: goto label_3e61bc;
        case 0x3e61c0u: goto label_3e61c0;
        case 0x3e61c4u: goto label_3e61c4;
        case 0x3e61c8u: goto label_3e61c8;
        case 0x3e61ccu: goto label_3e61cc;
        case 0x3e61d0u: goto label_3e61d0;
        case 0x3e61d4u: goto label_3e61d4;
        default: break;
    }

    ctx->pc = 0x3e6008u;

label_3e6008:
    // 0x3e6008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e6008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e600c:
    // 0x3e600c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e600cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3e6010:
    // 0x3e6010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e6010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e6014:
    // 0x3e6014: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e6018:
    // 0x3e6018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e6018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e601c:
    // 0x3e601c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e6020:
    // 0x3e6020: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e6020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e6024:
    // 0x3e6024: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e6024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e6028:
    // 0x3e6028: 0x40f809  jalr        $v0
label_3e602c:
    if (ctx->pc == 0x3E602Cu) {
        ctx->pc = 0x3E602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6028u;
        // 0x3e602c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6030u;
        goto label_3e6030;
    }
    ctx->pc = 0x3E6028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E6030u);
        ctx->pc = 0x3E602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6028u;
        // 0x3e602c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6028u, 0x3E6030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E6030u;
label_3e6030:
    // 0x3e6030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e6030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e6034:
    // 0x3e6034: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3e6034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3e6038:
    // 0x3e6038: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e603c:
    // 0x3e603c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3e6040:
    if (ctx->pc == 0x3E6040u) {
        ctx->pc = 0x3E6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E603Cu;
        // 0x3e6040: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6044u;
        goto label_3e6044;
    }
    ctx->pc = 0x3E603Cu;
    {
        const bool branch_taken_0x3e603c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E603Cu;
        // 0x3e6040: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e603c) {
            ctx->pc = 0x3E604Cu;
            goto label_3e604c;
        }
    }
    ctx->pc = 0x3E6044u;
label_3e6044:
    // 0x3e6044: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3e6048:
    if (ctx->pc == 0x3E6048u) {
        ctx->pc = 0x3E6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6044u;
        // 0x3e6048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E604Cu;
        goto label_3e604c;
    }
    ctx->pc = 0x3E6044u;
    {
        const bool branch_taken_0x3e6044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6044u;
        // 0x3e6048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6044) {
            ctx->pc = 0x3E61C0u;
            goto label_3e61c0;
        }
    }
    ctx->pc = 0x3E604Cu;
label_3e604c:
    // 0x3e604c: 0x14820013  bne         $a0, $v0, . + 4 + (0x13 << 2)
label_3e6050:
    if (ctx->pc == 0x3E6050u) {
        ctx->pc = 0x3E6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E604Cu;
        // 0x3e6050: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6054u;
        goto label_3e6054;
    }
    ctx->pc = 0x3E604Cu;
    {
        const bool branch_taken_0x3e604c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E604Cu;
        // 0x3e6050: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e604c) {
            ctx->pc = 0x3E609Cu;
            goto label_3e609c;
        }
    }
    ctx->pc = 0x3E6054u;
label_3e6054:
    // 0x3e6054: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e6054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6058:
    // 0x3e6058: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3e605c:
    if (ctx->pc == 0x3E605Cu) {
        ctx->pc = 0x3E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6058u;
        // 0x3e605c: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6060u;
        goto label_3e6060;
    }
    ctx->pc = 0x3E6058u;
    {
        const bool branch_taken_0x3e6058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6058u;
        // 0x3e605c: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6058) {
            ctx->pc = 0x3E608Cu;
            goto label_3e608c;
        }
    }
    ctx->pc = 0x3E6060u;
label_3e6060:
    // 0x3e6060: 0x346200ff  ori         $v0, $v1, 0xFF
    ctx->pc = 0x3e6060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
label_3e6064:
    // 0x3e6064: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3e6064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_3e6068:
    // 0x3e6068: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3e6068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3e606c:
    // 0x3e606c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e606cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e6070:
    // 0x3e6070: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3e6070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3e6074:
    // 0x3e6074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e6074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e6078:
    // 0x3e6078: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e607c:
    // 0x3e607c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e607cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e6080:
    // 0x3e6080: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e6080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e6084:
    // 0x3e6084: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e6088:
    if (ctx->pc == 0x3E6088u) {
        ctx->pc = 0x3E6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6084u;
        // 0x3e6088: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E608Cu;
        goto label_3e608c;
    }
    ctx->pc = 0x3E6084u;
    {
        const bool branch_taken_0x3e6084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6084u;
        // 0x3e6088: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6084) {
            ctx->pc = 0x3E6098u;
            goto label_3e6098;
        }
    }
    ctx->pc = 0x3E608Cu;
label_3e608c:
    // 0x3e608c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e6090:
    // 0x3e6090: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e6090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e6094:
    // 0x3e6094: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e6094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e6098:
    // 0x3e6098: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x3e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3e609c:
    // 0x3e609c: 0x1482000e  bne         $a0, $v0, . + 4 + (0xE << 2)
label_3e60a0:
    if (ctx->pc == 0x3E60A0u) {
        ctx->pc = 0x3E60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E609Cu;
        // 0x3e60a0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60A4u;
        goto label_3e60a4;
    }
    ctx->pc = 0x3E609Cu;
    {
        const bool branch_taken_0x3e609c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E609Cu;
        // 0x3e60a0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e609c) {
            ctx->pc = 0x3E60D8u;
            goto label_3e60d8;
        }
    }
    ctx->pc = 0x3E60A4u;
label_3e60a4:
    // 0x3e60a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e60a8:
    // 0x3e60a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3e60ac:
    if (ctx->pc == 0x3E60ACu) {
        ctx->pc = 0x3E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60A8u;
        // 0x3e60ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60B0u;
        goto label_3e60b0;
    }
    ctx->pc = 0x3E60A8u;
    {
        const bool branch_taken_0x3e60a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60A8u;
        // 0x3e60ac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60a8) {
            ctx->pc = 0x3E60C4u;
            goto label_3e60c4;
        }
    }
    ctx->pc = 0x3E60B0u;
label_3e60b0:
    // 0x3e60b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e60b4:
    // 0x3e60b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e60b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e60b8:
    // 0x3e60b8: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3e60b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3e60bc:
    // 0x3e60bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e60c0:
    if (ctx->pc == 0x3E60C0u) {
        ctx->pc = 0x3E60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60BCu;
        // 0x3e60c0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60C4u;
        goto label_3e60c4;
    }
    ctx->pc = 0x3E60BCu;
    {
        const bool branch_taken_0x3e60bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60BCu;
        // 0x3e60c0: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60bc) {
            ctx->pc = 0x3E60D4u;
            goto label_3e60d4;
        }
    }
    ctx->pc = 0x3E60C4u;
label_3e60c4:
    // 0x3e60c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e60c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e60c8:
    // 0x3e60c8: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3e60c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3e60cc:
    // 0x3e60cc: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3e60ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3e60d0:
    // 0x3e60d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e60d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e60d4:
    // 0x3e60d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3e60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3e60d8:
    // 0x3e60d8: 0x1482001b  bne         $a0, $v0, . + 4 + (0x1B << 2)
label_3e60dc:
    if (ctx->pc == 0x3E60DCu) {
        ctx->pc = 0x3E60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60D8u;
        // 0x3e60dc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60E0u;
        goto label_3e60e0;
    }
    ctx->pc = 0x3E60D8u;
    {
        const bool branch_taken_0x3e60d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60D8u;
        // 0x3e60dc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60d8) {
            ctx->pc = 0x3E6148u;
            goto label_3e6148;
        }
    }
    ctx->pc = 0x3E60E0u;
label_3e60e0:
    // 0x3e60e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e60e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e60e4:
    // 0x3e60e4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e60e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e60e8:
    // 0x3e60e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3e60ec:
    if (ctx->pc == 0x3E60ECu) {
        ctx->pc = 0x3E60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60E8u;
        // 0x3e60ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60F0u;
        goto label_3e60f0;
    }
    ctx->pc = 0x3E60E8u;
    {
        const bool branch_taken_0x3e60e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60E8u;
        // 0x3e60ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60e8) {
            ctx->pc = 0x3E6120u;
            goto label_3e6120;
        }
    }
    ctx->pc = 0x3E60F0u;
label_3e60f0:
    // 0x3e60f0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3e60f4:
    if (ctx->pc == 0x3E60F4u) {
        ctx->pc = 0x3E60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60F0u;
        // 0x3e60f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E60F8u;
        goto label_3e60f8;
    }
    ctx->pc = 0x3E60F0u;
    {
        const bool branch_taken_0x3e60f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E60F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E60F0u;
        // 0x3e60f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e60f0) {
            ctx->pc = 0x3E610Cu;
            goto label_3e610c;
        }
    }
    ctx->pc = 0x3E60F8u;
label_3e60f8:
    // 0x3e60f8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3e60f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3e60fc:
    // 0x3e60fc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e60fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e6100:
    // 0x3e6100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e6100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e6104:
    // 0x3e6104: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e6108:
    if (ctx->pc == 0x3E6108u) {
        ctx->pc = 0x3E6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6104u;
        // 0x3e6108: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E610Cu;
        goto label_3e610c;
    }
    ctx->pc = 0x3E6104u;
    {
        const bool branch_taken_0x3e6104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6104u;
        // 0x3e6108: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6104) {
            ctx->pc = 0x3E6124u;
            goto label_3e6124;
        }
    }
    ctx->pc = 0x3E610Cu;
label_3e610c:
    // 0x3e610c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e6110:
    if (ctx->pc == 0x3E6110u) {
        ctx->pc = 0x3E6110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E610Cu;
        // 0x3e6110: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6114u;
        goto label_3e6114;
    }
    ctx->pc = 0x3E610Cu;
    {
        const bool branch_taken_0x3e610c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e610c) {
            ctx->pc = 0x3E6110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E610Cu;
            // 0x3e6110: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6124u;
            goto label_3e6124;
        }
    }
    ctx->pc = 0x3E6114u;
label_3e6114:
    // 0x3e6114: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x3e6114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_3e6118:
    // 0x3e6118: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3e6118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3e611c:
    // 0x3e611c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e611cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e6120:
    // 0x3e6120: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3e6120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e6124:
    // 0x3e6124: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e6124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3e6128:
    // 0x3e6128: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e6128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3e612c:
    // 0x3e612c: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3e612cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e6130:
    // 0x3e6130: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e6130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6134:
    // 0x3e6134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e6138:
    // 0x3e6138: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3e613c:
    if (ctx->pc == 0x3E613Cu) {
        ctx->pc = 0x3E613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6138u;
        // 0x3e613c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6140u;
        goto label_3e6140;
    }
    ctx->pc = 0x3E6138u;
    {
        const bool branch_taken_0x3e6138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6138u;
        // 0x3e613c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6138) {
            ctx->pc = 0x3E6144u;
            goto label_3e6144;
        }
    }
    ctx->pc = 0x3E6140u;
label_3e6140:
    // 0x3e6140: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e6140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e6144:
    // 0x3e6144: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e6144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3e6148:
    // 0x3e6148: 0x1482001d  bne         $a0, $v0, . + 4 + (0x1D << 2)
label_3e614c:
    if (ctx->pc == 0x3E614Cu) {
        ctx->pc = 0x3E614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6148u;
        // 0x3e614c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6150u;
        goto label_3e6150;
    }
    ctx->pc = 0x3E6148u;
    {
        const bool branch_taken_0x3e6148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6148u;
        // 0x3e614c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6148) {
            ctx->pc = 0x3E61C0u;
            goto label_3e61c0;
        }
    }
    ctx->pc = 0x3E6150u;
label_3e6150:
    // 0x3e6150: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e6150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e6154:
    // 0x3e6154: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3e6158:
    if (ctx->pc == 0x3E6158u) {
        ctx->pc = 0x3E6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6154u;
        // 0x3e6158: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E615Cu;
        goto label_3e615c;
    }
    ctx->pc = 0x3E6154u;
    {
        const bool branch_taken_0x3e6154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6154) {
            ctx->pc = 0x3E6158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6154u;
            // 0x3e6158: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6188u;
            goto label_3e6188;
        }
    }
    ctx->pc = 0x3E615Cu;
label_3e615c:
    // 0x3e615c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e6160:
    // 0x3e6160: 0xc0e858c  jal         func_3A1630
label_3e6164:
    if (ctx->pc == 0x3E6164u) {
        ctx->pc = 0x3E6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6160u;
        // 0x3e6164: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6168u;
        goto label_3e6168;
    }
    ctx->pc = 0x3E6160u;
    SET_GPR_U32(ctx, 31, 0x3E6168u);
    ctx->pc = 0x3E6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6160u;
    // 0x3e6164: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E6160u, 0x3E6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6168u;
label_3e6168:
    // 0x3e6168: 0x3c013d50  lui         $at, 0x3D50
    ctx->pc = 0x3e6168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15696 << 16));
label_3e616c:
    // 0x3e616c: 0x3421e560  ori         $at, $at, 0xE560
    ctx->pc = 0x3e616cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58720);
label_3e6170:
    // 0x3e6170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e6170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e6174:
    // 0x3e6174: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3e6174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3e6178:
    // 0x3e6178: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3e6178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3e617c:
    // 0x3e617c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e617cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e6180:
    // 0x3e6180: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e6184:
    if (ctx->pc == 0x3E6184u) {
        ctx->pc = 0x3E6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6180u;
        // 0x3e6184: 0xe62000bc  swc1        $f0, 0xBC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E6188u;
        goto label_3e6188;
    }
    ctx->pc = 0x3E6180u;
    {
        const bool branch_taken_0x3e6180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6180u;
        // 0x3e6184: 0xe62000bc  swc1        $f0, 0xBC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6180) {
            ctx->pc = 0x3E61A0u;
            goto label_3e61a0;
        }
    }
    ctx->pc = 0x3E6188u;
label_3e6188:
    // 0x3e6188: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x3e6188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_3e618c:
    // 0x3e618c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3e618cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_3e6190:
    // 0x3e6190: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3e6190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3e6194:
    // 0x3e6194: 0xc62100bc  lwc1        $f1, 0xBC($s1)
    ctx->pc = 0x3e6194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e6198:
    // 0x3e6198: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3e6198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3e619c:
    // 0x3e619c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3e619cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3e61a0:
    // 0x3e61a0: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3e61a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3e61a4:
    // 0x3e61a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e61a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e61a8:
    // 0x3e61a8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3e61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3e61ac:
    // 0x3e61ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e61acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e61b0:
    // 0x3e61b0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_3e61b4:
    if (ctx->pc == 0x3E61B4u) {
        ctx->pc = 0x3E61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61B0u;
        // 0x3e61b4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61B8u;
        goto label_3e61b8;
    }
    ctx->pc = 0x3E61B0u;
    {
        const bool branch_taken_0x3e61b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61B0u;
        // 0x3e61b4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e61b0) {
            ctx->pc = 0x3E61BCu;
            goto label_3e61bc;
        }
    }
    ctx->pc = 0x3E61B8u;
label_3e61b8:
    // 0x3e61b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3e61b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3e61bc:
    // 0x3e61bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e61bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e61c0:
    // 0x3e61c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e61c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e61c4:
    // 0x3e61c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e61c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e61c8:
    // 0x3e61c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e61c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e61cc:
    // 0x3e61cc: 0x3e00008  jr          $ra
label_3e61d0:
    if (ctx->pc == 0x3E61D0u) {
        ctx->pc = 0x3E61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61CCu;
        // 0x3e61d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E61D4u;
        goto label_3e61d4;
    }
    ctx->pc = 0x3E61CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E61D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E61CCu;
        // 0x3e61d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E61CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E61D4u;
label_3e61d4:
    // 0x3e61d4: 0x0  nop
    ctx->pc = 0x3e61d4u;
    // NOP
    ctx->pc = 0x3e61d8u;
}
