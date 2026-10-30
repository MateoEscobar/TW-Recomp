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

// Function: sub_002A7A88
// Address: 0x2a7a88 - 0x2a7c48
void sub_002A7A88_0x2a7a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7A88_0x2a7a88");
#endif

    switch (ctx->pc) {
        case 0x2a7a88u: goto label_2a7a88;
        case 0x2a7a8cu: goto label_2a7a8c;
        case 0x2a7a90u: goto label_2a7a90;
        case 0x2a7a94u: goto label_2a7a94;
        case 0x2a7a98u: goto label_2a7a98;
        case 0x2a7a9cu: goto label_2a7a9c;
        case 0x2a7aa0u: goto label_2a7aa0;
        case 0x2a7aa4u: goto label_2a7aa4;
        case 0x2a7aa8u: goto label_2a7aa8;
        case 0x2a7aacu: goto label_2a7aac;
        case 0x2a7ab0u: goto label_2a7ab0;
        case 0x2a7ab4u: goto label_2a7ab4;
        case 0x2a7ab8u: goto label_2a7ab8;
        case 0x2a7abcu: goto label_2a7abc;
        case 0x2a7ac0u: goto label_2a7ac0;
        case 0x2a7ac4u: goto label_2a7ac4;
        case 0x2a7ac8u: goto label_2a7ac8;
        case 0x2a7accu: goto label_2a7acc;
        case 0x2a7ad0u: goto label_2a7ad0;
        case 0x2a7ad4u: goto label_2a7ad4;
        case 0x2a7ad8u: goto label_2a7ad8;
        case 0x2a7adcu: goto label_2a7adc;
        case 0x2a7ae0u: goto label_2a7ae0;
        case 0x2a7ae4u: goto label_2a7ae4;
        case 0x2a7ae8u: goto label_2a7ae8;
        case 0x2a7aecu: goto label_2a7aec;
        case 0x2a7af0u: goto label_2a7af0;
        case 0x2a7af4u: goto label_2a7af4;
        case 0x2a7af8u: goto label_2a7af8;
        case 0x2a7afcu: goto label_2a7afc;
        case 0x2a7b00u: goto label_2a7b00;
        case 0x2a7b04u: goto label_2a7b04;
        case 0x2a7b08u: goto label_2a7b08;
        case 0x2a7b0cu: goto label_2a7b0c;
        case 0x2a7b10u: goto label_2a7b10;
        case 0x2a7b14u: goto label_2a7b14;
        case 0x2a7b18u: goto label_2a7b18;
        case 0x2a7b1cu: goto label_2a7b1c;
        case 0x2a7b20u: goto label_2a7b20;
        case 0x2a7b24u: goto label_2a7b24;
        case 0x2a7b28u: goto label_2a7b28;
        case 0x2a7b2cu: goto label_2a7b2c;
        case 0x2a7b30u: goto label_2a7b30;
        case 0x2a7b34u: goto label_2a7b34;
        case 0x2a7b38u: goto label_2a7b38;
        case 0x2a7b3cu: goto label_2a7b3c;
        case 0x2a7b40u: goto label_2a7b40;
        case 0x2a7b44u: goto label_2a7b44;
        case 0x2a7b48u: goto label_2a7b48;
        case 0x2a7b4cu: goto label_2a7b4c;
        case 0x2a7b50u: goto label_2a7b50;
        case 0x2a7b54u: goto label_2a7b54;
        case 0x2a7b58u: goto label_2a7b58;
        case 0x2a7b5cu: goto label_2a7b5c;
        case 0x2a7b60u: goto label_2a7b60;
        case 0x2a7b64u: goto label_2a7b64;
        case 0x2a7b68u: goto label_2a7b68;
        case 0x2a7b6cu: goto label_2a7b6c;
        case 0x2a7b70u: goto label_2a7b70;
        case 0x2a7b74u: goto label_2a7b74;
        case 0x2a7b78u: goto label_2a7b78;
        case 0x2a7b7cu: goto label_2a7b7c;
        case 0x2a7b80u: goto label_2a7b80;
        case 0x2a7b84u: goto label_2a7b84;
        case 0x2a7b88u: goto label_2a7b88;
        case 0x2a7b8cu: goto label_2a7b8c;
        case 0x2a7b90u: goto label_2a7b90;
        case 0x2a7b94u: goto label_2a7b94;
        case 0x2a7b98u: goto label_2a7b98;
        case 0x2a7b9cu: goto label_2a7b9c;
        case 0x2a7ba0u: goto label_2a7ba0;
        case 0x2a7ba4u: goto label_2a7ba4;
        case 0x2a7ba8u: goto label_2a7ba8;
        case 0x2a7bacu: goto label_2a7bac;
        case 0x2a7bb0u: goto label_2a7bb0;
        case 0x2a7bb4u: goto label_2a7bb4;
        case 0x2a7bb8u: goto label_2a7bb8;
        case 0x2a7bbcu: goto label_2a7bbc;
        case 0x2a7bc0u: goto label_2a7bc0;
        case 0x2a7bc4u: goto label_2a7bc4;
        case 0x2a7bc8u: goto label_2a7bc8;
        case 0x2a7bccu: goto label_2a7bcc;
        case 0x2a7bd0u: goto label_2a7bd0;
        case 0x2a7bd4u: goto label_2a7bd4;
        case 0x2a7bd8u: goto label_2a7bd8;
        case 0x2a7bdcu: goto label_2a7bdc;
        case 0x2a7be0u: goto label_2a7be0;
        case 0x2a7be4u: goto label_2a7be4;
        case 0x2a7be8u: goto label_2a7be8;
        case 0x2a7becu: goto label_2a7bec;
        case 0x2a7bf0u: goto label_2a7bf0;
        case 0x2a7bf4u: goto label_2a7bf4;
        case 0x2a7bf8u: goto label_2a7bf8;
        case 0x2a7bfcu: goto label_2a7bfc;
        case 0x2a7c00u: goto label_2a7c00;
        case 0x2a7c04u: goto label_2a7c04;
        case 0x2a7c08u: goto label_2a7c08;
        case 0x2a7c0cu: goto label_2a7c0c;
        case 0x2a7c10u: goto label_2a7c10;
        case 0x2a7c14u: goto label_2a7c14;
        case 0x2a7c18u: goto label_2a7c18;
        case 0x2a7c1cu: goto label_2a7c1c;
        case 0x2a7c20u: goto label_2a7c20;
        case 0x2a7c24u: goto label_2a7c24;
        case 0x2a7c28u: goto label_2a7c28;
        case 0x2a7c2cu: goto label_2a7c2c;
        case 0x2a7c30u: goto label_2a7c30;
        case 0x2a7c34u: goto label_2a7c34;
        case 0x2a7c38u: goto label_2a7c38;
        case 0x2a7c3cu: goto label_2a7c3c;
        case 0x2a7c40u: goto label_2a7c40;
        case 0x2a7c44u: goto label_2a7c44;
        default: break;
    }

    ctx->pc = 0x2a7a88u;

label_2a7a88:
    // 0x2a7a88: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a7a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a7a8c:
    // 0x2a7a8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a7a90:
    // 0x2a7a90: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a7a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a7a94:
    // 0x2a7a94: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a7a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a7a98:
    // 0x2a7a98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7a98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a7a9c:
    // 0x2a7a9c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a7a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a7aa0:
    // 0x2a7aa0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a7aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a7aa4:
    // 0x2a7aa4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a7aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2a7aa8:
    // 0x2a7aa8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a7aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a7aac:
    // 0x2a7aac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7ab0:
    // 0x2a7ab0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x2a7ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_2a7ab4:
    // 0x2a7ab4: 0xc0e409a  jal         func_390268
label_2a7ab8:
    if (ctx->pc == 0x2A7AB8u) {
        ctx->pc = 0x2A7AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AB4u;
        // 0x2a7ab8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7ABCu;
        goto label_2a7abc;
    }
    ctx->pc = 0x2A7AB4u;
    SET_GPR_U32(ctx, 31, 0x2A7ABCu);
    ctx->pc = 0x2A7AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7AB4u;
    // 0x2a7ab8: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A7AB4u, 0x2A7ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7ABCu;
label_2a7abc:
    // 0x2a7abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a7abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ac0:
    // 0x2a7ac0: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
label_2a7ac4:
    if (ctx->pc == 0x2A7AC4u) {
        ctx->pc = 0x2A7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AC0u;
        // 0x2a7ac4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7AC8u;
        goto label_2a7ac8;
    }
    ctx->pc = 0x2A7AC0u;
    {
        const bool branch_taken_0x2a7ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AC0u;
        // 0x2a7ac4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ac0) {
            ctx->pc = 0x2A7C24u;
            goto label_2a7c24;
        }
    }
    ctx->pc = 0x2A7AC8u;
label_2a7ac8:
    // 0x2a7ac8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7acc:
    // 0x2a7acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7ad0:
    // 0x2a7ad0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a7ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a7ad4:
    // 0x2a7ad4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a7ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a7ad8:
    // 0x2a7ad8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a7ad8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a7adc:
    // 0x2a7adc: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a7adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a7ae0:
    // 0x2a7ae0: 0x60f809  jalr        $v1
label_2a7ae4:
    if (ctx->pc == 0x2A7AE4u) {
        ctx->pc = 0x2A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AE0u;
        // 0x2a7ae4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7AE8u;
        goto label_2a7ae8;
    }
    ctx->pc = 0x2A7AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A7AE8u);
        ctx->pc = 0x2A7AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7AE0u;
        // 0x2a7ae4: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7AE0u, 0x2A7AE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7AE8u;
label_2a7ae8:
    // 0x2a7ae8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a7ae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a7aec:
    // 0x2a7aec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a7aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a7af0:
    // 0x2a7af0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a7af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a7af4:
    // 0x2a7af4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a7af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a7af8:
    // 0x2a7af8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a7af8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a7afc:
    // 0x2a7afc: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a7afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a7b00:
    // 0x2a7b00: 0xc0f809  jalr        $a2
label_2a7b04:
    if (ctx->pc == 0x2A7B04u) {
        ctx->pc = 0x2A7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B00u;
        // 0x2a7b04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B08u;
        goto label_2a7b08;
    }
    ctx->pc = 0x2A7B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A7B08u);
        ctx->pc = 0x2A7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B00u;
        // 0x2a7b04: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B00u, 0x2A7B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7B08u;
label_2a7b08:
    // 0x2a7b08: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a7b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7b0c:
    // 0x2a7b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a7b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b10:
    // 0x2a7b10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a7b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b14:
    // 0x2a7b14: 0xc0cdb38  jal         func_336CE0
label_2a7b18:
    if (ctx->pc == 0x2A7B18u) {
        ctx->pc = 0x2A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B14u;
        // 0x2a7b18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B1Cu;
        goto label_2a7b1c;
    }
    ctx->pc = 0x2A7B14u;
    SET_GPR_U32(ctx, 31, 0x2A7B1Cu);
    ctx->pc = 0x2A7B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B14u;
    // 0x2a7b18: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A7B14u, 0x2A7B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B1Cu;
label_2a7b1c:
    // 0x2a7b1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a7b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a7b20:
    // 0x2a7b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2a7b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b24:
    // 0x2a7b24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a7b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a7b28:
    // 0x2a7b28: 0xc08bfbc  jal         func_22FEF0
label_2a7b2c:
    if (ctx->pc == 0x2A7B2Cu) {
        ctx->pc = 0x2A7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B28u;
        // 0x2a7b2c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B30u;
        goto label_2a7b30;
    }
    ctx->pc = 0x2A7B28u;
    SET_GPR_U32(ctx, 31, 0x2A7B30u);
    ctx->pc = 0x2A7B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7B28u;
    // 0x2a7b2c: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2A7B28u, 0x2A7B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7B30u;
label_2a7b30:
    // 0x2a7b30: 0x8623002a  lh          $v1, 0x2A($s1)
    ctx->pc = 0x2a7b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_2a7b34:
    // 0x2a7b34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2a7b38:
    if (ctx->pc == 0x2A7B38u) {
        ctx->pc = 0x2A7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B34u;
        // 0x2a7b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B3Cu;
        goto label_2a7b3c;
    }
    ctx->pc = 0x2A7B34u;
    {
        const bool branch_taken_0x2a7b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B34u;
        // 0x2a7b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b34) {
            ctx->pc = 0x2A7B4Cu;
            goto label_2a7b4c;
        }
    }
    ctx->pc = 0x2A7B3Cu;
label_2a7b3c:
    // 0x2a7b3c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_2a7b40:
    if (ctx->pc == 0x2A7B40u) {
        ctx->pc = 0x2A7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B3Cu;
        // 0x2a7b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B44u;
        goto label_2a7b44;
    }
    ctx->pc = 0x2A7B3Cu;
    {
        const bool branch_taken_0x2a7b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B3Cu;
        // 0x2a7b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b3c) {
            ctx->pc = 0x2A7BB8u;
            goto label_2a7bb8;
        }
    }
    ctx->pc = 0x2A7B44u;
label_2a7b44:
    // 0x2a7b44: 0x10000039  b           . + 4 + (0x39 << 2)
label_2a7b48:
    if (ctx->pc == 0x2A7B48u) {
        ctx->pc = 0x2A7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B44u;
        // 0x2a7b48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B4Cu;
        goto label_2a7b4c;
    }
    ctx->pc = 0x2A7B44u;
    {
        const bool branch_taken_0x2a7b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B44u;
        // 0x2a7b48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b44) {
            ctx->pc = 0x2A7C2Cu;
            goto label_2a7c2c;
        }
    }
    ctx->pc = 0x2A7B4Cu;
label_2a7b4c:
    // 0x2a7b4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7b50:
    // 0x2a7b50: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a7b50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a7b54:
    // 0x2a7b54: 0x1c600034  bgtz        $v1, . + 4 + (0x34 << 2)
label_2a7b58:
    if (ctx->pc == 0x2A7B58u) {
        ctx->pc = 0x2A7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B54u;
        // 0x2a7b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B5Cu;
        goto label_2a7b5c;
    }
    ctx->pc = 0x2A7B54u;
    {
        const bool branch_taken_0x2a7b54 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A7B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B54u;
        // 0x2a7b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7b54) {
            ctx->pc = 0x2A7C28u;
            goto label_2a7c28;
        }
    }
    ctx->pc = 0x2A7B5Cu;
label_2a7b5c:
    // 0x2a7b5c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a7b60:
    // 0x2a7b60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7b64:
    // 0x2a7b64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7b68:
    // 0x2a7b68: 0x40f809  jalr        $v0
label_2a7b6c:
    if (ctx->pc == 0x2A7B6Cu) {
        ctx->pc = 0x2A7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B68u;
        // 0x2a7b6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B70u;
        goto label_2a7b70;
    }
    ctx->pc = 0x2A7B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7B70u);
        ctx->pc = 0x2A7B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B68u;
        // 0x2a7b6c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B68u, 0x2A7B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7B70u;
label_2a7b70:
    // 0x2a7b70: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a7b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a7b74:
    // 0x2a7b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b78:
    // 0x2a7b78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a7b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a7b7c:
    // 0x2a7b7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7b80:
    // 0x2a7b80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7b84:
    // 0x2a7b84: 0x40f809  jalr        $v0
label_2a7b88:
    if (ctx->pc == 0x2A7B88u) {
        ctx->pc = 0x2A7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B84u;
        // 0x2a7b88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7B8Cu;
        goto label_2a7b8c;
    }
    ctx->pc = 0x2A7B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7B8Cu);
        ctx->pc = 0x2A7B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7B84u;
        // 0x2a7b88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7B84u, 0x2A7B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7B8Cu;
label_2a7b8c:
    // 0x2a7b8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2a7b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a7b90:
    // 0x2a7b90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a7b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b94:
    // 0x2a7b94: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2a7b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2a7b98:
    // 0x2a7b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7b9c:
    // 0x2a7b9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a7ba0:
    // 0x2a7ba0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2a7ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2a7ba4:
    // 0x2a7ba4: 0xc0b6ce4  jal         func_2DB390
label_2a7ba8:
    if (ctx->pc == 0x2A7BA8u) {
        ctx->pc = 0x2A7BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BA4u;
        // 0x2a7ba8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7BACu;
        goto label_2a7bac;
    }
    ctx->pc = 0x2A7BA4u;
    SET_GPR_U32(ctx, 31, 0x2A7BACu);
    ctx->pc = 0x2A7BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7BA4u;
    // 0x2a7ba8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB390u, 0x2A7BA4u, 0x2A7BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BACu;
label_2a7bac:
    // 0x2a7bac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a7bb0:
    // 0x2a7bb0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2a7bb4:
    if (ctx->pc == 0x2A7BB4u) {
        ctx->pc = 0x2A7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BB0u;
        // 0x2a7bb4: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7BB8u;
        goto label_2a7bb8;
    }
    ctx->pc = 0x2A7BB0u;
    {
        const bool branch_taken_0x2a7bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BB0u;
        // 0x2a7bb4: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bb0) {
            ctx->pc = 0x2A7C24u;
            goto label_2a7c24;
        }
    }
    ctx->pc = 0x2A7BB8u;
label_2a7bb8:
    // 0x2a7bb8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a7bbc:
    // 0x2a7bbc: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a7bbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a7bc0:
    // 0x2a7bc0: 0x1c600019  bgtz        $v1, . + 4 + (0x19 << 2)
label_2a7bc4:
    if (ctx->pc == 0x2A7BC4u) {
        ctx->pc = 0x2A7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BC0u;
        // 0x2a7bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7BC8u;
        goto label_2a7bc8;
    }
    ctx->pc = 0x2A7BC0u;
    {
        const bool branch_taken_0x2a7bc0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A7BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BC0u;
        // 0x2a7bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bc0) {
            ctx->pc = 0x2A7C28u;
            goto label_2a7c28;
        }
    }
    ctx->pc = 0x2A7BC8u;
label_2a7bc8:
    // 0x2a7bc8: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x2a7bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a7bcc:
    // 0x2a7bcc: 0xa620002a  sh          $zero, 0x2A($s1)
    ctx->pc = 0x2a7bccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 0));
label_2a7bd0:
    // 0x2a7bd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a7bd4:
    // 0x2a7bd4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7bd8:
    // 0x2a7bd8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7bdc:
    // 0x2a7bdc: 0x40f809  jalr        $v0
label_2a7be0:
    if (ctx->pc == 0x2A7BE0u) {
        ctx->pc = 0x2A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BDCu;
        // 0x2a7be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7BE4u;
        goto label_2a7be4;
    }
    ctx->pc = 0x2A7BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7BE4u);
        ctx->pc = 0x2A7BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BDCu;
        // 0x2a7be0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7BDCu, 0x2A7BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7BE4u;
label_2a7be4:
    // 0x2a7be4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a7be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a7be8:
    // 0x2a7be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a7be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a7bec:
    // 0x2a7bec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a7becu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a7bf0:
    // 0x2a7bf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a7bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a7bf4:
    // 0x2a7bf4: 0x40f809  jalr        $v0
label_2a7bf8:
    if (ctx->pc == 0x2A7BF8u) {
        ctx->pc = 0x2A7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BF4u;
        // 0x2a7bf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7BFCu;
        goto label_2a7bfc;
    }
    ctx->pc = 0x2A7BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A7BFCu);
        ctx->pc = 0x2A7BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BF4u;
        // 0x2a7bf8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7BF4u, 0x2A7BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A7BFCu;
label_2a7bfc:
    // 0x2a7bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a7bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c00:
    // 0x2a7c00: 0xc0a9d6e  jal         func_2A75B8
label_2a7c04:
    if (ctx->pc == 0x2A7C04u) {
        ctx->pc = 0x2A7C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C00u;
        // 0x2a7c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7C08u;
        goto label_2a7c08;
    }
    ctx->pc = 0x2A7C00u;
    SET_GPR_U32(ctx, 31, 0x2A7C08u);
    ctx->pc = 0x2A7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C00u;
    // 0x2a7c04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A75B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A75B8u, 0x2A7C00u, 0x2A7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C08u;
label_2a7c08:
    // 0x2a7c08: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x2a7c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_2a7c0c:
    // 0x2a7c0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a7c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2a7c10:
    // 0x2a7c10: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2a7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2a7c14:
    // 0x2a7c14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a7c18:
    // 0x2a7c18: 0xc0e40a2  jal         func_390288
label_2a7c1c:
    if (ctx->pc == 0x2A7C1Cu) {
        ctx->pc = 0x2A7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C18u;
        // 0x2a7c1c: 0xa623002c  sh          $v1, 0x2C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7C20u;
        goto label_2a7c20;
    }
    ctx->pc = 0x2A7C18u;
    SET_GPR_U32(ctx, 31, 0x2A7C20u);
    ctx->pc = 0x2A7C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7C18u;
    // 0x2a7c1c: 0xa623002c  sh          $v1, 0x2C($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A7C18u, 0x2A7C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7C20u;
label_2a7c20:
    // 0x2a7c20: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2a7c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_2a7c24:
    // 0x2a7c24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a7c28:
    // 0x2a7c28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a7c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a7c2c:
    // 0x2a7c2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a7c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a7c30:
    // 0x2a7c30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a7c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a7c34:
    // 0x2a7c34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a7c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a7c38:
    // 0x2a7c38: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a7c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a7c3c:
    // 0x2a7c3c: 0x3e00008  jr          $ra
label_2a7c40:
    if (ctx->pc == 0x2A7C40u) {
        ctx->pc = 0x2A7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C3Cu;
        // 0x2a7c40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A7C44u;
        goto label_2a7c44;
    }
    ctx->pc = 0x2A7C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7C3Cu;
        // 0x2a7c40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7C44u;
label_2a7c44:
    // 0x2a7c44: 0x0  nop
    ctx->pc = 0x2a7c44u;
    // NOP
    ctx->pc = 0x2a7c48u;
}
