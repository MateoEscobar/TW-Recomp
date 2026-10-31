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

// Function: sub_00157C20
// Address: 0x157c20 - 0x157df8
void sub_00157C20_0x157c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157C20_0x157c20");
#endif

    switch (ctx->pc) {
        case 0x157c54u: goto label_157c54;
        case 0x157c6cu: goto label_157c6c;
        case 0x157ca0u: goto label_157ca0;
        case 0x157ce0u: goto label_157ce0;
        case 0x157cecu: goto label_157cec;
        case 0x157cf8u: goto label_157cf8;
        case 0x157d1cu: goto label_157d1c;
        case 0x157d70u: goto label_157d70;
        case 0x157d90u: goto label_157d90;
        case 0x157da8u: goto label_157da8;
        case 0x157dc4u: goto label_157dc4;
        case 0x157dccu: goto label_157dcc;
        case 0x157dd4u: goto label_157dd4;
        default: break;
    }

    ctx->pc = 0x157c20u;

    // 0x157c20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x157c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x157c24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x157c28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x157c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x157c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x157c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x157c34: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x157c34u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x157c38: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x157c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x157c3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x157c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157c40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x157c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x157c44: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x157c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x157c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157c4c: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x157C4Cu;
    SET_GPR_U32(ctx, 31, 0x157C54u);
    ctx->pc = 0x157C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C4Cu;
    // 0x157c50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x157C4Cu, 0x157C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C54u;
label_157c54:
    // 0x157c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c58: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x157c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x157c5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C5Cu;
    {
        const bool branch_taken_0x157c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c5c) {
            ctx->pc = 0x157C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157C5Cu;
            // 0x157c60: 0x8e030020  lw          $v1, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157C74u;
            goto label_157c74;
        }
    }
    ctx->pc = 0x157C64u;
    // 0x157c64: 0xc065cac  jal         func_1972B0
    ctx->pc = 0x157C64u;
    SET_GPR_U32(ctx, 31, 0x157C6Cu);
    ctx->pc = 0x157C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C64u;
    // 0x157c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1972B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1972B0u, 0x157C64u, 0x157C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C6Cu;
label_157c6c:
    // 0x157c6c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x157C6Cu;
    {
        const bool branch_taken_0x157c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C6Cu;
        // 0x157c70: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c6c) {
            ctx->pc = 0x157DD8u;
            goto label_157dd8;
        }
    }
    ctx->pc = 0x157C74u;
label_157c74:
    // 0x157c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157c78: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x157C78u;
    {
        const bool branch_taken_0x157c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C78u;
        // 0x157c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c78) {
            ctx->pc = 0x157D34u;
            goto label_157d34;
        }
    }
    ctx->pc = 0x157C80u;
    // 0x157c80: 0x96020100  lhu         $v0, 0x100($s0)
    ctx->pc = 0x157c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x157c84: 0x26140030  addiu       $s4, $s0, 0x30
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x157c88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c8c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x157c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x157c90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x157C90u;
    {
        const bool branch_taken_0x157c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C90u;
        // 0x157c94: 0x3c150051  lui         $s5, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c90) {
            ctx->pc = 0x157CC0u;
            goto label_157cc0;
        }
    }
    ctx->pc = 0x157C98u;
    // 0x157c98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x157c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c9c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x157c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_157ca0:
    // 0x157ca0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x157ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157ca4: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x157ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x157ca8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157CA8u;
    {
        const bool branch_taken_0x157ca8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CA8u;
        // 0x157cac: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ca8) {
            ctx->pc = 0x157CC0u;
            goto label_157cc0;
        }
    }
    ctx->pc = 0x157CB0u;
    // 0x157cb0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x157cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x157cb4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x157cb4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157cb8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x157CB8u;
    {
        const bool branch_taken_0x157cb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CB8u;
        // 0x157cbc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cb8) {
            ctx->pc = 0x157CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157ca0;
        }
    }
    ctx->pc = 0x157CC0u;
label_157cc0:
    // 0x157cc0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x157cc4: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x157cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x157cc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x157cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x157ccc: 0x2631eb28  addiu       $s1, $s1, -0x14D8
    ctx->pc = 0x157cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961960));
    // 0x157cd0: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x157cd0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157cd4: 0x24040175  addiu       $a0, $zero, 0x175
    ctx->pc = 0x157cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
    // 0x157cd8: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157CD8u;
    SET_GPR_U32(ctx, 31, 0x157CE0u);
    ctx->pc = 0x157CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CD8u;
    // 0x157cdc: 0x10813a  dsrl        $s0, $s0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157CD8u, 0x157CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE0u;
label_157ce0:
    // 0x157ce0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x157ce0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ce4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157CE4u;
    SET_GPR_U32(ctx, 31, 0x157CECu);
    ctx->pc = 0x157CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CE4u;
    // 0x157ce8: 0x24040176  addiu       $a0, $zero, 0x176 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 374));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157CE4u, 0x157CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CECu;
label_157cec:
    // 0x157cec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x157cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cf0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157CF0u;
    SET_GPR_U32(ctx, 31, 0x157CF8u);
    ctx->pc = 0x157CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CF0u;
    // 0x157cf4: 0x24040177  addiu       $a0, $zero, 0x177 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 375));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157CF0u, 0x157CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CF8u;
label_157cf8:
    // 0x157cf8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x157cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157cfc: 0x8ea4c6cc  lw          $a0, -0x3934($s5)
    ctx->pc = 0x157cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952652)));
    // 0x157d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x157d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d04: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x157d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x157d08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x157d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d0c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d10: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d14: 0xc10ca04  jal         func_432810
    ctx->pc = 0x157D14u;
    SET_GPR_U32(ctx, 31, 0x157D1Cu);
    ctx->pc = 0x157D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D14u;
    // 0x157d18: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x157D14u, 0x157D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D1Cu;
label_157d1c:
    // 0x157d1c: 0x8ea5c6cc  lw          $a1, -0x3934($s5)
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294952652)));
    // 0x157d20: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x157d24: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x157d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x157d28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x157d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x157d2c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x157D2Cu;
    {
        const bool branch_taken_0x157d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D2Cu;
        // 0x157d30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d2c) {
            ctx->pc = 0x157D88u;
            goto label_157d88;
        }
    }
    ctx->pc = 0x157D34u;
label_157d34:
    // 0x157d34: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D34u;
    {
        const bool branch_taken_0x157d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D34u;
        // 0x157d38: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d34) {
            ctx->pc = 0x157D44u;
            goto label_157d44;
        }
    }
    ctx->pc = 0x157D3Cu;
    // 0x157d3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x157D3Cu;
    {
        const bool branch_taken_0x157d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D3Cu;
        // 0x157d40: 0x24040178  addiu       $a0, $zero, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d3c) {
            ctx->pc = 0x157D68u;
            goto label_157d68;
        }
    }
    ctx->pc = 0x157D44u;
label_157d44:
    // 0x157d44: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D44u;
    {
        const bool branch_taken_0x157d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D44u;
        // 0x157d48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d44) {
            ctx->pc = 0x157D54u;
            goto label_157d54;
        }
    }
    ctx->pc = 0x157D4Cu;
    // 0x157d4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x157D4Cu;
    {
        const bool branch_taken_0x157d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D4Cu;
        // 0x157d50: 0x2404017d  addiu       $a0, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d4c) {
            ctx->pc = 0x157D68u;
            goto label_157d68;
        }
    }
    ctx->pc = 0x157D54u;
label_157d54:
    // 0x157d54: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D54u;
    {
        const bool branch_taken_0x157d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x157D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D54u;
        // 0x157d58: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d54) {
            ctx->pc = 0x157D64u;
            goto label_157d64;
        }
    }
    ctx->pc = 0x157D5Cu;
    // 0x157d5c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157D5Cu;
    {
        const bool branch_taken_0x157d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D5Cu;
        // 0x157d60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d5c) {
            ctx->pc = 0x157D98u;
            goto label_157d98;
        }
    }
    ctx->pc = 0x157D64u;
label_157d64:
    // 0x157d64: 0x2404017f  addiu       $a0, $zero, 0x17F
    ctx->pc = 0x157d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
label_157d68:
    // 0x157d68: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157D68u;
    SET_GPR_U32(ctx, 31, 0x157D70u);
    ctx->pc = 0x157D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D68u;
    // 0x157d6c: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157D68u, 0x157D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D70u;
label_157d70:
    // 0x157d70: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x157d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d74: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x157d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x157d78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x157d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x157d7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x157d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x157d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_157d88:
    // 0x157d88: 0xc070630  jal         func_1C18C0
    ctx->pc = 0x157D88u;
    SET_GPR_U32(ctx, 31, 0x157D90u);
    ctx->pc = 0x157D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D88u;
    // 0x157d8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C18C0u, 0x157D88u, 0x157D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D90u;
label_157d90:
    // 0x157d90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157D90u;
    {
        const bool branch_taken_0x157d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d90) {
            ctx->pc = 0x157DC4u;
            goto label_157dc4;
        }
    }
    ctx->pc = 0x157D98u;
label_157d98:
    // 0x157d98: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157D98u;
    {
        const bool branch_taken_0x157d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D98u;
        // 0x157d9c: 0x26140030  addiu       $s4, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d98) {
            ctx->pc = 0x157DC4u;
            goto label_157dc4;
        }
    }
    ctx->pc = 0x157DA0u;
    // 0x157da0: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x157DA0u;
    SET_GPR_U32(ctx, 31, 0x157DA8u);
    ctx->pc = 0x157DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DA0u;
    // 0x157da4: 0x2404017e  addiu       $a0, $zero, 0x17E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x157DA0u, 0x157DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DA8u;
label_157da8:
    // 0x157da8: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x157dac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x157dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x157db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x157db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x157db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x157db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157db8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x157db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157dbc: 0xc070630  jal         func_1C18C0
    ctx->pc = 0x157DBCu;
    SET_GPR_U32(ctx, 31, 0x157DC4u);
    ctx->pc = 0x157DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DBCu;
    // 0x157dc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C18C0u, 0x157DBCu, 0x157DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DC4u;
label_157dc4:
    // 0x157dc4: 0xc0706c4  jal         func_1C1B10
    ctx->pc = 0x157DC4u;
    SET_GPR_U32(ctx, 31, 0x157DCCu);
    ctx->pc = 0x157DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DC4u;
    // 0x157dc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x157DC4u, 0x157DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DCCu;
label_157dcc:
    // 0x157dcc: 0xc0706d6  jal         func_1C1B58
    ctx->pc = 0x157DCCu;
    SET_GPR_U32(ctx, 31, 0x157DD4u);
    ctx->pc = 0x157DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DCCu;
    // 0x157dd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B58u, 0x157DCCu, 0x157DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DD4u;
label_157dd4:
    // 0x157dd4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x157dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_157dd8:
    // 0x157dd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x157dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157ddc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x157ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157de0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x157de0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157de4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x157de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157de8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x157de8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157df0: 0x3e00008  jr          $ra
    ctx->pc = 0x157DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157DF0u;
        // 0x157df4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157DF8u;
}
