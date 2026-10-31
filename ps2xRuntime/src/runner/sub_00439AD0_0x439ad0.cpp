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

// Function: sub_00439AD0
// Address: 0x439ad0 - 0x439cc0
void sub_00439AD0_0x439ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439AD0_0x439ad0");
#endif

    switch (ctx->pc) {
        case 0x439b28u: goto label_439b28;
        case 0x439b34u: goto label_439b34;
        case 0x439b94u: goto label_439b94;
        case 0x439ba0u: goto label_439ba0;
        case 0x439becu: goto label_439bec;
        case 0x439c18u: goto label_439c18;
        case 0x439c24u: goto label_439c24;
        default: break;
    }

    ctx->pc = 0x439ad0u;

    // 0x439ad0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x439ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x439ad4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x439ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439ad8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x439ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x439adc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x439adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x439ae0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x439ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x439ae4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x439ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x439ae8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x439ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x439aec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x439aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439af0: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x439af0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439af4: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x439af4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x439af8: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x439af8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439afc: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x439afcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x439b00: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x439b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x439b04: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x439b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x439b08: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x439b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x439b0c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x439B0Cu;
    {
        const bool branch_taken_0x439b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B0Cu;
        // 0x439b10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b0c) {
            ctx->pc = 0x439BCCu;
            goto label_439bcc;
        }
    }
    ctx->pc = 0x439B14u;
    // 0x439b14: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x439B14u;
    {
        const bool branch_taken_0x439b14 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x439B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B14u;
        // 0x439b18: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b14) {
            ctx->pc = 0x439B70u;
            goto label_439b70;
        }
    }
    ctx->pc = 0x439B1Cu;
    // 0x439b1c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x439b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x439b20: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x439B20u;
    SET_GPR_U32(ctx, 31, 0x439B28u);
    ctx->pc = 0x439B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439B20u;
    // 0x439b24: 0xdc45d0f8  ld          $a1, -0x2F08($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x439B20u, 0x439B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439B28u;
label_439b28:
    // 0x439b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x439b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439b2c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x439B2Cu;
    SET_GPR_U32(ctx, 31, 0x439B34u);
    ctx->pc = 0x439B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439B2Cu;
    // 0x439b30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x439B2Cu, 0x439B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439B34u;
label_439b34:
    // 0x439b34: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x439B34u;
    {
        const bool branch_taken_0x439b34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x439b34) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439B3Cu;
    // 0x439b3c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x439B3Cu;
    {
        const bool branch_taken_0x439b3c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x439B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B3Cu;
        // 0x439b40: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b3c) {
            ctx->pc = 0x439B50u;
            goto label_439b50;
        }
    }
    ctx->pc = 0x439B44u;
    // 0x439b44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439b48: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x439B48u;
    {
        const bool branch_taken_0x439b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B48u;
        // 0x439b4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b48) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439B50u;
label_439b50:
    // 0x439b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439b54: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x439b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x439b58: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x439b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x439b5c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x439B5Cu;
    {
        const bool branch_taken_0x439b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x439b5c) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439B64u;
    // 0x439b64: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x439b64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x439b68: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x439B68u;
    {
        const bool branch_taken_0x439b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B68u;
        // 0x439b6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b68) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439B70u;
label_439b70:
    // 0x439b70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439b74: 0x222a007  srav        $s4, $v0, $s1
    ctx->pc = 0x439b74u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x439b78: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x439b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x439b7c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x439b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x439b80: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x439B80u;
    {
        const bool branch_taken_0x439b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439B80u;
        // 0x439b84: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439b80) {
            ctx->pc = 0x439C98u;
            goto label_439c98;
        }
    }
    ctx->pc = 0x439B88u;
    // 0x439b88: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x439b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x439b8c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x439B8Cu;
    SET_GPR_U32(ctx, 31, 0x439B94u);
    ctx->pc = 0x439B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439B8Cu;
    // 0x439b90: 0xdc45d0f8  ld          $a1, -0x2F08($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x439B8Cu, 0x439B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439B94u;
label_439b94:
    // 0x439b94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x439b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439b98: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x439B98u;
    SET_GPR_U32(ctx, 31, 0x439BA0u);
    ctx->pc = 0x439B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439B98u;
    // 0x439b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x439B98u, 0x439BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439BA0u;
label_439ba0:
    // 0x439ba0: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x439BA0u;
    {
        const bool branch_taken_0x439ba0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x439ba0) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439BA8u;
    // 0x439ba8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x439BA8u;
    {
        const bool branch_taken_0x439ba8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x439BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439BA8u;
        // 0x439bac: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439ba8) {
            ctx->pc = 0x439BC0u;
            goto label_439bc0;
        }
    }
    ctx->pc = 0x439BB0u;
    // 0x439bb0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x439bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x439bb4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x439bb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x439bb8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x439bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x439bbc: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x439bbcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_439bc0:
    // 0x439bc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x439bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439bc4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x439BC4u;
    {
        const bool branch_taken_0x439bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439BC4u;
        // 0x439bc8: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439bc4) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439BCCu;
label_439bcc:
    // 0x439bcc: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x439bccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x439bd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x439BD0u;
    {
        const bool branch_taken_0x439bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439BD0u;
        // 0x439bd4: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439bd0) {
            ctx->pc = 0x439BF4u;
            goto label_439bf4;
        }
    }
    ctx->pc = 0x439BD8u;
    // 0x439bd8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x439bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x439bdc: 0x1622002f  bne         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x439BDCu;
    {
        const bool branch_taken_0x439bdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x439BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439BDCu;
        // 0x439be0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439bdc) {
            ctx->pc = 0x439C9Cu;
            goto label_439c9c;
        }
    }
    ctx->pc = 0x439BE4u;
    // 0x439be4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x439BE4u;
    SET_GPR_U32(ctx, 31, 0x439BECu);
    ctx->pc = 0x439BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439BE4u;
    // 0x439be8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x439BE4u, 0x439BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439BECu;
label_439bec:
    // 0x439bec: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x439BECu;
    {
        const bool branch_taken_0x439bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439BECu;
        // 0x439bf0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439bec) {
            ctx->pc = 0x439CA0u;
            goto label_439ca0;
        }
    }
    ctx->pc = 0x439BF4u;
label_439bf4:
    // 0x439bf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x439bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x439bf8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x439bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x439bfc: 0x82a006  srlv        $s4, $v0, $a0
    ctx->pc = 0x439bfcu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x439c00: 0x2541824  and         $v1, $s2, $s4
    ctx->pc = 0x439c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x439c04: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x439C04u;
    {
        const bool branch_taken_0x439c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x439C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439C04u;
        // 0x439c08: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439c04) {
            ctx->pc = 0x439C98u;
            goto label_439c98;
        }
    }
    ctx->pc = 0x439C0Cu;
    // 0x439c0c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x439c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x439c10: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x439C10u;
    SET_GPR_U32(ctx, 31, 0x439C18u);
    ctx->pc = 0x439C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439C10u;
    // 0x439c14: 0xdc45d0f8  ld          $a1, -0x2F08($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x439C10u, 0x439C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439C18u;
label_439c18:
    // 0x439c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x439c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439c1c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x439C1Cu;
    SET_GPR_U32(ctx, 31, 0x439C24u);
    ctx->pc = 0x439C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439C1Cu;
    // 0x439c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x439C1Cu, 0x439C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439C24u;
label_439c24:
    // 0x439c24: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x439C24u;
    {
        const bool branch_taken_0x439c24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x439c24) {
            ctx->pc = 0x439C6Cu;
            goto label_439c6c;
        }
    }
    ctx->pc = 0x439C2Cu;
    // 0x439c2c: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x439C2Cu;
    {
        const bool branch_taken_0x439c2c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x439C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439C2Cu;
        // 0x439c30: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439c2c) {
            ctx->pc = 0x439C68u;
            goto label_439c68;
        }
    }
    ctx->pc = 0x439C34u;
    // 0x439c34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x439c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x439c38: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439C38u;
    {
        const bool branch_taken_0x439c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x439C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439C38u;
        // 0x439c3c: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439c38) {
            ctx->pc = 0x439C48u;
            goto label_439c48;
        }
    }
    ctx->pc = 0x439C40u;
    // 0x439c40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x439C40u;
    {
        const bool branch_taken_0x439c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439C40u;
        // 0x439c44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439c40) {
            ctx->pc = 0x439C64u;
            goto label_439c64;
        }
    }
    ctx->pc = 0x439C48u;
label_439c48:
    // 0x439c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x439c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439c4c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x439c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x439c50: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x439c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x439c54: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x439c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x439c58: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x439c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x439c5c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x439c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x439c60: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x439c60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_439c64:
    // 0x439c64: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x439c64u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_439c68:
    // 0x439c68: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x439c68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_439c6c:
    // 0x439c6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x439c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x439c70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x439c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x439c74: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x439c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x439c78: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x439c78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x439c7c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x439c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x439c80: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x439c80u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x439c84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x439c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x439c88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x439c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x439c8c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x439c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x439c90: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x439c90u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x439c94: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x439c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_439c98:
    // 0x439c98: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x439c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_439c9c:
    // 0x439c9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x439c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_439ca0:
    // 0x439ca0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x439ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439ca4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x439ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x439ca8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x439ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439cac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x439cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x439cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x439CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439CB4u;
        // 0x439cb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439CBCu;
    // 0x439cbc: 0x0  nop
    ctx->pc = 0x439cbcu;
    // NOP
    ctx->pc = 0x439cc0u;
}
