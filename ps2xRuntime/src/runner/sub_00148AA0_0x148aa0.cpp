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

// Function: sub_00148AA0
// Address: 0x148aa0 - 0x148ba8
void sub_00148AA0_0x148aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148AA0_0x148aa0");
#endif

    switch (ctx->pc) {
        case 0x148b28u: goto label_148b28;
        case 0x148b54u: goto label_148b54;
        case 0x148b70u: goto label_148b70;
        default: break;
    }

    ctx->pc = 0x148aa0u;

    // 0x148aa0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x148aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x148aa4: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x148aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x148aa8: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x148aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x148aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ab0: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x148ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x148ab4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x148ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ab8: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x148ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x148abc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x148abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ac0: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x148ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x148ac4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x148ac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148ac8: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x148ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x148acc: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x148accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x148ad0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x148ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x148ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148AD4u;
    {
        const bool branch_taken_0x148ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AD4u;
        // 0x148ad8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ad4) {
            ctx->pc = 0x148AE4u;
            goto label_148ae4;
        }
    }
    ctx->pc = 0x148ADCu;
    // 0x148adc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x148ADCu;
    {
        const bool branch_taken_0x148adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148ADCu;
        // 0x148ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148adc) {
            ctx->pc = 0x148B80u;
            goto label_148b80;
        }
    }
    ctx->pc = 0x148AE4u;
label_148ae4:
    // 0x148ae4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x148ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x148ae8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x148ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148aec: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x148aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x148af0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x148af0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x148af4: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x148AF4u;
    {
        const bool branch_taken_0x148af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x148AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148AF4u;
        // 0x148af8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148af4) {
            ctx->pc = 0x148B2Cu;
            goto label_148b2c;
        }
    }
    ctx->pc = 0x148AFCu;
    // 0x148afc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x148afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x148b00: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x148b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x148b04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x148b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x148b08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x148b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x148b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x148b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x148b10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x148b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x148b14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x148b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x148B18u;
    {
        const bool branch_taken_0x148b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B18u;
        // 0x148b1c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148b18) {
            ctx->pc = 0x148B28u;
            goto label_148b28;
        }
    }
    ctx->pc = 0x148B20u;
    // 0x148b20: 0xc052294  jal         func_148A50
    ctx->pc = 0x148B20u;
    SET_GPR_U32(ctx, 31, 0x148B28u);
    ctx->pc = 0x148A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148A50u, 0x148B20u, 0x148B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B28u;
label_148b28:
    // 0x148b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x148b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_148b2c:
    // 0x148b2c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x148b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x148b30: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x148b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x148b34: 0x2446a210  addiu       $a2, $v0, -0x5DF0
    ctx->pc = 0x148b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943248));
    // 0x148b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b3c: 0xdc43a210  ld          $v1, -0x5DF0($v0)
    ctx->pc = 0x148b3cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x54A210u));
    // 0x148b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x148b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b44: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x148b44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x54A218u));
    // 0x148b48: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x148b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x148b4c: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x148B4Cu;
    SET_GPR_U32(ctx, 31, 0x148B54u);
    ctx->pc = 0x148B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B4Cu;
    // 0x148b50: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x148B4Cu, 0x148B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B54u;
label_148b54:
    // 0x148b54: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x148b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x148b58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b5c: 0x2484e240  addiu       $a0, $a0, -0x1DC0
    ctx->pc = 0x148b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959680));
    // 0x148b60: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x148b60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b64: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x148b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b68: 0xc052504  jal         func_149410
    ctx->pc = 0x148B68u;
    SET_GPR_U32(ctx, 31, 0x148B70u);
    ctx->pc = 0x148B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148B68u;
    // 0x148b6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149410u, 0x148B68u, 0x148B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148B70u;
label_148b70:
    // 0x148b70: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x148b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x148b74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x148b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x148b78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x148b78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148b7c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x148b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_148b80:
    // 0x148b80: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x148b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x148b84: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x148b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x148b88: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x148b88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x148b8c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x148b8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x148b90: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x148b90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x148b94: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x148b94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148b98: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x148b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x148b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x148B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148B9Cu;
        // 0x148ba0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148BA4u;
    // 0x148ba4: 0x0  nop
    ctx->pc = 0x148ba4u;
    // NOP
    ctx->pc = 0x148ba8u;
}
