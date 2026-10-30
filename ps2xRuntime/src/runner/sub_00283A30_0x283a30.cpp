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

// Function: sub_00283A30
// Address: 0x283a30 - 0x284140
void sub_00283A30_0x283a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283A30_0x283a30");
#endif

    switch (ctx->pc) {
        case 0x283a90u: goto label_283a90;
        case 0x283ab8u: goto label_283ab8;
        case 0x283ad8u: goto label_283ad8;
        case 0x283ae4u: goto label_283ae4;
        case 0x283b5cu: goto label_283b5c;
        case 0x283b74u: goto label_283b74;
        case 0x283b80u: goto label_283b80;
        case 0x283d64u: goto label_283d64;
        case 0x283e84u: goto label_283e84;
        case 0x283ea0u: goto label_283ea0;
        case 0x283eb0u: goto label_283eb0;
        case 0x283fc8u: goto label_283fc8;
        case 0x283ff8u: goto label_283ff8;
        case 0x284060u: goto label_284060;
        case 0x284078u: goto label_284078;
        default: break;
    }

    ctx->pc = 0x283a30u;

    // 0x283a30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x283a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x283a34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x283a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x283a38: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x283a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x283a3c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x283a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x283a40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x283a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a44: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x283a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x283a48: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x283a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x283a4c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x283a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x283a50: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x283a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x283a54: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x283a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x283a58: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x283a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x283a5c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x283a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x283a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x283a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x283a64: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x283a64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x283a68: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x283a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x283a6c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283A6Cu;
    {
        const bool branch_taken_0x283a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A6Cu;
        // 0x283a70: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a6c) {
            ctx->pc = 0x283A88u;
            goto label_283a88;
        }
    }
    ctx->pc = 0x283A74u;
    // 0x283a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a78: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x283a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x283a7c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x283a80: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x283A80u;
    {
        const bool branch_taken_0x283a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A80u;
        // 0x283a84: 0xae4505ac  sw          $a1, 0x5AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a80) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x283A88u;
label_283a88:
    // 0x283a88: 0xc0e409a  jal         func_390268
    ctx->pc = 0x283A88u;
    SET_GPR_U32(ctx, 31, 0x283A90u);
    ctx->pc = 0x283A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283A88u;
    // 0x283a8c: 0x264400c4  addiu       $a0, $s2, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x283A88u, 0x283A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A90u;
label_283a90:
    // 0x283a90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x283a90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a94: 0x1280019d  beqz        $s4, . + 4 + (0x19D << 2)
    ctx->pc = 0x283A94u;
    {
        const bool branch_taken_0x283a94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x283A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A94u;
        // 0x283a98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a94) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x283A9Cu;
    // 0x283a9c: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x283a9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x283aa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x283aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283aa4: 0x8e5100d4  lw          $s1, 0xD4($s2)
    ctx->pc = 0x283aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x283aa8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x283aa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283aac: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x283aacu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283ab0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x283AB0u;
    SET_GPR_U32(ctx, 31, 0x283AB8u);
    ctx->pc = 0x283AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AB0u;
    // 0x283ab4: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x283AB0u, 0x283AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AB8u;
label_283ab8:
    // 0x283ab8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x283ab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283abc: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x283abcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x283ac0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x283ac0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x283ac4: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x283ac4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283ac8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x283AC8u;
    {
        const bool branch_taken_0x283ac8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283AC8u;
        // 0x283acc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ac8) {
            ctx->pc = 0x283AECu;
            goto label_283aec;
        }
    }
    ctx->pc = 0x283AD0u;
    // 0x283ad0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x283AD0u;
    SET_GPR_U32(ctx, 31, 0x283AD8u);
    ctx->pc = 0x283AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283AD0u;
    // 0x283ad4: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x283AD0u, 0x283AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AD8u;
label_283ad8:
    // 0x283ad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x283ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283adc: 0xc0a0c1e  jal         func_283078
    ctx->pc = 0x283ADCu;
    SET_GPR_U32(ctx, 31, 0x283AE4u);
    ctx->pc = 0x283AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283ADCu;
    // 0x283ae0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283078u, 0x283ADCu, 0x283AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283AE4u;
label_283ae4:
    // 0x283ae4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x283ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ae8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x283ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_283aec:
    // 0x283aec: 0x8e4405ac  lw          $a0, 0x5AC($s2)
    ctx->pc = 0x283aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1452)));
    // 0x283af0: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x283af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x283af4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x283af4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283af8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x283af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x283afc: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x283afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x283b00: 0xae4305ac  sw          $v1, 0x5AC($s2)
    ctx->pc = 0x283b00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 3));
    // 0x283b04: 0x92220128  lbu         $v0, 0x128($s1)
    ctx->pc = 0x283b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x283b08: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x283B08u;
    {
        const bool branch_taken_0x283b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x283B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B08u;
        // 0x283b0c: 0x64f023  subu        $fp, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b08) {
            ctx->pc = 0x283B38u;
            goto label_283b38;
        }
    }
    ctx->pc = 0x283B10u;
    // 0x283b10: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x283B10u;
    {
        const bool branch_taken_0x283b10 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x283b10) {
            ctx->pc = 0x283B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283B10u;
            // 0x283b14: 0x8e420380  lw          $v0, 0x380($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283B3Cu;
            goto label_283b3c;
        }
    }
    ctx->pc = 0x283B18u;
    // 0x283b18: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x283b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x283b1c: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x283b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x283b20: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x283b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x283b24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283B24u;
    {
        const bool branch_taken_0x283b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B24u;
        // 0x283b28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b24) {
            ctx->pc = 0x283B38u;
            goto label_283b38;
        }
    }
    ctx->pc = 0x283B2Cu;
    // 0x283b2c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x283b2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b30: 0xa28205b4  sb          $v0, 0x5B4($s4)
    ctx->pc = 0x283b30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x283b34: 0xa2260128  sb          $a2, 0x128($s1)
    ctx->pc = 0x283b34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 6));
label_283b38:
    // 0x283b38: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x283b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
label_283b3c:
    // 0x283b3c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x283b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x283b40: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x283b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x283b44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x283b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x283b48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x283b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283b4c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x283b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283b50: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x283b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x283b54: 0xc070192  jal         func_1C0648
    ctx->pc = 0x283B54u;
    SET_GPR_U32(ctx, 31, 0x283B5Cu);
    ctx->pc = 0x283B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B54u;
    // 0x283b58: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0648u, 0x283B54u, 0x283B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B5Cu;
label_283b5c:
    // 0x283b5c: 0x12000083  beqz        $s0, . + 4 + (0x83 << 2)
    ctx->pc = 0x283B5Cu;
    {
        const bool branch_taken_0x283b5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x283B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B5Cu;
        // 0x283b60: 0x8ee2b734  lw          $v0, -0x48CC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b5c) {
            ctx->pc = 0x283D6Cu;
            goto label_283d6c;
        }
    }
    ctx->pc = 0x283B64u;
    // 0x283b64: 0x52c0003a  beql        $s6, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x283B64u;
    {
        const bool branch_taken_0x283b64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x283b64) {
            ctx->pc = 0x283B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283B64u;
            // 0x283b68: 0x8e230130  lw          $v1, 0x130($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283C50u;
            goto label_283c50;
        }
    }
    ctx->pc = 0x283B6Cu;
    // 0x283b6c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x283B6Cu;
    SET_GPR_U32(ctx, 31, 0x283B74u);
    ctx->pc = 0x283B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B6Cu;
    // 0x283b70: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x283B6Cu, 0x283B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B74u;
label_283b74:
    // 0x283b74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x283b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b78: 0xc0a0ada  jal         func_282B68
    ctx->pc = 0x283B78u;
    SET_GPR_U32(ctx, 31, 0x283B80u);
    ctx->pc = 0x283B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283B78u;
    // 0x283b7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282B68u, 0x283B78u, 0x283B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283B80u;
label_283b80:
    // 0x283b80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x283b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283b84: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x283b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x283b88: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x283b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x283b8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283B8Cu;
    {
        const bool branch_taken_0x283b8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283B8Cu;
        // 0x283b90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283b8c) {
            ctx->pc = 0x283BA8u;
            goto label_283ba8;
        }
    }
    ctx->pc = 0x283B94u;
    // 0x283b94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283b98: 0x0  nop
    ctx->pc = 0x283b98u;
    // NOP
    // 0x283b9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283b9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283ba0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283BA0u;
    {
        const bool branch_taken_0x283ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BA0u;
        // 0x283ba4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ba0) {
            ctx->pc = 0x283BC4u;
            goto label_283bc4;
        }
    }
    ctx->pc = 0x283BA8u;
label_283ba8:
    // 0x283ba8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283bac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283bb4: 0x0  nop
    ctx->pc = 0x283bb4u;
    // NOP
    // 0x283bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283bbc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283bbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x283bc0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x283bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_283bc4:
    // 0x283bc4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283BC4u;
    {
        const bool branch_taken_0x283bc4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BC4u;
        // 0x283bc8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bc4) {
            ctx->pc = 0x283BE0u;
            goto label_283be0;
        }
    }
    ctx->pc = 0x283BCCu;
    // 0x283bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283bd0: 0x0  nop
    ctx->pc = 0x283bd0u;
    // NOP
    // 0x283bd4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283bd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283bd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283BD8u;
    {
        const bool branch_taken_0x283bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283BD8u;
        // 0x283bdc: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283bd8) {
            ctx->pc = 0x283BFCu;
            goto label_283bfc;
        }
    }
    ctx->pc = 0x283BE0u;
label_283be0:
    // 0x283be0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283be4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283be8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283bec: 0x0  nop
    ctx->pc = 0x283becu;
    // NOP
    // 0x283bf0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283bf4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x283bf4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x283bf8: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x283bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_283bfc:
    // 0x283bfc: 0x0  nop
    ctx->pc = 0x283bfcu;
    // NOP
    // 0x283c00: 0x0  nop
    ctx->pc = 0x283c00u;
    // NOP
    // 0x283c04: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x283c04u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x283c08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283C08u;
    {
        const bool branch_taken_0x283c08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C08u;
        // 0x283c0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c08) {
            ctx->pc = 0x283C24u;
            goto label_283c24;
        }
    }
    ctx->pc = 0x283C10u;
    // 0x283c10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283c14: 0x0  nop
    ctx->pc = 0x283c14u;
    // NOP
    // 0x283c18: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283c1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283C1Cu;
    {
        const bool branch_taken_0x283c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C1Cu;
        // 0x283c20: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c1c) {
            ctx->pc = 0x283C40u;
            goto label_283c40;
        }
    }
    ctx->pc = 0x283C24u;
label_283c24:
    // 0x283c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283c2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283c30: 0x0  nop
    ctx->pc = 0x283c30u;
    // NOP
    // 0x283c34: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283c38: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x283c38u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x283c3c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x283c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_283c40:
    // 0x283c40: 0x4410036  bgez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x283C40u;
    {
        const bool branch_taken_0x283c40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x283C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C40u;
        // 0x283c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c40) {
            ctx->pc = 0x283D1Cu;
            goto label_283d1c;
        }
    }
    ctx->pc = 0x283C48u;
    // 0x283c48: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x283C48u;
    {
        const bool branch_taken_0x283c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C48u;
        // 0x283c4c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c48) {
            ctx->pc = 0x283D34u;
            goto label_283d34;
        }
    }
    ctx->pc = 0x283C50u;
label_283c50:
    // 0x283c50: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x283c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x283c54: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x283c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283c58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283C58u;
    {
        const bool branch_taken_0x283c58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C58u;
        // 0x283c5c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c58) {
            ctx->pc = 0x283C74u;
            goto label_283c74;
        }
    }
    ctx->pc = 0x283C60u;
    // 0x283c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283c64: 0x0  nop
    ctx->pc = 0x283c64u;
    // NOP
    // 0x283c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283c6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x283C6Cu;
    {
        const bool branch_taken_0x283c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C6Cu;
        // 0x283c70: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c6c) {
            ctx->pc = 0x283C94u;
            goto label_283c94;
        }
    }
    ctx->pc = 0x283C74u;
label_283c74:
    // 0x283c74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x283c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x283c78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283c7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283c80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283c84: 0x0  nop
    ctx->pc = 0x283c84u;
    // NOP
    // 0x283c88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283c88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283c8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x283c90: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x283c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_283c94:
    // 0x283c94: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x283c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283c98: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283C98u;
    {
        const bool branch_taken_0x283c98 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283C98u;
        // 0x283c9c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283c98) {
            ctx->pc = 0x283CB4u;
            goto label_283cb4;
        }
    }
    ctx->pc = 0x283CA0u;
    // 0x283ca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283ca4: 0x0  nop
    ctx->pc = 0x283ca4u;
    // NOP
    // 0x283ca8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283CACu;
    {
        const bool branch_taken_0x283cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CACu;
        // 0x283cb0: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cac) {
            ctx->pc = 0x283CD0u;
            goto label_283cd0;
        }
    }
    ctx->pc = 0x283CB4u;
label_283cb4:
    // 0x283cb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283cb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283cbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283cc0: 0x0  nop
    ctx->pc = 0x283cc0u;
    // NOP
    // 0x283cc4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283cc8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x283cc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x283ccc: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x283cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_283cd0:
    // 0x283cd0: 0x0  nop
    ctx->pc = 0x283cd0u;
    // NOP
    // 0x283cd4: 0x0  nop
    ctx->pc = 0x283cd4u;
    // NOP
    // 0x283cd8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x283cd8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x283cdc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283CDCu;
    {
        const bool branch_taken_0x283cdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CDCu;
        // 0x283ce0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cdc) {
            ctx->pc = 0x283CF8u;
            goto label_283cf8;
        }
    }
    ctx->pc = 0x283CE4u;
    // 0x283ce4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283ce8: 0x0  nop
    ctx->pc = 0x283ce8u;
    // NOP
    // 0x283cec: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283cf0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283CF0u;
    {
        const bool branch_taken_0x283cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283CF0u;
        // 0x283cf4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283cf0) {
            ctx->pc = 0x283D14u;
            goto label_283d14;
        }
    }
    ctx->pc = 0x283CF8u;
label_283cf8:
    // 0x283cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283d00: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283d04: 0x0  nop
    ctx->pc = 0x283d04u;
    // NOP
    // 0x283d08: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283d0c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x283d0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x283d10: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x283d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_283d14:
    // 0x283d14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283D14u;
    {
        const bool branch_taken_0x283d14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D14u;
        // 0x283d18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d14) {
            ctx->pc = 0x283D30u;
            goto label_283d30;
        }
    }
    ctx->pc = 0x283D1Cu;
label_283d1c:
    // 0x283d1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283d20: 0x0  nop
    ctx->pc = 0x283d20u;
    // NOP
    // 0x283d24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283d24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283d28: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283D28u;
    {
        const bool branch_taken_0x283d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283d28) {
            ctx->pc = 0x283D48u;
            goto label_283d48;
        }
    }
    ctx->pc = 0x283D30u;
label_283d30:
    // 0x283d30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_283d34:
    // 0x283d34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283d3c: 0x0  nop
    ctx->pc = 0x283d3cu;
    // NOP
    // 0x283d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283d44: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_283d48:
    // 0x283d48: 0x0  nop
    ctx->pc = 0x283d48u;
    // NOP
    // 0x283d4c: 0x0  nop
    ctx->pc = 0x283d4cu;
    // NOP
    // 0x283d50: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x283d50u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x283d54: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x283d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x283d58: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x283d5c: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x283D5Cu;
    SET_GPR_U32(ctx, 31, 0x283D64u);
    ctx->pc = 0x283D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283D5Cu;
    // 0x283d60: 0x8e450380  lw          $a1, 0x380($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x283D5Cu, 0x283D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283D64u;
label_283d64:
    // 0x283d64: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x283D64u;
    {
        const bool branch_taken_0x283d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D64u;
        // 0x283d68: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d64) {
            ctx->pc = 0x283E88u;
            goto label_283e88;
        }
    }
    ctx->pc = 0x283D6Cu;
label_283d6c:
    // 0x283d6c: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x283d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x283d70: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x283d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x283d74: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x283d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283d78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283D78u;
    {
        const bool branch_taken_0x283d78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D78u;
        // 0x283d7c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d78) {
            ctx->pc = 0x283D94u;
            goto label_283d94;
        }
    }
    ctx->pc = 0x283D80u;
    // 0x283d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283d84: 0x0  nop
    ctx->pc = 0x283d84u;
    // NOP
    // 0x283d88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283d88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283d8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x283D8Cu;
    {
        const bool branch_taken_0x283d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D8Cu;
        // 0x283d90: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d8c) {
            ctx->pc = 0x283DB4u;
            goto label_283db4;
        }
    }
    ctx->pc = 0x283D94u;
label_283d94:
    // 0x283d94: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x283d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x283d98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283d9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283da4: 0x0  nop
    ctx->pc = 0x283da4u;
    // NOP
    // 0x283da8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283dac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283dacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x283db0: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x283db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_283db4:
    // 0x283db4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x283db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283db8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283DB8u;
    {
        const bool branch_taken_0x283db8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DB8u;
        // 0x283dbc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283db8) {
            ctx->pc = 0x283DD4u;
            goto label_283dd4;
        }
    }
    ctx->pc = 0x283DC0u;
    // 0x283dc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283dc4: 0x0  nop
    ctx->pc = 0x283dc4u;
    // NOP
    // 0x283dc8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283dcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283DCCu;
    {
        const bool branch_taken_0x283dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DCCu;
        // 0x283dd0: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dcc) {
            ctx->pc = 0x283DF0u;
            goto label_283df0;
        }
    }
    ctx->pc = 0x283DD4u;
label_283dd4:
    // 0x283dd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283dd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283ddc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283de0: 0x0  nop
    ctx->pc = 0x283de0u;
    // NOP
    // 0x283de4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x283de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x283de8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x283de8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x283dec: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_283df0:
    // 0x283df0: 0x0  nop
    ctx->pc = 0x283df0u;
    // NOP
    // 0x283df4: 0x0  nop
    ctx->pc = 0x283df4u;
    // NOP
    // 0x283df8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x283df8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x283dfc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283DFCu;
    {
        const bool branch_taken_0x283dfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283DFCu;
        // 0x283e00: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283dfc) {
            ctx->pc = 0x283E18u;
            goto label_283e18;
        }
    }
    ctx->pc = 0x283E04u;
    // 0x283e04: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283e08: 0x0  nop
    ctx->pc = 0x283e08u;
    // NOP
    // 0x283e0c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283e0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283e10: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x283E10u;
    {
        const bool branch_taken_0x283e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E10u;
        // 0x283e14: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e10) {
            ctx->pc = 0x283E34u;
            goto label_283e34;
        }
    }
    ctx->pc = 0x283E18u;
label_283e18:
    // 0x283e18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283e20: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x283e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x283e24: 0x0  nop
    ctx->pc = 0x283e24u;
    // NOP
    // 0x283e28: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x283e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x283e2c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x283e2cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x283e30: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x283e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_283e34:
    // 0x283e34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283E34u;
    {
        const bool branch_taken_0x283e34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x283E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283E34u;
        // 0x283e38: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283e34) {
            ctx->pc = 0x283E50u;
            goto label_283e50;
        }
    }
    ctx->pc = 0x283E3Cu;
    // 0x283e3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283e3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283e40: 0x0  nop
    ctx->pc = 0x283e40u;
    // NOP
    // 0x283e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283e48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283E48u;
    {
        const bool branch_taken_0x283e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x283e48) {
            ctx->pc = 0x283E68u;
            goto label_283e68;
        }
    }
    ctx->pc = 0x283E50u;
label_283e50:
    // 0x283e50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x283e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x283e54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x283e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x283e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283e5c: 0x0  nop
    ctx->pc = 0x283e5cu;
    // NOP
    // 0x283e60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283e64: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x283e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_283e68:
    // 0x283e68: 0x0  nop
    ctx->pc = 0x283e68u;
    // NOP
    // 0x283e6c: 0x0  nop
    ctx->pc = 0x283e6cu;
    // NOP
    // 0x283e70: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x283e70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x283e74: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x283e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x283e78: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x283e7c: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x283E7Cu;
    SET_GPR_U32(ctx, 31, 0x283E84u);
    ctx->pc = 0x283E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E7Cu;
    // 0x283e80: 0x8e450380  lw          $a1, 0x380($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x283E7Cu, 0x283E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283E84u;
label_283e84:
    // 0x283e84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_283e88:
    // 0x283e88: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x283e88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x283e8c: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x283e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x283e90: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x283e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283e94: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x283e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283e98: 0xc06ca3a  jal         func_1B28E8
    ctx->pc = 0x283E98u;
    SET_GPR_U32(ctx, 31, 0x283EA0u);
    ctx->pc = 0x283E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283E98u;
    // 0x283e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28E8u, 0x283E98u, 0x283EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EA0u;
label_283ea0:
    // 0x283ea0: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x283ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x283ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x283ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283ea8: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x283EA8u;
    SET_GPR_U32(ctx, 31, 0x283EB0u);
    ctx->pc = 0x283EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283EA8u;
    // 0x283eac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x283EA8u, 0x283EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EB0u;
label_283eb0:
    // 0x283eb0: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x283eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x283eb4: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x283eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x283eb8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x283eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x283ebc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x283ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x283ec0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x283ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x283ec4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283ec8: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x283ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x283ecc: 0xc6a40014  lwc1        $f4, 0x14($s5)
    ctx->pc = 0x283eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x283ed0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x283ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283ed4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x283ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x283ed8: 0x460000c5  abs.s       $f3, $f0
    ctx->pc = 0x283ed8u;
    ctx->f[3] = FPU_ABS_S(ctx->f[0]);
    // 0x283edc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x283edcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x283ee0: 0x460118e9  min.s       $f3, $f3, $f1
    ctx->pc = 0x283ee0u;
    ctx->f[3] = std::min(ctx->f[3], ctx->f[1]);
    // 0x283ee4: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x283ee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283ee8: 0x0  nop
    ctx->pc = 0x283ee8u;
    // NOP
    // 0x283eec: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x283EECu;
    {
        const bool branch_taken_0x283eec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283eec) {
            ctx->pc = 0x283EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283EECu;
            // 0x283ef0: 0x92a2001c  lbu         $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F80u;
            goto label_283f80;
        }
    }
    ctx->pc = 0x283EF4u;
    // 0x283ef4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x283ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x283ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283efc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x283efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x283f00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283f04: 0x0  nop
    ctx->pc = 0x283f04u;
    // NOP
    // 0x283f08: 0x4502001d  bc1fl       . + 4 + (0x1D << 2)
    ctx->pc = 0x283F08u;
    {
        const bool branch_taken_0x283f08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283f08) {
            ctx->pc = 0x283F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283F08u;
            // 0x283f0c: 0x92a2001c  lbu         $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F80u;
            goto label_283f80;
        }
    }
    ctx->pc = 0x283F10u;
    // 0x283f10: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x283f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283f14: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x283f14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x283f18: 0x0  nop
    ctx->pc = 0x283f18u;
    // NOP
    // 0x283f1c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x283F1Cu;
    {
        const bool branch_taken_0x283f1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x283f1c) {
            ctx->pc = 0x283F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283F1Cu;
            // 0x283f20: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283F2Cu;
            goto label_283f2c;
        }
    }
    ctx->pc = 0x283F24u;
    // 0x283f24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x283F24u;
    {
        const bool branch_taken_0x283f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F24u;
        // 0x283f28: 0x92a20002  lbu         $v0, 0x2($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f24) {
            ctx->pc = 0x283F80u;
            goto label_283f80;
        }
    }
    ctx->pc = 0x283F2Cu;
label_283f2c:
    // 0x283f2c: 0x0  nop
    ctx->pc = 0x283f2cu;
    // NOP
    // 0x283f30: 0x0  nop
    ctx->pc = 0x283f30u;
    // NOP
    // 0x283f34: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x283f34u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x283f38: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x283f38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
    // 0x283f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x283f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x283f40: 0x0  nop
    ctx->pc = 0x283f40u;
    // NOP
    // 0x283f44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x283f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x283f48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283f4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x283f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x283f50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x283f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x283f54: 0x0  nop
    ctx->pc = 0x283f54u;
    // NOP
    // 0x283f58: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x283f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x283f5c: 0xa260001d  sb          $zero, 0x1D($s3)
    ctx->pc = 0x283f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x283f60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x283f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x283f64: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x283f64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x283f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x283f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x283f6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x283f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x283f70: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x283f70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x283f74: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x283f74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x283f78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x283F78u;
    {
        const bool branch_taken_0x283f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F78u;
        // 0x283f7c: 0xa262001c  sb          $v0, 0x1C($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f78) {
            ctx->pc = 0x283F8Cu;
            goto label_283f8c;
        }
    }
    ctx->pc = 0x283F80u;
label_283f80:
    // 0x283f80: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x283f80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x283f84: 0xa262001c  sb          $v0, 0x1C($s3)
    ctx->pc = 0x283f84u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x283f88: 0xa263001d  sb          $v1, 0x1D($s3)
    ctx->pc = 0x283f88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 3));
label_283f8c:
    // 0x283f8c: 0x92230128  lbu         $v1, 0x128($s1)
    ctx->pc = 0x283f8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x283f90: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x283f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x283f94: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x283F94u;
    {
        const bool branch_taken_0x283f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F94u;
        // 0x283f98: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f94) {
            ctx->pc = 0x2840FCu;
            goto label_2840fc;
        }
    }
    ctx->pc = 0x283F9Cu;
    // 0x283f9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x283f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x283fa0: 0x2442ecf0  addiu       $v0, $v0, -0x1310
    ctx->pc = 0x283fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962416));
    // 0x283fa4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283fa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x283fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283fac: 0x800008  jr          $a0
    ctx->pc = 0x283FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283FB4u: goto label_283fb4;
            case 0x284000u: goto label_284000;
            case 0x284014u: goto label_284014;
            case 0x284094u: goto label_284094;
            case 0x28409Cu: goto label_28409c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283FACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x283FB4u;
label_283fb4:
    // 0x283fb4: 0xa28005b4  sb          $zero, 0x5B4($s4)
    ctx->pc = 0x283fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 0));
    // 0x283fb8: 0xa28005b5  sb          $zero, 0x5B5($s4)
    ctx->pc = 0x283fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1461), (uint8_t)GPR_U32(ctx, 0));
    // 0x283fbc: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x283fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x283fc0: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x283FC0u;
    SET_GPR_U32(ctx, 31, 0x283FC8u);
    ctx->pc = 0x283FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FC0u;
    // 0x283fc4: 0xc6ad0014  lwc1        $f13, 0x14($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x283FC0u, 0x283FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FC8u;
label_283fc8:
    // 0x283fc8: 0xe64005a8  swc1        $f0, 0x5A8($s2)
    ctx->pc = 0x283fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
    // 0x283fcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x283fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x283fd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x283fd4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x283fd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x283fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fdc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x283fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x283fe0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x283fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283fe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x283fe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fe8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x283fe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283fec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x283fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283ff0: 0xc088178  jal         func_2205E0
    ctx->pc = 0x283FF0u;
    SET_GPR_U32(ctx, 31, 0x283FF8u);
    ctx->pc = 0x283FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283FF0u;
    // 0x283ff4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x283FF0u, 0x283FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283FF8u;
label_283ff8:
    // 0x283ff8: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x283FF8u;
    {
        const bool branch_taken_0x283ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283FF8u;
        // 0x283ffc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283ff8) {
            ctx->pc = 0x284104u;
            goto label_284104;
        }
    }
    ctx->pc = 0x284000u;
label_284000:
    // 0x284000: 0xa260001d  sb          $zero, 0x1D($s3)
    ctx->pc = 0x284000u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x284004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x284004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284008: 0xa260001c  sb          $zero, 0x1C($s3)
    ctx->pc = 0x284008u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x28400c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x28400Cu;
    {
        const bool branch_taken_0x28400c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28400Cu;
        // 0x284010: 0xa28005b6  sb          $zero, 0x5B6($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1462), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28400c) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x284014u;
label_284014:
    // 0x284014: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x284014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x284018: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x284018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x28401c: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28401Cu;
    {
        const bool branch_taken_0x28401c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x284020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28401Cu;
        // 0x284020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28401c) {
            ctx->pc = 0x284104u;
            goto label_284104;
        }
    }
    ctx->pc = 0x284024u;
    // 0x284024: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x284024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x284028: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x284028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x28402c: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x28402cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
    // 0x284030: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x284030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x284034: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x284034u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x284038: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284038u;
    {
        const bool branch_taken_0x284038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284038) {
            ctx->pc = 0x28403Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284038u;
            // 0x28403c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x284040u;
            goto label_284040;
        }
    }
    ctx->pc = 0x284040u;
label_284040:
    // 0x284040: 0x2012  mflo        $a0
    ctx->pc = 0x284040u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x284044: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x284044u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x284048: 0x1812  mflo        $v1
    ctx->pc = 0x284048u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x28404c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28404Cu;
    {
        const bool branch_taken_0x28404c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x284050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28404Cu;
        // 0x284050: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28404c) {
            ctx->pc = 0x284068u;
            goto label_284068;
        }
    }
    ctx->pc = 0x284054u;
    // 0x284054: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x284054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x284058: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x284058u;
    SET_GPR_U32(ctx, 31, 0x284060u);
    ctx->pc = 0x28405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284058u;
    // 0x28405c: 0xc6ad0014  lwc1        $f13, 0x14($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x284058u, 0x284060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284060u;
label_284060:
    // 0x284060: 0xe64005a8  swc1        $f0, 0x5A8($s2)
    ctx->pc = 0x284060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
    // 0x284064: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x284064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_284068:
    // 0x284068: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x284068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x28406c: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x28406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x284070: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x284070u;
    SET_GPR_U32(ctx, 31, 0x284078u);
    ctx->pc = 0x284074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284070u;
    // 0x284074: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x284070u, 0x284078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284078u;
label_284078:
    // 0x284078: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x284078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x28407c: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x28407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x284080: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x284080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284084: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x284084u;
    {
        const bool branch_taken_0x284084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284084u;
        // 0x284088: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284084) {
            ctx->pc = 0x28410Cu;
            goto label_28410c;
        }
    }
    ctx->pc = 0x28408Cu;
    // 0x28408c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28408Cu;
    {
        const bool branch_taken_0x28408c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28408Cu;
        // 0x284090: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28408c) {
            ctx->pc = 0x284100u;
            goto label_284100;
        }
    }
    ctx->pc = 0x284094u;
label_284094:
    // 0x284094: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x284094u;
    {
        const bool branch_taken_0x284094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284094u;
        // 0x284098: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284094) {
            ctx->pc = 0x284104u;
            goto label_284104;
        }
    }
    ctx->pc = 0x28409Cu;
label_28409c:
    // 0x28409c: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x28409cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2840a0: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x2840a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2840a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2840A4u;
    {
        const bool branch_taken_0x2840a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2840A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840A4u;
        // 0x2840a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840a4) {
            ctx->pc = 0x2840B4u;
            goto label_2840b4;
        }
    }
    ctx->pc = 0x2840ACu;
    // 0x2840ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2840ACu;
    {
        const bool branch_taken_0x2840ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840ACu;
        // 0x2840b0: 0xa2220128  sb          $v0, 0x128($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840ac) {
            ctx->pc = 0x2840CCu;
            goto label_2840cc;
        }
    }
    ctx->pc = 0x2840B4u;
label_2840b4:
    // 0x2840b4: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2840B4u;
    {
        const bool branch_taken_0x2840b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2840b4) {
            ctx->pc = 0x2840B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2840B4u;
            // 0x2840b8: 0x8e220138  lw          $v0, 0x138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2840C4u;
            goto label_2840c4;
        }
    }
    ctx->pc = 0x2840BCu;
    // 0x2840bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2840BCu;
    {
        const bool branch_taken_0x2840bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840BCu;
        // 0x2840c0: 0xae200138  sw          $zero, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840bc) {
            ctx->pc = 0x2840CCu;
            goto label_2840cc;
        }
    }
    ctx->pc = 0x2840C4u;
label_2840c4:
    // 0x2840c4: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2840c8: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x2840c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_2840cc:
    // 0x2840cc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2840ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x2840d0: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x2840d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2840d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2840d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2840d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2840D8u;
    {
        const bool branch_taken_0x2840d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840D8u;
        // 0x2840dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840d8) {
            ctx->pc = 0x284108u;
            goto label_284108;
        }
    }
    ctx->pc = 0x2840E0u;
    // 0x2840e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2840e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2840e4: 0xa28205b4  sb          $v0, 0x5B4($s4)
    ctx->pc = 0x2840e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x2840e8: 0xa2230128  sb          $v1, 0x128($s1)
    ctx->pc = 0x2840e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 3));
    // 0x2840ec: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x2840ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2840f0: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2840f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2840F4u;
    {
        const bool branch_taken_0x2840f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2840F4u;
        // 0x2840f8: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840f4) {
            ctx->pc = 0x284108u;
            goto label_284108;
        }
    }
    ctx->pc = 0x2840FCu;
label_2840fc:
    // 0x2840fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2840fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_284100:
    // 0x284100: 0xa28005b4  sb          $zero, 0x5B4($s4)
    ctx->pc = 0x284100u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 0));
label_284104:
    // 0x284104: 0xa2220128  sb          $v0, 0x128($s1)
    ctx->pc = 0x284104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 2));
label_284108:
    // 0x284108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28410c:
    // 0x28410c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28410cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x284110: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x284110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x284114: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x284114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x284118: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x284118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28411c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28411cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x284120: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x284120u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x284124: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x284124u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x284128: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x284128u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28412c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x28412cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284134: 0x3e00008  jr          $ra
    ctx->pc = 0x284134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284134u;
        // 0x284138: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28413Cu;
    // 0x28413c: 0x0  nop
    ctx->pc = 0x28413cu;
    // NOP
    ctx->pc = 0x284140u;
}
