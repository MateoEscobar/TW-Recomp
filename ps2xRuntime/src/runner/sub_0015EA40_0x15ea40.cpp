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

// Function: sub_0015EA40
// Address: 0x15ea40 - 0x15eca0
void sub_0015EA40_0x15ea40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EA40_0x15ea40");
#endif

    switch (ctx->pc) {
        case 0x15ea40u: goto label_15ea40;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea48u: goto label_15ea48;
        case 0x15ea4cu: goto label_15ea4c;
        case 0x15ea50u: goto label_15ea50;
        case 0x15ea54u: goto label_15ea54;
        case 0x15ea58u: goto label_15ea58;
        case 0x15ea5cu: goto label_15ea5c;
        case 0x15ea60u: goto label_15ea60;
        case 0x15ea64u: goto label_15ea64;
        case 0x15ea68u: goto label_15ea68;
        case 0x15ea6cu: goto label_15ea6c;
        case 0x15ea70u: goto label_15ea70;
        case 0x15ea74u: goto label_15ea74;
        case 0x15ea78u: goto label_15ea78;
        case 0x15ea7cu: goto label_15ea7c;
        case 0x15ea80u: goto label_15ea80;
        case 0x15ea84u: goto label_15ea84;
        case 0x15ea88u: goto label_15ea88;
        case 0x15ea8cu: goto label_15ea8c;
        case 0x15ea90u: goto label_15ea90;
        case 0x15ea94u: goto label_15ea94;
        case 0x15ea98u: goto label_15ea98;
        case 0x15ea9cu: goto label_15ea9c;
        case 0x15eaa0u: goto label_15eaa0;
        case 0x15eaa4u: goto label_15eaa4;
        case 0x15eaa8u: goto label_15eaa8;
        case 0x15eaacu: goto label_15eaac;
        case 0x15eab0u: goto label_15eab0;
        case 0x15eab4u: goto label_15eab4;
        case 0x15eab8u: goto label_15eab8;
        case 0x15eabcu: goto label_15eabc;
        case 0x15eac0u: goto label_15eac0;
        case 0x15eac4u: goto label_15eac4;
        case 0x15eac8u: goto label_15eac8;
        case 0x15eaccu: goto label_15eacc;
        case 0x15ead0u: goto label_15ead0;
        case 0x15ead4u: goto label_15ead4;
        case 0x15ead8u: goto label_15ead8;
        case 0x15eadcu: goto label_15eadc;
        case 0x15eae0u: goto label_15eae0;
        case 0x15eae4u: goto label_15eae4;
        case 0x15eae8u: goto label_15eae8;
        case 0x15eaecu: goto label_15eaec;
        case 0x15eaf0u: goto label_15eaf0;
        case 0x15eaf4u: goto label_15eaf4;
        case 0x15eaf8u: goto label_15eaf8;
        case 0x15eafcu: goto label_15eafc;
        case 0x15eb00u: goto label_15eb00;
        case 0x15eb04u: goto label_15eb04;
        case 0x15eb08u: goto label_15eb08;
        case 0x15eb0cu: goto label_15eb0c;
        case 0x15eb10u: goto label_15eb10;
        case 0x15eb14u: goto label_15eb14;
        case 0x15eb18u: goto label_15eb18;
        case 0x15eb1cu: goto label_15eb1c;
        case 0x15eb20u: goto label_15eb20;
        case 0x15eb24u: goto label_15eb24;
        case 0x15eb28u: goto label_15eb28;
        case 0x15eb2cu: goto label_15eb2c;
        case 0x15eb30u: goto label_15eb30;
        case 0x15eb34u: goto label_15eb34;
        case 0x15eb38u: goto label_15eb38;
        case 0x15eb3cu: goto label_15eb3c;
        case 0x15eb40u: goto label_15eb40;
        case 0x15eb44u: goto label_15eb44;
        case 0x15eb48u: goto label_15eb48;
        case 0x15eb4cu: goto label_15eb4c;
        case 0x15eb50u: goto label_15eb50;
        case 0x15eb54u: goto label_15eb54;
        case 0x15eb58u: goto label_15eb58;
        case 0x15eb5cu: goto label_15eb5c;
        case 0x15eb60u: goto label_15eb60;
        case 0x15eb64u: goto label_15eb64;
        case 0x15eb68u: goto label_15eb68;
        case 0x15eb6cu: goto label_15eb6c;
        case 0x15eb70u: goto label_15eb70;
        case 0x15eb74u: goto label_15eb74;
        case 0x15eb78u: goto label_15eb78;
        case 0x15eb7cu: goto label_15eb7c;
        case 0x15eb80u: goto label_15eb80;
        case 0x15eb84u: goto label_15eb84;
        case 0x15eb88u: goto label_15eb88;
        case 0x15eb8cu: goto label_15eb8c;
        case 0x15eb90u: goto label_15eb90;
        case 0x15eb94u: goto label_15eb94;
        case 0x15eb98u: goto label_15eb98;
        case 0x15eb9cu: goto label_15eb9c;
        case 0x15eba0u: goto label_15eba0;
        case 0x15eba4u: goto label_15eba4;
        case 0x15eba8u: goto label_15eba8;
        case 0x15ebacu: goto label_15ebac;
        case 0x15ebb0u: goto label_15ebb0;
        case 0x15ebb4u: goto label_15ebb4;
        case 0x15ebb8u: goto label_15ebb8;
        case 0x15ebbcu: goto label_15ebbc;
        case 0x15ebc0u: goto label_15ebc0;
        case 0x15ebc4u: goto label_15ebc4;
        case 0x15ebc8u: goto label_15ebc8;
        case 0x15ebccu: goto label_15ebcc;
        case 0x15ebd0u: goto label_15ebd0;
        case 0x15ebd4u: goto label_15ebd4;
        case 0x15ebd8u: goto label_15ebd8;
        case 0x15ebdcu: goto label_15ebdc;
        case 0x15ebe0u: goto label_15ebe0;
        case 0x15ebe4u: goto label_15ebe4;
        case 0x15ebe8u: goto label_15ebe8;
        case 0x15ebecu: goto label_15ebec;
        case 0x15ebf0u: goto label_15ebf0;
        case 0x15ebf4u: goto label_15ebf4;
        case 0x15ebf8u: goto label_15ebf8;
        case 0x15ebfcu: goto label_15ebfc;
        case 0x15ec00u: goto label_15ec00;
        case 0x15ec04u: goto label_15ec04;
        case 0x15ec08u: goto label_15ec08;
        case 0x15ec0cu: goto label_15ec0c;
        case 0x15ec10u: goto label_15ec10;
        case 0x15ec14u: goto label_15ec14;
        case 0x15ec18u: goto label_15ec18;
        case 0x15ec1cu: goto label_15ec1c;
        case 0x15ec20u: goto label_15ec20;
        case 0x15ec24u: goto label_15ec24;
        case 0x15ec28u: goto label_15ec28;
        case 0x15ec2cu: goto label_15ec2c;
        case 0x15ec30u: goto label_15ec30;
        case 0x15ec34u: goto label_15ec34;
        case 0x15ec38u: goto label_15ec38;
        case 0x15ec3cu: goto label_15ec3c;
        case 0x15ec40u: goto label_15ec40;
        case 0x15ec44u: goto label_15ec44;
        case 0x15ec48u: goto label_15ec48;
        case 0x15ec4cu: goto label_15ec4c;
        case 0x15ec50u: goto label_15ec50;
        case 0x15ec54u: goto label_15ec54;
        case 0x15ec58u: goto label_15ec58;
        case 0x15ec5cu: goto label_15ec5c;
        case 0x15ec60u: goto label_15ec60;
        case 0x15ec64u: goto label_15ec64;
        case 0x15ec68u: goto label_15ec68;
        case 0x15ec6cu: goto label_15ec6c;
        case 0x15ec70u: goto label_15ec70;
        case 0x15ec74u: goto label_15ec74;
        case 0x15ec78u: goto label_15ec78;
        case 0x15ec7cu: goto label_15ec7c;
        case 0x15ec80u: goto label_15ec80;
        case 0x15ec84u: goto label_15ec84;
        case 0x15ec88u: goto label_15ec88;
        case 0x15ec8cu: goto label_15ec8c;
        case 0x15ec90u: goto label_15ec90;
        case 0x15ec94u: goto label_15ec94;
        case 0x15ec98u: goto label_15ec98;
        case 0x15ec9cu: goto label_15ec9c;
        default: break;
    }

    ctx->pc = 0x15ea40u;

label_15ea40:
    // 0x15ea40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15ea44:
    // 0x15ea44: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_15ea48:
    // 0x15ea48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15ea48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15ea4c:
    // 0x15ea4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15ea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_15ea50:
    // 0x15ea50: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x15ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_15ea54:
    // 0x15ea54: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15ea54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_15ea58:
    // 0x15ea58: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15ea58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_15ea5c:
    // 0x15ea5c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_15ea60:
    // 0x15ea60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15ea64:
    // 0x15ea64: 0xc07c6d8  jal         func_1F1B60
label_15ea68:
    if (ctx->pc == 0x15EA68u) {
        ctx->pc = 0x15EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA64u;
        // 0x15ea68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA6Cu;
        goto label_15ea6c;
    }
    ctx->pc = 0x15EA64u;
    SET_GPR_U32(ctx, 31, 0x15EA6Cu);
    ctx->pc = 0x15EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA64u;
    // 0x15ea68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1B60u, 0x15EA64u, 0x15EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA6Cu;
label_15ea6c:
    // 0x15ea6c: 0xc66000e4  lwc1        $f0, 0xE4($s3)
    ctx->pc = 0x15ea6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15ea70:
    // 0x15ea70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ea74:
    // 0x15ea74: 0xc07f87a  jal         func_1FE1E8
label_15ea78:
    if (ctx->pc == 0x15EA78u) {
        ctx->pc = 0x15EA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA74u;
        // 0x15ea78: 0xe44047cc  swc1        $f0, 0x47CC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18380), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA7Cu;
        goto label_15ea7c;
    }
    ctx->pc = 0x15EA74u;
    SET_GPR_U32(ctx, 31, 0x15EA7Cu);
    ctx->pc = 0x15EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA74u;
    // 0x15ea78: 0xe44047cc  swc1        $f0, 0x47CC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E8u, 0x15EA74u, 0x15EA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA7Cu;
label_15ea7c:
    // 0x15ea7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ea80:
    // 0x15ea80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ea84:
    // 0x15ea84: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
label_15ea88:
    if (ctx->pc == 0x15EA88u) {
        ctx->pc = 0x15EA8Cu;
        goto label_15ea8c;
    }
    ctx->pc = 0x15EA84u;
    {
        const bool branch_taken_0x15ea84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ea84) {
            ctx->pc = 0x15EAA0u;
            goto label_15eaa0;
        }
    }
    ctx->pc = 0x15EA8Cu;
label_15ea8c:
    // 0x15ea8c: 0x8e6300e0  lw          $v1, 0xE0($s3)
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_15ea90:
    // 0x15ea90: 0x38620008  xori        $v0, $v1, 0x8
    ctx->pc = 0x15ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_15ea94:
    // 0x15ea94: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15ea98:
    if (ctx->pc == 0x15EA98u) {
        ctx->pc = 0x15EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA94u;
        // 0x15ea98: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EA9Cu;
        goto label_15ea9c;
    }
    ctx->pc = 0x15EA94u;
    {
        const bool branch_taken_0x15ea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA94u;
        // 0x15ea98: 0x38620012  xori        $v0, $v1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea94) {
            ctx->pc = 0x15EAA0u;
            goto label_15eaa0;
        }
    }
    ctx->pc = 0x15EA9Cu;
label_15ea9c:
    // 0x15ea9c: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x15ea9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_15eaa0:
    // 0x15eaa0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_15eaa4:
    if (ctx->pc == 0x15EAA4u) {
        ctx->pc = 0x15EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAA0u;
        // 0x15eaa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAA8u;
        goto label_15eaa8;
    }
    ctx->pc = 0x15EAA0u;
    {
        const bool branch_taken_0x15eaa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAA0u;
        // 0x15eaa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eaa0) {
            ctx->pc = 0x15EABCu;
            goto label_15eabc;
        }
    }
    ctx->pc = 0x15EAA8u;
label_15eaa8:
    // 0x15eaa8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_15eaac:
    // 0x15eaac: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x15eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_15eab0:
    // 0x15eab0: 0x24a5fac0  addiu       $a1, $a1, -0x540
    ctx->pc = 0x15eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965952));
label_15eab4:
    // 0x15eab4: 0xc043e94  jal         func_10FA50
label_15eab8:
    if (ctx->pc == 0x15EAB8u) {
        ctx->pc = 0x15EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAB4u;
        // 0x15eab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EABCu;
        goto label_15eabc;
    }
    ctx->pc = 0x15EAB4u;
    SET_GPR_U32(ctx, 31, 0x15EABCu);
    ctx->pc = 0x15EAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAB4u;
    // 0x15eab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15EAB4u, 0x15EABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EABCu;
label_15eabc:
    // 0x15eabc: 0xc07f87a  jal         func_1FE1E8
label_15eac0:
    if (ctx->pc == 0x15EAC0u) {
        ctx->pc = 0x15EAC4u;
        goto label_15eac4;
    }
    ctx->pc = 0x15EABCu;
    SET_GPR_U32(ctx, 31, 0x15EAC4u);
    ctx->pc = 0x1FE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E8u, 0x15EABCu, 0x15EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAC4u;
label_15eac4:
    // 0x15eac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15eac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15eac8:
    // 0x15eac8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_15eacc:
    if (ctx->pc == 0x15EACCu) {
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAD0u;
        goto label_15ead0;
    }
    ctx->pc = 0x15EAC8u;
    {
        const bool branch_taken_0x15eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x15EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAC8u;
        // 0x15eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eac8) {
            ctx->pc = 0x15EAECu;
            goto label_15eaec;
        }
    }
    ctx->pc = 0x15EAD0u;
label_15ead0:
    // 0x15ead0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x15ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_15ead4:
    // 0x15ead4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x15ead4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_15ead8:
    // 0x15ead8: 0x8e6400d0  lw          $a0, 0xD0($s3)
    ctx->pc = 0x15ead8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_15eadc:
    // 0x15eadc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x15eadcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15eae0:
    // 0x15eae0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x15eae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_15eae4:
    // 0x15eae4: 0xc046ddc  jal         func_11B770
label_15eae8:
    if (ctx->pc == 0x15EAE8u) {
        ctx->pc = 0x15EAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAE4u;
        // 0x15eae8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAECu;
        goto label_15eaec;
    }
    ctx->pc = 0x15EAE4u;
    SET_GPR_U32(ctx, 31, 0x15EAECu);
    ctx->pc = 0x15EAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAE4u;
    // 0x15eae8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B770u, 0x15EAE4u, 0x15EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAECu;
label_15eaec:
    // 0x15eaec: 0xc0639e0  jal         func_18E780
label_15eaf0:
    if (ctx->pc == 0x15EAF0u) {
        ctx->pc = 0x15EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EAECu;
        // 0x15eaf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EAF4u;
        goto label_15eaf4;
    }
    ctx->pc = 0x15EAECu;
    SET_GPR_U32(ctx, 31, 0x15EAF4u);
    ctx->pc = 0x15EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EAECu;
    // 0x15eaf0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E780u, 0x15EAECu, 0x15EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EAF4u;
label_15eaf4:
    // 0x15eaf4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_15eaf8:
    // 0x15eaf8: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x15eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
label_15eafc:
    // 0x15eafc: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
label_15eb00:
    // 0x15eb00: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_15eb04:
    if (ctx->pc == 0x15EB04u) {
        ctx->pc = 0x15EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB00u;
        // 0x15eb04: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB08u;
        goto label_15eb08;
    }
    ctx->pc = 0x15EB00u;
    {
        const bool branch_taken_0x15eb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB00u;
        // 0x15eb04: 0x3c14006f  lui         $s4, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb00) {
            ctx->pc = 0x15EB50u;
            goto label_15eb50;
        }
    }
    ctx->pc = 0x15EB08u;
label_15eb08:
    // 0x15eb08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15eb08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15eb0c:
    // 0x15eb0c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x15eb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_15eb10:
    // 0x15eb10: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x15eb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_15eb14:
    // 0x15eb14: 0x0  nop
    ctx->pc = 0x15eb14u;
    // NOP
label_15eb18:
    // 0x15eb18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15eb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_15eb1c:
    // 0x15eb1c: 0xc0e409a  jal         func_390268
label_15eb20:
    if (ctx->pc == 0x15EB20u) {
        ctx->pc = 0x15EB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB1Cu;
        // 0x15eb20: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB24u;
        goto label_15eb24;
    }
    ctx->pc = 0x15EB1Cu;
    SET_GPR_U32(ctx, 31, 0x15EB24u);
    ctx->pc = 0x15EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB1Cu;
    // 0x15eb20: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x15EB1Cu, 0x15EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB24u;
label_15eb24:
    // 0x15eb24: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15eb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_15eb28:
    // 0x15eb28: 0xc087502  jal         func_21D408
label_15eb2c:
    if (ctx->pc == 0x15EB2Cu) {
        ctx->pc = 0x15EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB28u;
        // 0x15eb2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB30u;
        goto label_15eb30;
    }
    ctx->pc = 0x15EB28u;
    SET_GPR_U32(ctx, 31, 0x15EB30u);
    ctx->pc = 0x15EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB28u;
    // 0x15eb2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x15EB28u, 0x15EB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB30u;
label_15eb30:
    // 0x15eb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15eb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15eb34:
    // 0x15eb34: 0xc0a33b6  jal         func_28CED8
label_15eb38:
    if (ctx->pc == 0x15EB38u) {
        ctx->pc = 0x15EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB34u;
        // 0x15eb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB3Cu;
        goto label_15eb3c;
    }
    ctx->pc = 0x15EB34u;
    SET_GPR_U32(ctx, 31, 0x15EB3Cu);
    ctx->pc = 0x15EB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EB34u;
    // 0x15eb38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x15EB34u, 0x15EB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB3Cu;
label_15eb3c:
    // 0x15eb3c: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_15eb40:
    // 0x15eb40: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
label_15eb44:
    // 0x15eb44: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x15eb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_15eb48:
    // 0x15eb48: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_15eb4c:
    if (ctx->pc == 0x15EB4Cu) {
        ctx->pc = 0x15EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB48u;
        // 0x15eb4c: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB50u;
        goto label_15eb50;
    }
    ctx->pc = 0x15EB48u;
    {
        const bool branch_taken_0x15eb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB48u;
        // 0x15eb4c: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb48) {
            ctx->pc = 0x15EB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eb18;
        }
    }
    ctx->pc = 0x15EB50u;
label_15eb50:
    // 0x15eb50: 0x8e6400d4  lw          $a0, 0xD4($s3)
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_15eb54:
    // 0x15eb54: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x15eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
label_15eb58:
    // 0x15eb58: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_15eb5c:
    if (ctx->pc == 0x15EB5Cu) {
        ctx->pc = 0x15EB60u;
        goto label_15eb60;
    }
    ctx->pc = 0x15EB58u;
    {
        const bool branch_taken_0x15eb58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15eb58) {
            ctx->pc = 0x15EB70u;
            goto label_15eb70;
        }
    }
    ctx->pc = 0x15EB60u;
label_15eb60:
    // 0x15eb60: 0xc046e22  jal         func_11B888
label_15eb64:
    if (ctx->pc == 0x15EB64u) {
        ctx->pc = 0x15EB68u;
        goto label_15eb68;
    }
    ctx->pc = 0x15EB60u;
    SET_GPR_U32(ctx, 31, 0x15EB68u);
    ctx->pc = 0x11B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B888u, 0x15EB60u, 0x15EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB68u;
label_15eb68:
    // 0x15eb68: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x15eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
label_15eb6c:
    // 0x15eb6c: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x15eb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_15eb70:
    // 0x15eb70: 0xc07f87a  jal         func_1FE1E8
label_15eb74:
    if (ctx->pc == 0x15EB74u) {
        ctx->pc = 0x15EB78u;
        goto label_15eb78;
    }
    ctx->pc = 0x15EB70u;
    SET_GPR_U32(ctx, 31, 0x15EB78u);
    ctx->pc = 0x1FE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1E8u, 0x15EB70u, 0x15EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EB78u;
label_15eb78:
    // 0x15eb78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_15eb7c:
    if (ctx->pc == 0x15EB7Cu) {
        ctx->pc = 0x15EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB78u;
        // 0x15eb7c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB80u;
        goto label_15eb80;
    }
    ctx->pc = 0x15EB78u;
    {
        const bool branch_taken_0x15eb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB78u;
        // 0x15eb7c: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb78) {
            ctx->pc = 0x15EBCCu;
            goto label_15ebcc;
        }
    }
    ctx->pc = 0x15EB80u;
label_15eb80:
    // 0x15eb80: 0x8c4567c0  lw          $a1, 0x67C0($v0)
    ctx->pc = 0x15eb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26560)));
label_15eb84:
    // 0x15eb84: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
label_15eb88:
    if (ctx->pc == 0x15EB88u) {
        ctx->pc = 0x15EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB84u;
        // 0x15eb88: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EB8Cu;
        goto label_15eb8c;
    }
    ctx->pc = 0x15EB84u;
    {
        const bool branch_taken_0x15eb84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB84u;
        // 0x15eb88: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eb84) {
            ctx->pc = 0x15EBCCu;
            goto label_15ebcc;
        }
    }
    ctx->pc = 0x15EB8Cu;
label_15eb8c:
    // 0x15eb8c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15eb90:
    // 0x15eb90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15eb94:
    // 0x15eb94: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15eb98:
    // 0x15eb98: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15eb9c:
    // 0x15eb9c: 0x40f809  jalr        $v0
label_15eba0:
    if (ctx->pc == 0x15EBA0u) {
        ctx->pc = 0x15EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB9Cu;
        // 0x15eba0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBA4u;
        goto label_15eba4;
    }
    ctx->pc = 0x15EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15EBA4u);
        ctx->pc = 0x15EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EB9Cu;
        // 0x15eba0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EB9Cu, 0x15EBA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBA4u;
label_15eba4:
    // 0x15eba4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15eba8:
    // 0x15eba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15eba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ebac:
    // 0x15ebac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ebacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ebb0:
    // 0x15ebb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15ebb4:
    // 0x15ebb4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15ebb8:
    // 0x15ebb8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15ebbc:
    // 0x15ebbc: 0x60f809  jalr        $v1
label_15ebc0:
    if (ctx->pc == 0x15EBC0u) {
        ctx->pc = 0x15EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBBCu;
        // 0x15ebc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBC4u;
        goto label_15ebc4;
    }
    ctx->pc = 0x15EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EBC4u);
        ctx->pc = 0x15EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBBCu;
        // 0x15ebc0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBBCu, 0x15EBC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EBC4u;
label_15ebc4:
    // 0x15ebc4: 0x10000024  b           . + 4 + (0x24 << 2)
label_15ebc8:
    if (ctx->pc == 0x15EBC8u) {
        ctx->pc = 0x15EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC4u;
        // 0x15ebc8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBCCu;
        goto label_15ebcc;
    }
    ctx->pc = 0x15EBC4u;
    {
        const bool branch_taken_0x15ebc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBC4u;
        // 0x15ebc8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebc4) {
            ctx->pc = 0x15EC58u;
            goto label_15ec58;
        }
    }
    ctx->pc = 0x15EBCCu;
label_15ebcc:
    // 0x15ebcc: 0xc07f882  jal         func_1FE208
label_15ebd0:
    if (ctx->pc == 0x15EBD0u) {
        ctx->pc = 0x15EBD4u;
        goto label_15ebd4;
    }
    ctx->pc = 0x15EBCCu;
    SET_GPR_U32(ctx, 31, 0x15EBD4u);
    ctx->pc = 0x1FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE208u, 0x15EBCCu, 0x15EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBD4u;
label_15ebd4:
    // 0x15ebd4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_15ebd8:
    if (ctx->pc == 0x15EBD8u) {
        ctx->pc = 0x15EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBD4u;
        // 0x15ebd8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBDCu;
        goto label_15ebdc;
    }
    ctx->pc = 0x15EBD4u;
    {
        const bool branch_taken_0x15ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBD4u;
        // 0x15ebd8: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebd4) {
            ctx->pc = 0x15EC58u;
            goto label_15ec58;
        }
    }
    ctx->pc = 0x15EBDCu;
label_15ebdc:
    // 0x15ebdc: 0xc080fee  jal         func_203FB8
label_15ebe0:
    if (ctx->pc == 0x15EBE0u) {
        ctx->pc = 0x15EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBDCu;
        // 0x15ebe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBE4u;
        goto label_15ebe4;
    }
    ctx->pc = 0x15EBDCu;
    SET_GPR_U32(ctx, 31, 0x15EBE4u);
    ctx->pc = 0x15EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EBDCu;
    // 0x15ebe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x15EBDCu, 0x15EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EBE4u;
label_15ebe4:
    // 0x15ebe4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15ebe8:
    // 0x15ebe8: 0x8c4567c4  lw          $a1, 0x67C4($v0)
    ctx->pc = 0x15ebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26564)));
label_15ebec:
    // 0x15ebec: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_15ebf0:
    if (ctx->pc == 0x15EBF0u) {
        ctx->pc = 0x15EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBECu;
        // 0x15ebf0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EBF4u;
        goto label_15ebf4;
    }
    ctx->pc = 0x15EBECu;
    {
        const bool branch_taken_0x15ebec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EBECu;
        // 0x15ebf0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ebec) {
            ctx->pc = 0x15EC54u;
            goto label_15ec54;
        }
    }
    ctx->pc = 0x15EBF4u;
label_15ebf4:
    // 0x15ebf4: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x15ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15ebf8:
    // 0x15ebf8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15ebfc:
    // 0x15ebfc: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15ebfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15ec00:
    // 0x15ec00: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15ec04:
    // 0x15ec04: 0x40f809  jalr        $v0
label_15ec08:
    if (ctx->pc == 0x15EC08u) {
        ctx->pc = 0x15EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC04u;
        // 0x15ec08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC0Cu;
        goto label_15ec0c;
    }
    ctx->pc = 0x15EC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15EC0Cu);
        ctx->pc = 0x15EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC04u;
        // 0x15ec08: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC04u, 0x15EC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EC0Cu;
label_15ec0c:
    // 0x15ec0c: 0x8e512b04  lw          $s1, 0x2B04($s2)
    ctx->pc = 0x15ec0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15ec10:
    // 0x15ec10: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x15ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_15ec14:
    // 0x15ec14: 0x86020070  lh          $v0, 0x70($s0)
    ctx->pc = 0x15ec14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_15ec18:
    // 0x15ec18: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x15ec18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_15ec1c:
    // 0x15ec1c: 0xc07f872  jal         func_1FE1C8
label_15ec20:
    if (ctx->pc == 0x15EC20u) {
        ctx->pc = 0x15EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC1Cu;
        // 0x15ec20: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC24u;
        goto label_15ec24;
    }
    ctx->pc = 0x15EC1Cu;
    SET_GPR_U32(ctx, 31, 0x15EC24u);
    ctx->pc = 0x15EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC1Cu;
    // 0x15ec20: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE1C8u, 0x15EC1Cu, 0x15EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC24u;
label_15ec24:
    // 0x15ec24: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15ec24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15ec28:
    // 0x15ec28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15ec2c:
    // 0x15ec2c: 0x60f809  jalr        $v1
label_15ec30:
    if (ctx->pc == 0x15EC30u) {
        ctx->pc = 0x15EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC2Cu;
        // 0x15ec30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC34u;
        goto label_15ec34;
    }
    ctx->pc = 0x15EC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EC34u);
        ctx->pc = 0x15EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC2Cu;
        // 0x15ec30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC2Cu, 0x15EC34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EC34u;
label_15ec34:
    // 0x15ec34: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_15ec38:
    // 0x15ec38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ec3c:
    // 0x15ec3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ec3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec40:
    // 0x15ec40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15ec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15ec44:
    // 0x15ec44: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15ec44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15ec48:
    // 0x15ec48: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15ec4c:
    // 0x15ec4c: 0x60f809  jalr        $v1
label_15ec50:
    if (ctx->pc == 0x15EC50u) {
        ctx->pc = 0x15EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC4Cu;
        // 0x15ec50: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC54u;
        goto label_15ec54;
    }
    ctx->pc = 0x15EC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EC54u);
        ctx->pc = 0x15EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC4Cu;
        // 0x15ec50: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC4Cu, 0x15EC54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EC54u;
label_15ec54:
    // 0x15ec54: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x15ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_15ec58:
    // 0x15ec58: 0x2442ef80  addiu       $v0, $v0, -0x1080
    ctx->pc = 0x15ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_15ec5c:
    // 0x15ec5c: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x15ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
label_15ec60:
    // 0x15ec60: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_15ec64:
    if (ctx->pc == 0x15EC64u) {
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC68u;
        goto label_15ec68;
    }
    ctx->pc = 0x15EC60u;
    {
        const bool branch_taken_0x15ec60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC60u;
        // 0x15ec64: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec60) {
            ctx->pc = 0x15EC74u;
            goto label_15ec74;
        }
    }
    ctx->pc = 0x15EC68u;
label_15ec68:
    // 0x15ec68: 0xc0554c2  jal         func_155308
label_15ec6c:
    if (ctx->pc == 0x15EC6Cu) {
        ctx->pc = 0x15EC70u;
        goto label_15ec70;
    }
    ctx->pc = 0x15EC68u;
    SET_GPR_U32(ctx, 31, 0x15EC70u);
    ctx->pc = 0x155308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155308u, 0x15EC68u, 0x15EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC70u;
label_15ec70:
    // 0x15ec70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15ec74:
    // 0x15ec74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ec74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ec78:
    // 0x15ec78: 0xc0517d8  jal         func_145F60
label_15ec7c:
    if (ctx->pc == 0x15EC7Cu) {
        ctx->pc = 0x15EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC78u;
        // 0x15ec7c: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EC80u;
        goto label_15ec80;
    }
    ctx->pc = 0x15EC78u;
    SET_GPR_U32(ctx, 31, 0x15EC80u);
    ctx->pc = 0x15EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EC78u;
    // 0x15ec7c: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15EC78u, 0x15EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EC80u;
label_15ec80:
    // 0x15ec80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15ec80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15ec84:
    // 0x15ec84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15ec84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15ec88:
    // 0x15ec88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15ec88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15ec8c:
    // 0x15ec8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15ec8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15ec90:
    // 0x15ec90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15ec90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15ec94:
    // 0x15ec94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ec94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ec98:
    // 0x15ec98: 0x3e00008  jr          $ra
label_15ec9c:
    if (ctx->pc == 0x15EC9Cu) {
        ctx->pc = 0x15EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC98u;
        // 0x15ec9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ECA0u;
        goto label_fallthrough_0x15ec98;
    }
    ctx->pc = 0x15EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC98u;
        // 0x15ec9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15ec98:
    ctx->pc = 0x15ECA0u;
}
