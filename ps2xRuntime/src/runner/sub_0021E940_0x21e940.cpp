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

// Function: sub_0021E940
// Address: 0x21e940 - 0x21ec30
void sub_0021E940_0x21e940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E940_0x21e940");
#endif

    switch (ctx->pc) {
        case 0x21e940u: goto label_21e940;
        case 0x21e944u: goto label_21e944;
        case 0x21e948u: goto label_21e948;
        case 0x21e94cu: goto label_21e94c;
        case 0x21e950u: goto label_21e950;
        case 0x21e954u: goto label_21e954;
        case 0x21e958u: goto label_21e958;
        case 0x21e95cu: goto label_21e95c;
        case 0x21e960u: goto label_21e960;
        case 0x21e964u: goto label_21e964;
        case 0x21e968u: goto label_21e968;
        case 0x21e96cu: goto label_21e96c;
        case 0x21e970u: goto label_21e970;
        case 0x21e974u: goto label_21e974;
        case 0x21e978u: goto label_21e978;
        case 0x21e97cu: goto label_21e97c;
        case 0x21e980u: goto label_21e980;
        case 0x21e984u: goto label_21e984;
        case 0x21e988u: goto label_21e988;
        case 0x21e98cu: goto label_21e98c;
        case 0x21e990u: goto label_21e990;
        case 0x21e994u: goto label_21e994;
        case 0x21e998u: goto label_21e998;
        case 0x21e99cu: goto label_21e99c;
        case 0x21e9a0u: goto label_21e9a0;
        case 0x21e9a4u: goto label_21e9a4;
        case 0x21e9a8u: goto label_21e9a8;
        case 0x21e9acu: goto label_21e9ac;
        case 0x21e9b0u: goto label_21e9b0;
        case 0x21e9b4u: goto label_21e9b4;
        case 0x21e9b8u: goto label_21e9b8;
        case 0x21e9bcu: goto label_21e9bc;
        case 0x21e9c0u: goto label_21e9c0;
        case 0x21e9c4u: goto label_21e9c4;
        case 0x21e9c8u: goto label_21e9c8;
        case 0x21e9ccu: goto label_21e9cc;
        case 0x21e9d0u: goto label_21e9d0;
        case 0x21e9d4u: goto label_21e9d4;
        case 0x21e9d8u: goto label_21e9d8;
        case 0x21e9dcu: goto label_21e9dc;
        case 0x21e9e0u: goto label_21e9e0;
        case 0x21e9e4u: goto label_21e9e4;
        case 0x21e9e8u: goto label_21e9e8;
        case 0x21e9ecu: goto label_21e9ec;
        case 0x21e9f0u: goto label_21e9f0;
        case 0x21e9f4u: goto label_21e9f4;
        case 0x21e9f8u: goto label_21e9f8;
        case 0x21e9fcu: goto label_21e9fc;
        case 0x21ea00u: goto label_21ea00;
        case 0x21ea04u: goto label_21ea04;
        case 0x21ea08u: goto label_21ea08;
        case 0x21ea0cu: goto label_21ea0c;
        case 0x21ea10u: goto label_21ea10;
        case 0x21ea14u: goto label_21ea14;
        case 0x21ea18u: goto label_21ea18;
        case 0x21ea1cu: goto label_21ea1c;
        case 0x21ea20u: goto label_21ea20;
        case 0x21ea24u: goto label_21ea24;
        case 0x21ea28u: goto label_21ea28;
        case 0x21ea2cu: goto label_21ea2c;
        case 0x21ea30u: goto label_21ea30;
        case 0x21ea34u: goto label_21ea34;
        case 0x21ea38u: goto label_21ea38;
        case 0x21ea3cu: goto label_21ea3c;
        case 0x21ea40u: goto label_21ea40;
        case 0x21ea44u: goto label_21ea44;
        case 0x21ea48u: goto label_21ea48;
        case 0x21ea4cu: goto label_21ea4c;
        case 0x21ea50u: goto label_21ea50;
        case 0x21ea54u: goto label_21ea54;
        case 0x21ea58u: goto label_21ea58;
        case 0x21ea5cu: goto label_21ea5c;
        case 0x21ea60u: goto label_21ea60;
        case 0x21ea64u: goto label_21ea64;
        case 0x21ea68u: goto label_21ea68;
        case 0x21ea6cu: goto label_21ea6c;
        case 0x21ea70u: goto label_21ea70;
        case 0x21ea74u: goto label_21ea74;
        case 0x21ea78u: goto label_21ea78;
        case 0x21ea7cu: goto label_21ea7c;
        case 0x21ea80u: goto label_21ea80;
        case 0x21ea84u: goto label_21ea84;
        case 0x21ea88u: goto label_21ea88;
        case 0x21ea8cu: goto label_21ea8c;
        case 0x21ea90u: goto label_21ea90;
        case 0x21ea94u: goto label_21ea94;
        case 0x21ea98u: goto label_21ea98;
        case 0x21ea9cu: goto label_21ea9c;
        case 0x21eaa0u: goto label_21eaa0;
        case 0x21eaa4u: goto label_21eaa4;
        case 0x21eaa8u: goto label_21eaa8;
        case 0x21eaacu: goto label_21eaac;
        case 0x21eab0u: goto label_21eab0;
        case 0x21eab4u: goto label_21eab4;
        case 0x21eab8u: goto label_21eab8;
        case 0x21eabcu: goto label_21eabc;
        case 0x21eac0u: goto label_21eac0;
        case 0x21eac4u: goto label_21eac4;
        case 0x21eac8u: goto label_21eac8;
        case 0x21eaccu: goto label_21eacc;
        case 0x21ead0u: goto label_21ead0;
        case 0x21ead4u: goto label_21ead4;
        case 0x21ead8u: goto label_21ead8;
        case 0x21eadcu: goto label_21eadc;
        case 0x21eae0u: goto label_21eae0;
        case 0x21eae4u: goto label_21eae4;
        case 0x21eae8u: goto label_21eae8;
        case 0x21eaecu: goto label_21eaec;
        case 0x21eaf0u: goto label_21eaf0;
        case 0x21eaf4u: goto label_21eaf4;
        case 0x21eaf8u: goto label_21eaf8;
        case 0x21eafcu: goto label_21eafc;
        case 0x21eb00u: goto label_21eb00;
        case 0x21eb04u: goto label_21eb04;
        case 0x21eb08u: goto label_21eb08;
        case 0x21eb0cu: goto label_21eb0c;
        case 0x21eb10u: goto label_21eb10;
        case 0x21eb14u: goto label_21eb14;
        case 0x21eb18u: goto label_21eb18;
        case 0x21eb1cu: goto label_21eb1c;
        case 0x21eb20u: goto label_21eb20;
        case 0x21eb24u: goto label_21eb24;
        case 0x21eb28u: goto label_21eb28;
        case 0x21eb2cu: goto label_21eb2c;
        case 0x21eb30u: goto label_21eb30;
        case 0x21eb34u: goto label_21eb34;
        case 0x21eb38u: goto label_21eb38;
        case 0x21eb3cu: goto label_21eb3c;
        case 0x21eb40u: goto label_21eb40;
        case 0x21eb44u: goto label_21eb44;
        case 0x21eb48u: goto label_21eb48;
        case 0x21eb4cu: goto label_21eb4c;
        case 0x21eb50u: goto label_21eb50;
        case 0x21eb54u: goto label_21eb54;
        case 0x21eb58u: goto label_21eb58;
        case 0x21eb5cu: goto label_21eb5c;
        case 0x21eb60u: goto label_21eb60;
        case 0x21eb64u: goto label_21eb64;
        case 0x21eb68u: goto label_21eb68;
        case 0x21eb6cu: goto label_21eb6c;
        case 0x21eb70u: goto label_21eb70;
        case 0x21eb74u: goto label_21eb74;
        case 0x21eb78u: goto label_21eb78;
        case 0x21eb7cu: goto label_21eb7c;
        case 0x21eb80u: goto label_21eb80;
        case 0x21eb84u: goto label_21eb84;
        case 0x21eb88u: goto label_21eb88;
        case 0x21eb8cu: goto label_21eb8c;
        case 0x21eb90u: goto label_21eb90;
        case 0x21eb94u: goto label_21eb94;
        case 0x21eb98u: goto label_21eb98;
        case 0x21eb9cu: goto label_21eb9c;
        case 0x21eba0u: goto label_21eba0;
        case 0x21eba4u: goto label_21eba4;
        case 0x21eba8u: goto label_21eba8;
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebb0u: goto label_21ebb0;
        case 0x21ebb4u: goto label_21ebb4;
        case 0x21ebb8u: goto label_21ebb8;
        case 0x21ebbcu: goto label_21ebbc;
        case 0x21ebc0u: goto label_21ebc0;
        case 0x21ebc4u: goto label_21ebc4;
        case 0x21ebc8u: goto label_21ebc8;
        case 0x21ebccu: goto label_21ebcc;
        case 0x21ebd0u: goto label_21ebd0;
        case 0x21ebd4u: goto label_21ebd4;
        case 0x21ebd8u: goto label_21ebd8;
        case 0x21ebdcu: goto label_21ebdc;
        case 0x21ebe0u: goto label_21ebe0;
        case 0x21ebe4u: goto label_21ebe4;
        case 0x21ebe8u: goto label_21ebe8;
        case 0x21ebecu: goto label_21ebec;
        case 0x21ebf0u: goto label_21ebf0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ebf8u: goto label_21ebf8;
        case 0x21ebfcu: goto label_21ebfc;
        case 0x21ec00u: goto label_21ec00;
        case 0x21ec04u: goto label_21ec04;
        case 0x21ec08u: goto label_21ec08;
        case 0x21ec0cu: goto label_21ec0c;
        case 0x21ec10u: goto label_21ec10;
        case 0x21ec14u: goto label_21ec14;
        case 0x21ec18u: goto label_21ec18;
        case 0x21ec1cu: goto label_21ec1c;
        case 0x21ec20u: goto label_21ec20;
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec28u: goto label_21ec28;
        case 0x21ec2cu: goto label_21ec2c;
        default: break;
    }

    ctx->pc = 0x21e940u;

label_21e940:
    // 0x21e940: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x21e940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_21e944:
    // 0x21e944: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x21e944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_21e948:
    // 0x21e948: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x21e948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_21e94c:
    // 0x21e94c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21e94cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e950:
    // 0x21e950: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x21e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_21e954:
    // 0x21e954: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x21e954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_21e958:
    // 0x21e958: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x21e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_21e95c:
    // 0x21e95c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x21e95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_21e960:
    // 0x21e960: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21e964:
    // 0x21e964: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x21e964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
label_21e968:
    // 0x21e968: 0xc043d5e  jal         func_10F578
label_21e96c:
    if (ctx->pc == 0x21E96Cu) {
        ctx->pc = 0x21E96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E968u;
        // 0x21e96c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E970u;
        goto label_21e970;
    }
    ctx->pc = 0x21E968u;
    SET_GPR_U32(ctx, 31, 0x21E970u);
    ctx->pc = 0x21E96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E968u;
    // 0x21e96c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21E968u, 0x21E970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E970u;
label_21e970:
    // 0x21e970: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
label_21e974:
    if (ctx->pc == 0x21E974u) {
        ctx->pc = 0x21E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E970u;
        // 0x21e974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E978u;
        goto label_21e978;
    }
    ctx->pc = 0x21E970u;
    {
        const bool branch_taken_0x21e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E970u;
        // 0x21e974: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e970) {
            ctx->pc = 0x21EAF8u;
            goto label_21eaf8;
        }
    }
    ctx->pc = 0x21E978u;
label_21e978:
    // 0x21e978: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21e97c:
    // 0x21e97c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21e97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_21e980:
    // 0x21e980: 0xc044596  jal         func_111658
label_21e984:
    if (ctx->pc == 0x21E984u) {
        ctx->pc = 0x21E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E980u;
        // 0x21e984: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E988u;
        goto label_21e988;
    }
    ctx->pc = 0x21E980u;
    SET_GPR_U32(ctx, 31, 0x21E988u);
    ctx->pc = 0x21E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E980u;
    // 0x21e984: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111658u, 0x21E980u, 0x21E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E988u;
label_21e988:
    // 0x21e988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e98c:
    // 0x21e98c: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x21e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_21e990:
    // 0x21e990: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_21e994:
    if (ctx->pc == 0x21E994u) {
        ctx->pc = 0x21E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E990u;
        // 0x21e994: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E998u;
        goto label_21e998;
    }
    ctx->pc = 0x21E990u;
    {
        const bool branch_taken_0x21e990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e990) {
            ctx->pc = 0x21E994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E990u;
            // 0x21e994: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9E0u;
            goto label_21e9e0;
        }
    }
    ctx->pc = 0x21E998u;
label_21e998:
    // 0x21e998: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
label_21e99c:
    // 0x21e99c: 0xc0440a8  jal         func_1102A0
label_21e9a0:
    if (ctx->pc == 0x21E9A0u) {
        ctx->pc = 0x21E9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E99Cu;
        // 0x21e9a0: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9A4u;
        goto label_21e9a4;
    }
    ctx->pc = 0x21E99Cu;
    SET_GPR_U32(ctx, 31, 0x21E9A4u);
    ctx->pc = 0x21E9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E99Cu;
    // 0x21e9a0: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102A0u, 0x21E99Cu, 0x21E9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9A4u;
label_21e9a4:
    // 0x21e9a4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_21e9a8:
    if (ctx->pc == 0x21E9A8u) {
        ctx->pc = 0x21E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9A4u;
        // 0x21e9a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9ACu;
        goto label_21e9ac;
    }
    ctx->pc = 0x21E9A4u;
    {
        const bool branch_taken_0x21e9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e9a4) {
            ctx->pc = 0x21E9A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E9A4u;
            // 0x21e9a8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9E0u;
            goto label_21e9e0;
        }
    }
    ctx->pc = 0x21E9ACu;
label_21e9ac:
    // 0x21e9ac: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
label_21e9b0:
    if (ctx->pc == 0x21E9B0u) {
        ctx->pc = 0x21E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9ACu;
        // 0x21e9b0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9B4u;
        goto label_21e9b4;
    }
    ctx->pc = 0x21E9ACu;
    {
        const bool branch_taken_0x21e9ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e9ac) {
            ctx->pc = 0x21E9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E9ACu;
            // 0x21e9b0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9E0u;
            goto label_21e9e0;
        }
    }
    ctx->pc = 0x21E9B4u;
label_21e9b4:
    // 0x21e9b4: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x21e9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_21e9b8:
    // 0x21e9b8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_21e9bc:
    if (ctx->pc == 0x21E9BCu) {
        ctx->pc = 0x21E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9B8u;
        // 0x21e9bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9C0u;
        goto label_21e9c0;
    }
    ctx->pc = 0x21E9B8u;
    {
        const bool branch_taken_0x21e9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e9b8) {
            ctx->pc = 0x21E9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E9B8u;
            // 0x21e9bc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9E0u;
            goto label_21e9e0;
        }
    }
    ctx->pc = 0x21E9C0u;
label_21e9c0:
    // 0x21e9c0: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
label_21e9c4:
    // 0x21e9c4: 0xc044096  jal         func_110258
label_21e9c8:
    if (ctx->pc == 0x21E9C8u) {
        ctx->pc = 0x21E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9C4u;
        // 0x21e9c8: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9CCu;
        goto label_21e9cc;
    }
    ctx->pc = 0x21E9C4u;
    SET_GPR_U32(ctx, 31, 0x21E9CCu);
    ctx->pc = 0x21E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9C4u;
    // 0x21e9c8: 0x8fa50060  lw          $a1, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x21E9C4u, 0x21E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9CCu;
label_21e9cc:
    // 0x21e9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e9d0:
    // 0x21e9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e9d4:
    // 0x21e9d4: 0xc088d3e  jal         func_2234F8
label_21e9d8:
    if (ctx->pc == 0x21E9D8u) {
        ctx->pc = 0x21E9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9D4u;
        // 0x21e9d8: 0xae030170  sw          $v1, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9DCu;
        goto label_21e9dc;
    }
    ctx->pc = 0x21E9D4u;
    SET_GPR_U32(ctx, 31, 0x21E9DCu);
    ctx->pc = 0x21E9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E9D4u;
    // 0x21e9d8: 0xae030170  sw          $v1, 0x170($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2234F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2234F8u, 0x21E9D4u, 0x21E9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E9DCu;
label_21e9dc:
    // 0x21e9dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21e9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21e9e0:
    // 0x21e9e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e9e4:
    // 0x21e9e4: 0x26140090  addiu       $s4, $s0, 0x90
    ctx->pc = 0x21e9e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_21e9e8:
    // 0x21e9e8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x21e9e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_21e9ec:
    // 0x21e9ec: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x21e9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_21e9f0:
    // 0x21e9f0: 0x40f809  jalr        $v0
label_21e9f4:
    if (ctx->pc == 0x21E9F4u) {
        ctx->pc = 0x21E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9F0u;
        // 0x21e9f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9F8u;
        goto label_21e9f8;
    }
    ctx->pc = 0x21E9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E9F8u);
        ctx->pc = 0x21E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9F0u;
        // 0x21e9f4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9F0u, 0x21E9F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E9F8u;
label_21e9f8:
    // 0x21e9f8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x21e9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_21e9fc:
    // 0x21e9fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21e9fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_21ea00:
    // 0x21ea00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21ea00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21ea04:
    // 0x21ea04: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21ea08:
    // 0x21ea08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21ea08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21ea0c:
    // 0x21ea0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21ea0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21ea10:
    // 0x21ea10: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21ea14:
    // 0x21ea14: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_21ea18:
    // 0x21ea18: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x21ea18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21ea1c:
    // 0x21ea1c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_21ea20:
    // 0x21ea20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x21ea20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21ea24:
    // 0x21ea24: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x21ea24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_21ea28:
    // 0x21ea28: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x21ea28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_21ea2c:
    // 0x21ea2c: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x21ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
label_21ea30:
    // 0x21ea30: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x21ea30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21ea34:
    // 0x21ea34: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x21ea34u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21ea38:
    // 0x21ea38: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21ea3c:
    // 0x21ea3c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_21ea40:
    // 0x21ea40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_21ea44:
    // 0x21ea44: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21ea44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_21ea48:
    // 0x21ea48: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21ea48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21ea4c:
    // 0x21ea4c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x21ea4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
label_21ea50:
    // 0x21ea50: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21ea50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21ea54:
    // 0x21ea54: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21ea54u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21ea58:
    // 0x21ea58: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21ea58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21ea5c:
    // 0x21ea5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21ea5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21ea60:
    // 0x21ea60: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21ea60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_21ea64:
    // 0x21ea64: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x21ea64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_21ea68:
    // 0x21ea68: 0xc0440f4  jal         func_1103D0
label_21ea6c:
    if (ctx->pc == 0x21EA6Cu) {
        ctx->pc = 0x21EA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA68u;
        // 0x21ea6c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA70u;
        goto label_21ea70;
    }
    ctx->pc = 0x21EA68u;
    SET_GPR_U32(ctx, 31, 0x21EA70u);
    ctx->pc = 0x21EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA68u;
    // 0x21ea6c: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103D0u, 0x21EA68u, 0x21EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA70u;
label_21ea70:
    // 0x21ea70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x21ea70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ea74:
    // 0x21ea74: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x21ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_21ea78:
    // 0x21ea78: 0x8e02018c  lw          $v0, 0x18C($s0)
    ctx->pc = 0x21ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
label_21ea7c:
    // 0x21ea7c: 0xc0e409a  jal         func_390268
label_21ea80:
    if (ctx->pc == 0x21EA80u) {
        ctx->pc = 0x21EA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA7Cu;
        // 0x21ea80: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA84u;
        goto label_21ea84;
    }
    ctx->pc = 0x21EA7Cu;
    SET_GPR_U32(ctx, 31, 0x21EA84u);
    ctx->pc = 0x21EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EA7Cu;
    // 0x21ea80: 0xafa20064  sw          $v0, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x21EA7Cu, 0x21EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EA84u;
label_21ea84:
    // 0x21ea84: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21ea84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ea88:
    // 0x21ea88: 0x12200061  beqz        $s1, . + 4 + (0x61 << 2)
label_21ea8c:
    if (ctx->pc == 0x21EA8Cu) {
        ctx->pc = 0x21EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA88u;
        // 0x21ea8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA90u;
        goto label_21ea90;
    }
    ctx->pc = 0x21EA88u;
    {
        const bool branch_taken_0x21ea88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA88u;
        // 0x21ea8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea88) {
            ctx->pc = 0x21EC10u;
            goto label_21ec10;
        }
    }
    ctx->pc = 0x21EA90u;
label_21ea90:
    // 0x21ea90: 0x86840002  lh          $a0, 0x2($s4)
    ctx->pc = 0x21ea90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_21ea94:
    // 0x21ea94: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x21ea94u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21ea98:
    // 0x21ea98: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_21ea9c:
    // 0x21ea9c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_21eaa0:
    // 0x21eaa0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_21eaa4:
    // 0x21eaa4: 0xc0cdb38  jal         func_336CE0
label_21eaa8:
    if (ctx->pc == 0x21EAA8u) {
        ctx->pc = 0x21EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAA4u;
        // 0x21eaa8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EAACu;
        goto label_21eaac;
    }
    ctx->pc = 0x21EAA4u;
    SET_GPR_U32(ctx, 31, 0x21EAACu);
    ctx->pc = 0x21EAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAA4u;
    // 0x21eaa8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x21EAA4u, 0x21EAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAACu;
label_21eaac:
    // 0x21eaac: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x21eaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_21eab0:
    // 0x21eab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21eab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_21eab4:
    // 0x21eab4: 0x0  nop
    ctx->pc = 0x21eab4u;
    // NOP
label_21eab8:
    // 0x21eab8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21eab8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21eabc:
    // 0x21eabc: 0x0  nop
    ctx->pc = 0x21eabcu;
    // NOP
label_21eac0:
    // 0x21eac0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_21eac4:
    if (ctx->pc == 0x21EAC4u) {
        ctx->pc = 0x21EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAC0u;
        // 0x21eac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EAC8u;
        goto label_21eac8;
    }
    ctx->pc = 0x21EAC0u;
    {
        const bool branch_taken_0x21eac0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAC0u;
        // 0x21eac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eac0) {
            ctx->pc = 0x21EAF0u;
            goto label_21eaf0;
        }
    }
    ctx->pc = 0x21EAC8u;
label_21eac8:
    // 0x21eac8: 0xc087b0e  jal         func_21EC38
label_21eacc:
    if (ctx->pc == 0x21EACCu) {
        ctx->pc = 0x21EACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAC8u;
        // 0x21eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EAD0u;
        goto label_21ead0;
    }
    ctx->pc = 0x21EAC8u;
    SET_GPR_U32(ctx, 31, 0x21EAD0u);
    ctx->pc = 0x21EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAC8u;
    // 0x21eacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21EAC8u, 0x21EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EAD0u;
label_21ead0:
    // 0x21ead0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ead0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ead4:
    // 0x21ead4: 0xc087b0e  jal         func_21EC38
label_21ead8:
    if (ctx->pc == 0x21EAD8u) {
        ctx->pc = 0x21EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAD4u;
        // 0x21ead8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EADCu;
        goto label_21eadc;
    }
    ctx->pc = 0x21EAD4u;
    SET_GPR_U32(ctx, 31, 0x21EADCu);
    ctx->pc = 0x21EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EAD4u;
    // 0x21ead8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21EAD4u, 0x21EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EADCu;
label_21eadc:
    // 0x21eadc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_21eae0:
    // 0x21eae0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x21eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21eae4:
    // 0x21eae4: 0xae03018c  sw          $v1, 0x18C($s0)
    ctx->pc = 0x21eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 3));
label_21eae8:
    // 0x21eae8: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x21eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_21eaec:
    // 0x21eaec: 0xae24018c  sw          $a0, 0x18C($s1)
    ctx->pc = 0x21eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 4));
label_21eaf0:
    // 0x21eaf0: 0x10000047  b           . + 4 + (0x47 << 2)
label_21eaf4:
    if (ctx->pc == 0x21EAF4u) {
        ctx->pc = 0x21EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAF0u;
        // 0x21eaf4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EAF8u;
        goto label_21eaf8;
    }
    ctx->pc = 0x21EAF0u;
    {
        const bool branch_taken_0x21eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAF0u;
        // 0x21eaf4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaf0) {
            ctx->pc = 0x21EC10u;
            goto label_21ec10;
        }
    }
    ctx->pc = 0x21EAF8u;
label_21eaf8:
    // 0x21eaf8: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x21eaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_21eafc:
    // 0x21eafc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21eafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21eb00:
    // 0x21eb00: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
label_21eb04:
    if (ctx->pc == 0x21EB04u) {
        ctx->pc = 0x21EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB00u;
        // 0x21eb04: 0xa200016c  sb          $zero, 0x16C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB08u;
        goto label_21eb08;
    }
    ctx->pc = 0x21EB00u;
    {
        const bool branch_taken_0x21eb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x21EB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB00u;
        // 0x21eb04: 0xa200016c  sb          $zero, 0x16C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb00) {
            ctx->pc = 0x21EB14u;
            goto label_21eb14;
        }
    }
    ctx->pc = 0x21EB08u;
label_21eb08:
    // 0x21eb08: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x21eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_21eb0c:
    // 0x21eb0c: 0xc088d52  jal         func_223548
label_21eb10:
    if (ctx->pc == 0x21EB10u) {
        ctx->pc = 0x21EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB0Cu;
        // 0x21eb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB14u;
        goto label_21eb14;
    }
    ctx->pc = 0x21EB0Cu;
    SET_GPR_U32(ctx, 31, 0x21EB14u);
    ctx->pc = 0x21EB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EB0Cu;
    // 0x21eb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223548u, 0x21EB0Cu, 0x21EB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EB14u;
label_21eb14:
    // 0x21eb14: 0x8e050188  lw          $a1, 0x188($s0)
    ctx->pc = 0x21eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
label_21eb18:
    // 0x21eb18: 0x10a00026  beqz        $a1, . + 4 + (0x26 << 2)
label_21eb1c:
    if (ctx->pc == 0x21EB1Cu) {
        ctx->pc = 0x21EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB18u;
        // 0x21eb1c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB20u;
        goto label_21eb20;
    }
    ctx->pc = 0x21EB18u;
    {
        const bool branch_taken_0x21eb18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB18u;
        // 0x21eb1c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb18) {
            ctx->pc = 0x21EBB4u;
            goto label_21ebb4;
        }
    }
    ctx->pc = 0x21EB20u;
label_21eb20:
    // 0x21eb20: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x21eb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
label_21eb24:
    // 0x21eb24: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_21eb28:
    // 0x21eb28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x21eb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21eb2c:
    // 0x21eb2c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_21eb30:
    // 0x21eb30: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x21eb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_21eb34:
    // 0x21eb34: 0x40f809  jalr        $v0
label_21eb38:
    if (ctx->pc == 0x21EB38u) {
        ctx->pc = 0x21EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB34u;
        // 0x21eb38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB3Cu;
        goto label_21eb3c;
    }
    ctx->pc = 0x21EB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21EB3Cu);
        ctx->pc = 0x21EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB34u;
        // 0x21eb38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB34u, 0x21EB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EB3Cu;
label_21eb3c:
    // 0x21eb3c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_21eb40:
    if (ctx->pc == 0x21EB40u) {
        ctx->pc = 0x21EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB3Cu;
        // 0x21eb40: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB44u;
        goto label_21eb44;
    }
    ctx->pc = 0x21EB3Cu;
    {
        const bool branch_taken_0x21eb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB3Cu;
        // 0x21eb40: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb3c) {
            ctx->pc = 0x21EC0Cu;
            goto label_21ec0c;
        }
    }
    ctx->pc = 0x21EB44u;
label_21eb44:
    // 0x21eb44: 0x8e050190  lw          $a1, 0x190($s0)
    ctx->pc = 0x21eb44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_21eb48:
    // 0x21eb48: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_21eb4c:
    if (ctx->pc == 0x21EB4Cu) {
        ctx->pc = 0x21EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB48u;
        // 0x21eb4c: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB50u;
        goto label_21eb50;
    }
    ctx->pc = 0x21EB48u;
    {
        const bool branch_taken_0x21eb48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB48u;
        // 0x21eb4c: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb48) {
            ctx->pc = 0x21EB8Cu;
            goto label_21eb8c;
        }
    }
    ctx->pc = 0x21EB50u;
label_21eb50:
    // 0x21eb50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21eb54:
    // 0x21eb54: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x21eb54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_21eb58:
    // 0x21eb58: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x21eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_21eb5c:
    // 0x21eb5c: 0x60f809  jalr        $v1
label_21eb60:
    if (ctx->pc == 0x21EB60u) {
        ctx->pc = 0x21EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB5Cu;
        // 0x21eb60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB64u;
        goto label_21eb64;
    }
    ctx->pc = 0x21EB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21EB64u);
        ctx->pc = 0x21EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB5Cu;
        // 0x21eb60: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB5Cu, 0x21EB64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EB64u;
label_21eb64:
    // 0x21eb64: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x21eb64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_21eb68:
    // 0x21eb68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21eb6c:
    // 0x21eb6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21eb6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21eb70:
    // 0x21eb70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21eb74:
    // 0x21eb74: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21eb74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21eb78:
    // 0x21eb78: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21eb7c:
    // 0x21eb7c: 0x60f809  jalr        $v1
label_21eb80:
    if (ctx->pc == 0x21EB80u) {
        ctx->pc = 0x21EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB7Cu;
        // 0x21eb80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB84u;
        goto label_21eb84;
    }
    ctx->pc = 0x21EB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21EB84u);
        ctx->pc = 0x21EB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB7Cu;
        // 0x21eb80: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EB7Cu, 0x21EB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EB84u;
label_21eb84:
    // 0x21eb84: 0x10000021  b           . + 4 + (0x21 << 2)
label_21eb88:
    if (ctx->pc == 0x21EB88u) {
        ctx->pc = 0x21EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB84u;
        // 0x21eb88: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EB8Cu;
        goto label_21eb8c;
    }
    ctx->pc = 0x21EB84u;
    {
        const bool branch_taken_0x21eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EB84u;
        // 0x21eb88: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb84) {
            ctx->pc = 0x21EC0Cu;
            goto label_21ec0c;
        }
    }
    ctx->pc = 0x21EB8Cu;
label_21eb8c:
    // 0x21eb8c: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_21eb90:
    // 0x21eb90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21eb90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21eb94:
    // 0x21eb94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21eb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21eb98:
    // 0x21eb98: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21eb9c:
    // 0x21eb9c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21eba0:
    // 0x21eba0: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21eba4:
    // 0x21eba4: 0x60f809  jalr        $v1
label_21eba8:
    if (ctx->pc == 0x21EBA8u) {
        ctx->pc = 0x21EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBA4u;
        // 0x21eba8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBACu;
        goto label_21ebac;
    }
    ctx->pc = 0x21EBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21EBACu);
        ctx->pc = 0x21EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBA4u;
        // 0x21eba8: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EBA4u, 0x21EBACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EBACu;
label_21ebac:
    // 0x21ebac: 0x10000017  b           . + 4 + (0x17 << 2)
label_21ebb0:
    if (ctx->pc == 0x21EBB0u) {
        ctx->pc = 0x21EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBACu;
        // 0x21ebb0: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBB4u;
        goto label_21ebb4;
    }
    ctx->pc = 0x21EBACu;
    {
        const bool branch_taken_0x21ebac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBACu;
        // 0x21ebb0: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebac) {
            ctx->pc = 0x21EC0Cu;
            goto label_21ec0c;
        }
    }
    ctx->pc = 0x21EBB4u;
label_21ebb4:
    // 0x21ebb4: 0x8e110184  lw          $s1, 0x184($s0)
    ctx->pc = 0x21ebb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_21ebb8:
    // 0x21ebb8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_21ebbc:
    if (ctx->pc == 0x21EBBCu) {
        ctx->pc = 0x21EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBB8u;
        // 0x21ebbc: 0xa2120194  sb          $s2, 0x194($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBC0u;
        goto label_21ebc0;
    }
    ctx->pc = 0x21EBB8u;
    {
        const bool branch_taken_0x21ebb8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBB8u;
        // 0x21ebbc: 0xa2120194  sb          $s2, 0x194($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebb8) {
            ctx->pc = 0x21EC08u;
            goto label_21ec08;
        }
    }
    ctx->pc = 0x21EBC0u;
label_21ebc0:
    // 0x21ebc0: 0x92020195  lbu         $v0, 0x195($s0)
    ctx->pc = 0x21ebc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_21ebc4:
    // 0x21ebc4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_21ebc8:
    if (ctx->pc == 0x21EBC8u) {
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC4u;
        // 0x21ebc8: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBCCu;
        goto label_21ebcc;
    }
    ctx->pc = 0x21EBC4u;
    {
        const bool branch_taken_0x21ebc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC4u;
        // 0x21ebc8: 0x3c030055  lui         $v1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc4) {
            ctx->pc = 0x21EC0Cu;
            goto label_21ec0c;
        }
    }
    ctx->pc = 0x21EBCCu;
label_21ebcc:
    // 0x21ebcc: 0x8e020168  lw          $v0, 0x168($s0)
    ctx->pc = 0x21ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_21ebd0:
    // 0x21ebd0: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x21ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_21ebd4:
    // 0x21ebd4: 0xc043d5e  jal         func_10F578
label_21ebd8:
    if (ctx->pc == 0x21EBD8u) {
        ctx->pc = 0x21EBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBD4u;
        // 0x21ebd8: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBDCu;
        goto label_21ebdc;
    }
    ctx->pc = 0x21EBD4u;
    SET_GPR_U32(ctx, 31, 0x21EBDCu);
    ctx->pc = 0x21EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBD4u;
    // 0x21ebd8: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EBD4u, 0x21EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBDCu;
label_21ebdc:
    // 0x21ebdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_21ebe0:
    if (ctx->pc == 0x21EBE0u) {
        ctx->pc = 0x21EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBDCu;
        // 0x21ebe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBE4u;
        goto label_21ebe4;
    }
    ctx->pc = 0x21EBDCu;
    {
        const bool branch_taken_0x21ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBDCu;
        // 0x21ebe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebdc) {
            ctx->pc = 0x21EBF0u;
            goto label_21ebf0;
        }
    }
    ctx->pc = 0x21EBE4u;
label_21ebe4:
    // 0x21ebe4: 0xc087c16  jal         func_21F058
label_21ebe8:
    if (ctx->pc == 0x21EBE8u) {
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBE4u;
        // 0x21ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBECu;
        goto label_21ebec;
    }
    ctx->pc = 0x21EBE4u;
    SET_GPR_U32(ctx, 31, 0x21EBECu);
    ctx->pc = 0x21EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBE4u;
    // 0x21ebe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F058u, 0x21EBE4u, 0x21EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBECu;
label_21ebec:
    // 0x21ebec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21ebecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ebf0:
    // 0x21ebf0: 0xc087ba2  jal         func_21EE88
label_21ebf4:
    if (ctx->pc == 0x21EBF4u) {
        ctx->pc = 0x21EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBF0u;
        // 0x21ebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EBF8u;
        goto label_21ebf8;
    }
    ctx->pc = 0x21EBF0u;
    SET_GPR_U32(ctx, 31, 0x21EBF8u);
    ctx->pc = 0x21EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBF0u;
    // 0x21ebf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EE88u, 0x21EBF0u, 0x21EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBF8u;
label_21ebf8:
    // 0x21ebf8: 0x8e030168  lw          $v1, 0x168($s0)
    ctx->pc = 0x21ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_21ebfc:
    // 0x21ebfc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x21ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_21ec00:
    // 0x21ec00: 0xac436d80  sw          $v1, 0x6D80($v0)
    ctx->pc = 0x21ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28032), GPR_U32(ctx, 3));
label_21ec04:
    // 0x21ec04: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x21ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
label_21ec08:
    // 0x21ec08: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x21ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_21ec0c:
    // 0x21ec0c: 0x906283b8  lbu         $v0, -0x7C48($v1)
    ctx->pc = 0x21ec0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935480)));
label_21ec10:
    // 0x21ec10: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x21ec10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21ec14:
    // 0x21ec14: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x21ec14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21ec18:
    // 0x21ec18: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x21ec18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21ec1c:
    // 0x21ec1c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x21ec1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21ec20:
    // 0x21ec20: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x21ec20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21ec24:
    // 0x21ec24: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21ec24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21ec28:
    // 0x21ec28: 0x3e00008  jr          $ra
label_21ec2c:
    if (ctx->pc == 0x21EC2Cu) {
        ctx->pc = 0x21EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC28u;
        // 0x21ec2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EC30u;
        goto label_fallthrough_0x21ec28;
    }
    ctx->pc = 0x21EC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC28u;
        // 0x21ec2c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21ec28:
    ctx->pc = 0x21EC30u;
}
