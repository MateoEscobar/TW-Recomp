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

// Function: sub_004389E8
// Address: 0x4389e8 - 0x438c50
void sub_004389E8_0x4389e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004389E8_0x4389e8");
#endif

    switch (ctx->pc) {
        case 0x438a94u: goto label_438a94;
        case 0x438b40u: goto label_438b40;
        case 0x438be4u: goto label_438be4;
        default: break;
    }

    ctx->pc = 0x4389e8u;

    // 0x4389e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4389e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4389ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4389ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x4389f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4389f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4389f4: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x4389f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x4389f8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4389f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4389fc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4389fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x438a00: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x438a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x438a04: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x438a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x438a08: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x438a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x438a0c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x438a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x438a10: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x438a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x438a14: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x438a14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x438a18: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x438a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x438a1c: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x438a1cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x438a20: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x438a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x438a24: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x438a24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438a28: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x438a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x438a2c: 0x245e6d90  addiu       $fp, $v0, 0x6D90
    ctx->pc = 0x438a2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x438a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x438a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x438a34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438a38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x438a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x438a3c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x438a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x438a40: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x438a40u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x438a44: 0xdcc371a0  ld          $v1, 0x71A0($a2)
    ctx->pc = 0x438a44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 29088)));
    // 0x438a48: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x438a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x438a4c: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x438a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x438a50: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x438a50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x438a54: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x438a54u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x438a58: 0x8ec271a8  lw          $v0, 0x71A8($s6)
    ctx->pc = 0x438a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29096)));
    // 0x438a5c: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x438a5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x438a60: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x438a60u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x438a64: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x438A64u;
    {
        const bool branch_taken_0x438a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x438A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438A64u;
        // 0x438a68: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438a64) {
            ctx->pc = 0x438A88u;
            goto label_438a88;
        }
    }
    ctx->pc = 0x438A6Cu;
    // 0x438a6c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x438a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x438a70: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x438a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x438a74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x438a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x438a78: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x438a78u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x438a7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x438a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x438a80: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x438a80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438a84: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x438a84u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_438a88:
    // 0x438a88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x438a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438a8c: 0xc10eab4  jal         func_43AAD0
    ctx->pc = 0x438A8Cu;
    SET_GPR_U32(ctx, 31, 0x438A94u);
    ctx->pc = 0x438A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438A8Cu;
    // 0x438a90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AAD0u, 0x438A8Cu, 0x438A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438A94u;
label_438a94:
    // 0x438a94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x438a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438a98: 0x12300060  beq         $s1, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x438A98u;
    {
        const bool branch_taken_0x438a98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x438A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438A98u;
        // 0x438a9c: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438a98) {
            ctx->pc = 0x438C1Cu;
            goto label_438c1c;
        }
    }
    ctx->pc = 0x438AA0u;
    // 0x438aa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x438AA0u;
    {
        const bool branch_taken_0x438aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438AA0u;
        // 0x438aa4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438aa0) {
            ctx->pc = 0x438AB4u;
            goto label_438ab4;
        }
    }
    ctx->pc = 0x438AA8u;
    // 0x438aa8: 0x569e005d  bnel        $s4, $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x438AA8u;
    {
        const bool branch_taken_0x438aa8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x438aa8) {
            ctx->pc = 0x438AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438AA8u;
            // 0x438aac: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438C20u;
            goto label_438c20;
        }
    }
    ctx->pc = 0x438AB0u;
    // 0x438ab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x438ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_438ab4:
    // 0x438ab4: 0x8c4371c0  lw          $v1, 0x71C0($v0)
    ctx->pc = 0x438ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29120)));
    // 0x438ab8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x438ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x438abc: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x438ABCu;
    {
        const bool branch_taken_0x438abc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x438AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438ABCu;
        // 0x438ac0: 0xac4371c0  sw          $v1, 0x71C0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438abc) {
            ctx->pc = 0x438AD8u;
            goto label_438ad8;
        }
    }
    ctx->pc = 0x438AC4u;
    // 0x438ac4: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x438ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x438ac8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x438ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x438acc: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x438accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x438ad0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x438AD0u;
    {
        const bool branch_taken_0x438ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438AD0u;
        // 0x438ad4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438ad0) {
            ctx->pc = 0x438BE4u;
            goto label_438be4;
        }
    }
    ctx->pc = 0x438AD8u;
label_438ad8:
    // 0x438ad8: 0x8ec271a8  lw          $v0, 0x71A8($s6)
    ctx->pc = 0x438ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29096)));
    // 0x438adc: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438ADCu;
    {
        const bool branch_taken_0x438adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x438AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438ADCu;
        // 0x438ae0: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438adc) {
            ctx->pc = 0x438AECu;
            goto label_438aec;
        }
    }
    ctx->pc = 0x438AE4u;
    // 0x438ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x438AE4u;
    {
        const bool branch_taken_0x438ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438AE4u;
        // 0x438ae8: 0xaed171a8  sw          $s1, 0x71A8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 29096), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438ae4) {
            ctx->pc = 0x438AF8u;
            goto label_438af8;
        }
    }
    ctx->pc = 0x438AECu;
label_438aec:
    // 0x438aec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x438aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x438af0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x438af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x438af4: 0xac6271c0  sw          $v0, 0x71C0($v1)
    ctx->pc = 0x438af4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5171C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5171C0u, _value); } while (0);
label_438af8:
    // 0x438af8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x438af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x438afc: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x438afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x438b00: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x438B00u;
    {
        const bool branch_taken_0x438b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x438B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438B00u;
        // 0x438b04: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438b00) {
            ctx->pc = 0x438B14u;
            goto label_438b14;
        }
    }
    ctx->pc = 0x438B08u;
    // 0x438b08: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x438b08u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x438b0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x438B0Cu;
    {
        const bool branch_taken_0x438b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438B0Cu;
        // 0x438b10: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438b0c) {
            ctx->pc = 0x438B18u;
            goto label_438b18;
        }
    }
    ctx->pc = 0x438B14u;
label_438b14:
    // 0x438b14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x438b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438b18:
    // 0x438b18: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x438b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x438b1c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x438b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x438b20: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x438b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x438b24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x438b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438b28: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x438b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x438b2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x438b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x438b30: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x438b30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x438b34: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x438b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x438b38: 0xc10eab4  jal         func_43AAD0
    ctx->pc = 0x438B38u;
    SET_GPR_U32(ctx, 31, 0x438B40u);
    ctx->pc = 0x438B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438B38u;
    // 0x438b3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AAD0u, 0x438B38u, 0x438B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438B40u;
label_438b40:
    // 0x438b40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x438b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438b44: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438b48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x438b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x438b4c: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x438B4Cu;
    {
        const bool branch_taken_0x438b4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x438b4c) {
            ctx->pc = 0x438B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438B4Cu;
            // 0x438b50: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438C20u;
            goto label_438c20;
        }
    }
    ctx->pc = 0x438B54u;
    // 0x438b54: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x438b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x438b58: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x438b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x438b5c: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x438b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x438b60: 0x8c8271c0  lw          $v0, 0x71C0($a0)
    ctx->pc = 0x438b60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5171C0u));
    // 0x438b64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x438b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x438b68: 0x24646d90  addiu       $a0, $v1, 0x6D90
    ctx->pc = 0x438b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
    // 0x438b6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x438b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x438b70: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x438b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x438b74: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x438b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x438b78: 0xaca271c0  sw          $v0, 0x71C0($a1)
    ctx->pc = 0x438b78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5171C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5171C0u, _value); } while (0);
    // 0x438b7c: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x438b7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x516D98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x516D98u, _value); } while (0);
    // 0x438b80: 0x12840018  beq         $s4, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x438B80u;
    {
        const bool branch_taken_0x438b80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x438B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438B80u;
        // 0x438b84: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438b80) {
            ctx->pc = 0x438BE4u;
            goto label_438be4;
        }
    }
    ctx->pc = 0x438B88u;
    // 0x438b88: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x438b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x438b8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x438B8Cu;
    {
        const bool branch_taken_0x438b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438B8Cu;
        // 0x438b90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438b8c) {
            ctx->pc = 0x438BA0u;
            goto label_438ba0;
        }
    }
    ctx->pc = 0x438B94u;
    // 0x438b94: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x438b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x438b98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x438B98u;
    {
        const bool branch_taken_0x438b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438B98u;
        // 0x438b9c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438b98) {
            ctx->pc = 0x438C1Cu;
            goto label_438c1c;
        }
    }
    ctx->pc = 0x438BA0u;
label_438ba0:
    // 0x438ba0: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x438ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x438ba4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438ba8: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x438ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x438bac: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x438bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x438bb0: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x438bb0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x438bb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x438bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x438bb8: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x438bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x438bbc: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x438bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x438bc0: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x438bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x438bc4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x438bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x438bc8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x438bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x438bcc: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x438bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x438bd0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x438BD0u;
    {
        const bool branch_taken_0x438bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x438BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438BD0u;
        // 0x438bd4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438bd0) {
            ctx->pc = 0x438BE4u;
            goto label_438be4;
        }
    }
    ctx->pc = 0x438BD8u;
    // 0x438bd8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x438bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438bdc: 0xc10e4e0  jal         func_439380
    ctx->pc = 0x438BDCu;
    SET_GPR_U32(ctx, 31, 0x438BE4u);
    ctx->pc = 0x438BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438BDCu;
    // 0x438be0: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x439380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x439380u, 0x438BDCu, 0x438BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438BE4u;
label_438be4:
    // 0x438be4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x438be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x438be8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x438be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x438bec: 0x8c4371c0  lw          $v1, 0x71C0($v0)
    ctx->pc = 0x438becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5171C0u));
    // 0x438bf0: 0xdc8271b0  ld          $v0, 0x71B0($a0)
    ctx->pc = 0x438bf0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5171B0u));
    // 0x438bf4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x438bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x438bf8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x438BF8u;
    {
        const bool branch_taken_0x438bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438bf8) {
            ctx->pc = 0x438BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438BF8u;
            // 0x438bfc: 0xfc8371b0  sd          $v1, 0x71B0($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 29104), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438C00u;
            goto label_438c00;
        }
    }
    ctx->pc = 0x438C00u;
label_438c00:
    // 0x438c00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x438c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x438c04: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x438c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x438c08: 0x8ca371c0  lw          $v1, 0x71C0($a1)
    ctx->pc = 0x438c08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5171C0u));
    // 0x438c0c: 0xdc8271b8  ld          $v0, 0x71B8($a0)
    ctx->pc = 0x438c0cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5171B8u));
    // 0x438c10: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x438c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x438c14: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x438C14u;
    {
        const bool branch_taken_0x438c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438c14) {
            ctx->pc = 0x438C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438C14u;
            // 0x438c18: 0xfc8371b8  sd          $v1, 0x71B8($a0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 4), 29112), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438C1Cu;
            goto label_438c1c;
        }
    }
    ctx->pc = 0x438C1Cu;
label_438c1c:
    // 0x438c1c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x438c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_438c20:
    // 0x438c20: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x438c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x438c24: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x438c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x438c28: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x438c28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x438c2c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x438c2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x438c30: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x438c30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x438c34: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x438c34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x438c38: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x438c38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x438c3c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x438c3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x438c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x438c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x438c44: 0x3e00008  jr          $ra
    ctx->pc = 0x438C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438C44u;
        // 0x438c48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x438C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x438C4Cu;
    // 0x438c4c: 0x0  nop
    ctx->pc = 0x438c4cu;
    // NOP
    ctx->pc = 0x438c50u;
}
