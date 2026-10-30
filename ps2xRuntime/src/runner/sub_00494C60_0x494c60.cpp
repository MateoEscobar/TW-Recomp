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

// Function: sub_00494C60
// Address: 0x494c60 - 0x494e70
void sub_00494C60_0x494c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494C60_0x494c60");
#endif

    switch (ctx->pc) {
        case 0x494cecu: goto label_494cec;
        case 0x494d54u: goto label_494d54;
        case 0x494da4u: goto label_494da4;
        case 0x494de0u: goto label_494de0;
        case 0x494e44u: goto label_494e44;
        default: break;
    }

    ctx->pc = 0x494c60u;

    // 0x494c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x494c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x494c64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x494c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x494c68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x494c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x494c6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x494c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x494c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x494c74: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x494c74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x494c78: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x494c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
    // 0x494c7c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x494C7Cu;
    {
        const bool branch_taken_0x494c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494c7c) {
            ctx->pc = 0x494C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494C7Cu;
            // 0x494c80: 0x92020020  lbu         $v0, 0x20($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494C8Cu;
            goto label_494c8c;
        }
    }
    ctx->pc = 0x494C84u;
    // 0x494c84: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x494C84u;
    {
        const bool branch_taken_0x494c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C84u;
        // 0x494c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494c84) {
            ctx->pc = 0x494E58u;
            goto label_494e58;
        }
    }
    ctx->pc = 0x494C8Cu;
label_494c8c:
    // 0x494c8c: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x494c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x494c90: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x494C90u;
    {
        const bool branch_taken_0x494c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x494C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494C90u;
        // 0x494c94: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494c90) {
            ctx->pc = 0x494CF4u;
            goto label_494cf4;
        }
    }
    ctx->pc = 0x494C98u;
    // 0x494c98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x494C98u;
    {
        const bool branch_taken_0x494c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494c98) {
            ctx->pc = 0x494C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494C98u;
            // 0x494c9c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494CB0u;
            goto label_494cb0;
        }
    }
    ctx->pc = 0x494CA0u;
    // 0x494ca0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x494ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x494ca4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x494CA4u;
    {
        const bool branch_taken_0x494ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x494CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494CA4u;
        // 0x494ca8: 0x8f828a20  lw          $v0, -0x75E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494ca4) {
            ctx->pc = 0x494CF8u;
            goto label_494cf8;
        }
    }
    ctx->pc = 0x494CACu;
    // 0x494cac: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x494cacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_494cb0:
    // 0x494cb0: 0x10e0005a  beqz        $a3, . + 4 + (0x5A << 2)
    ctx->pc = 0x494CB0u;
    {
        const bool branch_taken_0x494cb0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x494CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494CB0u;
        // 0x494cb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494cb0) {
            ctx->pc = 0x494E1Cu;
            goto label_494e1c;
        }
    }
    ctx->pc = 0x494CB8u;
    // 0x494cb8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x494cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x494cbc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x494cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x494cc0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x494cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494cc4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x494cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x494cc8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x494cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x494ccc: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x494cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x494cd0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x494cd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x494cd4: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x494cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x494cd8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x494cd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x494cdc: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x494cdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x494ce0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x494ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x494ce4: 0xc10f644  jal         func_43D910
    ctx->pc = 0x494CE4u;
    SET_GPR_U32(ctx, 31, 0x494CECu);
    ctx->pc = 0x494CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494CE4u;
    // 0x494ce8: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x494CE4u, 0x494CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494CECu;
label_494cec:
    // 0x494cec: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x494CECu;
    {
        const bool branch_taken_0x494cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494CECu;
        // 0x494cf0: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494cec) {
            ctx->pc = 0x494E20u;
            goto label_494e20;
        }
    }
    ctx->pc = 0x494CF4u;
label_494cf4:
    // 0x494cf4: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x494cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_494cf8:
    // 0x494cf8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x494cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x494cfc: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x494CFCu;
    {
        const bool branch_taken_0x494cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x494D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494CFCu;
        // 0x494d00: 0x2028821  addu        $s1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494cfc) {
            ctx->pc = 0x494DE0u;
            goto label_494de0;
        }
    }
    ctx->pc = 0x494D04u;
    // 0x494d04: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x494d04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x494d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x494d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494d0c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x494d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x494d10: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x494D10u;
    {
        const bool branch_taken_0x494d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D10u;
        // 0x494d14: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d10) {
            ctx->pc = 0x494D5Cu;
            goto label_494d5c;
        }
    }
    ctx->pc = 0x494D18u;
    // 0x494d18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x494d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x494d1c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x494d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x494d20: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x494d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x494d24: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x494D24u;
    {
        const bool branch_taken_0x494d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x494D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D24u;
        // 0x494d28: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d24) {
            ctx->pc = 0x494D60u;
            goto label_494d60;
        }
    }
    ctx->pc = 0x494D2Cu;
    // 0x494d2c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x494d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x494d30: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x494d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x494d34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x494D34u;
    {
        const bool branch_taken_0x494d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D34u;
        // 0x494d38: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d34) {
            ctx->pc = 0x494D60u;
            goto label_494d60;
        }
    }
    ctx->pc = 0x494D3Cu;
    // 0x494d3c: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x494d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x494d40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x494d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x494d44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x494D44u;
    {
        const bool branch_taken_0x494d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x494D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D44u;
        // 0x494d48: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d44) {
            ctx->pc = 0x494D60u;
            goto label_494d60;
        }
    }
    ctx->pc = 0x494D4Cu;
    // 0x494d4c: 0xc124f98  jal         func_493E60
    ctx->pc = 0x494D4Cu;
    SET_GPR_U32(ctx, 31, 0x494D54u);
    ctx->pc = 0x494D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494D4Cu;
    // 0x494d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x493E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x493E60u, 0x494D4Cu, 0x494D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494D54u;
label_494d54:
    // 0x494d54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x494D54u;
    {
        const bool branch_taken_0x494d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D54u;
        // 0x494d58: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d54) {
            ctx->pc = 0x494DA8u;
            goto label_494da8;
        }
    }
    ctx->pc = 0x494D5Cu;
label_494d5c:
    // 0x494d5c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x494d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_494d60:
    // 0x494d60: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x494D60u;
    {
        const bool branch_taken_0x494d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x494D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494D60u;
        // 0x494d64: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494d60) {
            ctx->pc = 0x494DA4u;
            goto label_494da4;
        }
    }
    ctx->pc = 0x494D68u;
    // 0x494d68: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x494d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x494d6c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x494d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x494d70: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x494d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x494d74: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x494D74u;
    {
        const bool branch_taken_0x494d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x494d74) {
            ctx->pc = 0x494D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494D74u;
            // 0x494d78: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494DA8u;
            goto label_494da8;
        }
    }
    ctx->pc = 0x494D7Cu;
    // 0x494d7c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x494d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x494d80: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x494d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x494d84: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x494D84u;
    {
        const bool branch_taken_0x494d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494d84) {
            ctx->pc = 0x494D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494D84u;
            // 0x494d88: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494DA8u;
            goto label_494da8;
        }
    }
    ctx->pc = 0x494D8Cu;
    // 0x494d8c: 0x92020022  lbu         $v0, 0x22($s0)
    ctx->pc = 0x494d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x494d90: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x494d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x494d94: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x494D94u;
    {
        const bool branch_taken_0x494d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x494d94) {
            ctx->pc = 0x494D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494D94u;
            // 0x494d98: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494DA8u;
            goto label_494da8;
        }
    }
    ctx->pc = 0x494D9Cu;
    // 0x494d9c: 0xc125032  jal         func_4940C8
    ctx->pc = 0x494D9Cu;
    SET_GPR_U32(ctx, 31, 0x494DA4u);
    ctx->pc = 0x494DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494D9Cu;
    // 0x494da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4940C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4940C8u, 0x494D9Cu, 0x494DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494DA4u;
label_494da4:
    // 0x494da4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x494da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_494da8:
    // 0x494da8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x494da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x494dac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x494dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x494db0: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x494db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x494db4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x494db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494db8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x494db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x494dbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x494dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494dc0: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x494dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x494dc4: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x494dc4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x494dc8: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x494dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x494dcc: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x494dccu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x494dd0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x494dd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x494dd4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x494dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x494dd8: 0xc10f644  jal         func_43D910
    ctx->pc = 0x494DD8u;
    SET_GPR_U32(ctx, 31, 0x494DE0u);
    ctx->pc = 0x494DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494DD8u;
    // 0x494ddc: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x494DD8u, 0x494DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494DE0u;
label_494de0:
    // 0x494de0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x494de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x494de4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x494de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x494de8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x494de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x494dec: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x494decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x494df0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x494df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x494df4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x494df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x494df8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x494df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x494dfc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x494dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x494e00: 0x92220036  lbu         $v0, 0x36($s1)
    ctx->pc = 0x494e00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x494e04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x494e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x494e08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x494E08u;
    {
        const bool branch_taken_0x494e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x494e08) {
            ctx->pc = 0x494E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x494E08u;
            // 0x494e0c: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x494E20u;
            goto label_494e20;
        }
    }
    ctx->pc = 0x494E10u;
    // 0x494e10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x494e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x494e14: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x494e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x494e18: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x494e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_494e1c:
    // 0x494e1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x494e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_494e20:
    // 0x494e20: 0x3c039004  lui         $v1, 0x9004
    ctx->pc = 0x494e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36868 << 16));
    // 0x494e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x494e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x494e28: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x494E28u;
    {
        const bool branch_taken_0x494e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x494E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494E28u;
        // 0x494e2c: 0x92020022  lbu         $v0, 0x22($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494e28) {
            ctx->pc = 0x494E4Cu;
            goto label_494e4c;
        }
    }
    ctx->pc = 0x494E30u;
    // 0x494e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x494e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494e34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x494e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494e38: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x494e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
    // 0x494e3c: 0xc122276  jal         func_4889D8
    ctx->pc = 0x494E3Cu;
    SET_GPR_U32(ctx, 31, 0x494E44u);
    ctx->pc = 0x494E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x494E3Cu;
    // 0x494e40: 0xa2020022  sb          $v0, 0x22($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4889D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4889D8u, 0x494E3Cu, 0x494E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x494E44u;
label_494e44:
    // 0x494e44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x494E44u;
    {
        const bool branch_taken_0x494e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x494E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494E44u;
        // 0x494e48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x494e44) {
            ctx->pc = 0x494E58u;
            goto label_494e58;
        }
    }
    ctx->pc = 0x494E4Cu;
label_494e4c:
    // 0x494e4c: 0x304200d9  andi        $v0, $v0, 0xD9
    ctx->pc = 0x494e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)217);
    // 0x494e50: 0xa2020022  sb          $v0, 0x22($s0)
    ctx->pc = 0x494e50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x494e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x494e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_494e58:
    // 0x494e58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x494e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x494e5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x494e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x494e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x494e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x494e64: 0x3e00008  jr          $ra
    ctx->pc = 0x494E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x494E64u;
        // 0x494e68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x494E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x494E6Cu;
    // 0x494e6c: 0x0  nop
    ctx->pc = 0x494e6cu;
    // NOP
    ctx->pc = 0x494e70u;
}
