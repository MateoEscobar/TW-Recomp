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

// Function: sub_0044CED0
// Address: 0x44ced0 - 0x44cfe8
void sub_0044CED0_0x44ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044CED0_0x44ced0");
#endif

    switch (ctx->pc) {
        case 0x44cf28u: goto label_44cf28;
        case 0x44cf74u: goto label_44cf74;
        case 0x44cf94u: goto label_44cf94;
        case 0x44cfb8u: goto label_44cfb8;
        default: break;
    }

    ctx->pc = 0x44ced0u;

    // 0x44ced0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x44ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x44ced4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x44ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x44ced8: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x44ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x44cedc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x44cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x44cee0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x44cee0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cee4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x44cee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cee8: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x44cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x44ceec: 0x72442018  mult1       $a0, $s2, $a0
    ctx->pc = 0x44ceecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x44cef0: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x44cef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44cef4: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x44cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x44cef8: 0x3c130071  lui         $s3, 0x71
    ctx->pc = 0x44cef8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)113 << 16));
    // 0x44cefc: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x44cefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x44cf00: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x44cf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x44cf04: 0x26628d90  addiu       $v0, $s3, -0x7270
    ctx->pc = 0x44cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938000));
    // 0x44cf08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x44cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x44cf0c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x44cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44cf10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x44cf10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf14: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x44cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x44cf18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44CF18u;
    {
        const bool branch_taken_0x44cf18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF18u;
        // 0x44cf1c: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf18) {
            ctx->pc = 0x44CF30u;
            goto label_44cf30;
        }
    }
    ctx->pc = 0x44CF20u;
    // 0x44cf20: 0xc10f510  jal         func_43D440
    ctx->pc = 0x44CF20u;
    SET_GPR_U32(ctx, 31, 0x44CF28u);
    ctx->pc = 0x43D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D440u, 0x44CF20u, 0x44CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CF28u;
label_44cf28:
    // 0x44cf28: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x44CF28u;
    {
        const bool branch_taken_0x44cf28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x44CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF28u;
        // 0x44cf2c: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf28) {
            ctx->pc = 0x44CFA4u;
            goto label_44cfa4;
        }
    }
    ctx->pc = 0x44CF30u;
label_44cf30:
    // 0x44cf30: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x44cf30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x44cf34: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x44cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x44cf38: 0x2073818  mult        $a3, $s0, $a3
    ctx->pc = 0x44cf38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x44cf3c: 0x72431818  mult1       $v1, $s2, $v1
    ctx->pc = 0x44cf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x44cf40: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x44cf40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x44cf44: 0x26738d90  addiu       $s3, $s3, -0x7270
    ctx->pc = 0x44cf44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938000));
    // 0x44cf48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf4c: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x44cf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x44cf50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x44cf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x44cf54: 0xe39021  addu        $s2, $a3, $v1
    ctx->pc = 0x44cf54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x44cf58: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x44cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x44cf5c: 0x2721821  addu        $v1, $s3, $s2
    ctx->pc = 0x44cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x44cf60: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x44cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x44cf64: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x44cf64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x44cf68: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x44cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x44cf6c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x44CF6Cu;
    SET_GPR_U32(ctx, 31, 0x44CF74u);
    ctx->pc = 0x44CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CF6Cu;
    // 0x44cf70: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x44CF6Cu, 0x44CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CF74u;
label_44cf74:
    // 0x44cf74: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x44cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44cf78: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x44cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x44cf7c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x44cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x44cf80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x44cf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf84: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x44cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x44cf88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44cf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44cf8c: 0xc10f518  jal         func_43D460
    ctx->pc = 0x44CF8Cu;
    SET_GPR_U32(ctx, 31, 0x44CF94u);
    ctx->pc = 0x44CF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CF8Cu;
    // 0x44cf90: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D460u, 0x44CF8Cu, 0x44CF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CF94u;
label_44cf94:
    // 0x44cf94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x44cf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44cf98: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x44CF98u;
    {
        const bool branch_taken_0x44cf98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CF98u;
        // 0x44cf9c: 0x2721821  addu        $v1, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cf98) {
            ctx->pc = 0x44CFC0u;
            goto label_44cfc0;
        }
    }
    ctx->pc = 0x44CFA0u;
    // 0x44cfa0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_44cfa4:
    // 0x44cfa4: 0x8c43a714  lw          $v1, -0x58EC($v0)
    ctx->pc = 0x44cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944532)));
    // 0x44cfa8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x44CFA8u;
    {
        const bool branch_taken_0x44cfa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFA8u;
        // 0x44cfac: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfa8) {
            ctx->pc = 0x44CFB8u;
            goto label_44cfb8;
        }
    }
    ctx->pc = 0x44CFB0u;
    // 0x44cfb0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x44CFB0u;
    SET_GPR_U32(ctx, 31, 0x44CFB8u);
    ctx->pc = 0x44CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44CFB0u;
    // 0x44cfb4: 0x2484e6a8  addiu       $a0, $a0, -0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x44CFB0u, 0x44CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44CFB8u;
label_44cfb8:
    // 0x44cfb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x44CFB8u;
    {
        const bool branch_taken_0x44cfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFB8u;
        // 0x44cfbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44cfb8) {
            ctx->pc = 0x44CFC8u;
            goto label_44cfc8;
        }
    }
    ctx->pc = 0x44CFC0u;
label_44cfc0:
    // 0x44cfc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44cfc4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x44cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_44cfc8:
    // 0x44cfc8: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x44cfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x44cfcc: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x44cfccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x44cfd0: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x44cfd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x44cfd4: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x44cfd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x44cfd8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x44cfd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x44cfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x44CFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44CFDCu;
        // 0x44cfe0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44CFDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44CFE4u;
    // 0x44cfe4: 0x0  nop
    ctx->pc = 0x44cfe4u;
    // NOP
    ctx->pc = 0x44cfe8u;
}
