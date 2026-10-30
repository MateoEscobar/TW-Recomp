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

// Function: sub_00114B20
// Address: 0x114b20 - 0x114c98
void sub_00114B20_0x114b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114B20_0x114b20");
#endif

    switch (ctx->pc) {
        case 0x114ba0u: goto label_114ba0;
        case 0x114bfcu: goto label_114bfc;
        case 0x114c0cu: goto label_114c0c;
        case 0x114c60u: goto label_114c60;
        default: break;
    }

    ctx->pc = 0x114b20u;

    // 0x114b20: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x114b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x114b24: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x114b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x114b28: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x114b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x114b2c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x114b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x114b30: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x114b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b34: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x114b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x114b38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x114b38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b3c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x114b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x114b40: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x114b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x114b44: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x114b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x114b48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x114b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x114b4c: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x114b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x114b50: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x114b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x114b54: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x114B54u;
    {
        const bool branch_taken_0x114b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B54u;
        // 0x114b58: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b54) {
            ctx->pc = 0x114C6Cu;
            goto label_114c6c;
        }
    }
    ctx->pc = 0x114B5Cu;
    // 0x114b5c: 0x2e4200cf  sltiu       $v0, $s2, 0xCF
    ctx->pc = 0x114b5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)207) ? 1 : 0);
    // 0x114b60: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x114B60u;
    {
        const bool branch_taken_0x114b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B60u;
        // 0x114b64: 0x2402026d  addiu       $v0, $zero, 0x26D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b60) {
            ctx->pc = 0x114C6Cu;
            goto label_114c6c;
        }
    }
    ctx->pc = 0x114B68u;
    // 0x114b68: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x114b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x114b6c: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x114b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x114b70: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x114b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x114b74: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x114b74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114b78: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x114b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x114b7c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x114b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x114b80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x114b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x114b84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114b88: 0x90500002  lbu         $s0, 0x2($v0)
    ctx->pc = 0x114b88u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x114b8c: 0x12040007  beq         $s0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114B8Cu;
    {
        const bool branch_taken_0x114b8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x114B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114B8Cu;
        // 0x114b90: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114b8c) {
            ctx->pc = 0x114BACu;
            goto label_114bac;
        }
    }
    ctx->pc = 0x114B94u;
    // 0x114b94: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x114b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x114b98: 0xc0cd526  jal         func_335498
    ctx->pc = 0x114B98u;
    SET_GPR_U32(ctx, 31, 0x114BA0u);
    ctx->pc = 0x114B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114B98u;
    // 0x114b9c: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x114B98u, 0x114BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BA0u;
label_114ba0:
    // 0x114ba0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x114ba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x114ba4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x114BA4u;
    {
        const bool branch_taken_0x114ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BA4u;
        // 0x114ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ba4) {
            ctx->pc = 0x114C70u;
            goto label_114c70;
        }
    }
    ctx->pc = 0x114BACu;
label_114bac:
    // 0x114bac: 0x2402026d  addiu       $v0, $zero, 0x26D
    ctx->pc = 0x114bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x114bb0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x114bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x114bb4: 0x2828818  mult        $s1, $s4, $v0
    ctx->pc = 0x114bb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x114bb8: 0x2b28021  addu        $s0, $s5, $s2
    ctx->pc = 0x114bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x114bbc: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x114bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x114bc0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x114bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x114bc4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x114bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x114bc8: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x114BC8u;
    {
        const bool branch_taken_0x114bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x114BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114BC8u;
        // 0x114bcc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114bc8) {
            ctx->pc = 0x114C6Cu;
            goto label_114c6c;
        }
    }
    ctx->pc = 0x114BD0u;
    // 0x114bd0: 0x90560000  lbu         $s6, 0x0($v0)
    ctx->pc = 0x114bd0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114bd4: 0x2463aaa8  addiu       $v1, $v1, -0x5558
    ctx->pc = 0x114bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945448));
    // 0x114bd8: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x114bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x114bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114be0: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x114be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x114be4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x114be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x114be8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x114be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114bec: 0x26c80001  addiu       $t0, $s6, 0x1
    ctx->pc = 0x114becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x114bf0: 0x24a57de8  addiu       $a1, $a1, 0x7DE8
    ctx->pc = 0x114bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32232));
    // 0x114bf4: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x114BF4u;
    SET_GPR_U32(ctx, 31, 0x114BFCu);
    ctx->pc = 0x114BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114BF4u;
    // 0x114bf8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x114BF4u, 0x114BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114BFCu;
label_114bfc:
    // 0x114bfc: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x114bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x114c00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x114c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c04: 0xc050fda  jal         func_143F68
    ctx->pc = 0x114C04u;
    SET_GPR_U32(ctx, 31, 0x114C0Cu);
    ctx->pc = 0x114C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C04u;
    // 0x114c08: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x114C04u, 0x114C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C0Cu;
label_114c0c:
    // 0x114c0c: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x114c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x114c10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x114c10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c14: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x114c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x114c18: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x114c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x114c1c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x114c1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x114c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x114c24: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x114c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x114c28: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x114c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x114c2c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x114c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x114c30: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x114c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x114c34: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x114c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c38: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x114c38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114c3c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x114c3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x114c40: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x114c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x114c44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x114C44u;
    {
        const bool branch_taken_0x114c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114c44) {
            ctx->pc = 0x114C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114C44u;
            // 0x114c48: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114C4Cu;
            goto label_114c4c;
        }
    }
    ctx->pc = 0x114C4Cu;
label_114c4c:
    // 0x114c4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x114c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x114c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x114c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114c58: 0xc045326  jal         func_114C98
    ctx->pc = 0x114C58u;
    SET_GPR_U32(ctx, 31, 0x114C60u);
    ctx->pc = 0x114C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114C58u;
    // 0x114c5c: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114C98u, 0x114C58u, 0x114C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114C60u;
label_114c60:
    // 0x114c60: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x114c60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x114c64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114C64u;
    {
        const bool branch_taken_0x114c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C64u;
        // 0x114c68: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114c64) {
            ctx->pc = 0x114C70u;
            goto label_114c70;
        }
    }
    ctx->pc = 0x114C6Cu;
label_114c6c:
    // 0x114c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x114c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114c70:
    // 0x114c70: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x114c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x114c74: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x114c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x114c78: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x114c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x114c7c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x114c7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x114c80: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x114c80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x114c84: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x114c84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x114c88: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x114c88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x114c8c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x114c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x114c90: 0x3e00008  jr          $ra
    ctx->pc = 0x114C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114C90u;
        // 0x114c94: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114C98u;
}
