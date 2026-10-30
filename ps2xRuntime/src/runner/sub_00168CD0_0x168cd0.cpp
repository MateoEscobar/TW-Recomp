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

// Function: sub_00168CD0
// Address: 0x168cd0 - 0x168e00
void sub_00168CD0_0x168cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168CD0_0x168cd0");
#endif

    switch (ctx->pc) {
        case 0x168cfcu: goto label_168cfc;
        default: break;
    }

    ctx->pc = 0x168cd0u;

    // 0x168cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168cd4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x168cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x168cd8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x168cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x168cdc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x168cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x168ce0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x168ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x168ce4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168ce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x168ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x168cec: 0x68c03  sra         $s1, $a2, 16
    ctx->pc = 0x168cecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 6), 16));
    // 0x168cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168cf4: 0xc05a2a8  jal         func_168AA0
    ctx->pc = 0x168CF4u;
    SET_GPR_U32(ctx, 31, 0x168CFCu);
    ctx->pc = 0x168CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168CF4u;
    // 0x168cf8: 0x79403  sra         $s2, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168AA0u, 0x168CF4u, 0x168CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168CFCu;
label_168cfc:
    // 0x168cfc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x168cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168d00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168d04: 0x10a20038  beq         $a1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x168D04u;
    {
        const bool branch_taken_0x168d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x168D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D04u;
        // 0x168d08: 0x2e22000c  sltiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d04) {
            ctx->pc = 0x168DE8u;
            goto label_168de8;
        }
    }
    ctx->pc = 0x168D0Cu;
    // 0x168d0c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x168D0Cu;
    {
        const bool branch_taken_0x168d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D0Cu;
        // 0x168d10: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d0c) {
            ctx->pc = 0x168DB4u;
            goto label_168db4;
        }
    }
    ctx->pc = 0x168D14u;
    // 0x168d14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x168d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x168d18: 0x24421180  addiu       $v0, $v0, 0x1180
    ctx->pc = 0x168d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
    // 0x168d1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x168d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x168d20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x168d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168d24: 0x800008  jr          $a0
    ctx->pc = 0x168D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168D2Cu: goto label_168d2c;
            case 0x168D40u: goto label_168d40;
            case 0x168D4Cu: goto label_168d4c;
            case 0x168D58u: goto label_168d58;
            case 0x168D64u: goto label_168d64;
            case 0x168D70u: goto label_168d70;
            case 0x168D7Cu: goto label_168d7c;
            case 0x168D88u: goto label_168d88;
            case 0x168D94u: goto label_168d94;
            case 0x168DA0u: goto label_168da0;
            case 0x168DB4u: goto label_168db4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168D24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x168D2Cu;
label_168d2c:
    // 0x168d2c: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d30: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x168d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168d34: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x168d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x168d38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x168D38u;
    {
        const bool branch_taken_0x168d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D38u;
        // 0x168d3c: 0xa4400692  sh          $zero, 0x692($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 1682), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d38) {
            ctx->pc = 0x168DB4u;
            goto label_168db4;
        }
    }
    ctx->pc = 0x168D40u;
label_168d40:
    // 0x168d40: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x168D44u;
    {
        const bool branch_taken_0x168d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D44u;
        // 0x168d48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d44) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D4Cu;
label_168d4c:
    // 0x168d4c: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d50: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x168D50u;
    {
        const bool branch_taken_0x168d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D50u;
        // 0x168d54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d50) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D58u;
label_168d58:
    // 0x168d58: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d5c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x168D5Cu;
    {
        const bool branch_taken_0x168d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D5Cu;
        // 0x168d60: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d5c) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D64u;
label_168d64:
    // 0x168d64: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168D68u;
    {
        const bool branch_taken_0x168d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D68u;
        // 0x168d6c: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d68) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D70u;
label_168d70:
    // 0x168d70: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d74: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x168D74u;
    {
        const bool branch_taken_0x168d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D74u;
        // 0x168d78: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d74) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D7Cu;
label_168d7c:
    // 0x168d7c: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x168D80u;
    {
        const bool branch_taken_0x168d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D80u;
        // 0x168d84: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d80) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D88u;
label_168d88:
    // 0x168d88: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x168D8Cu;
    {
        const bool branch_taken_0x168d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D8Cu;
        // 0x168d90: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d8c) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168D94u;
label_168d94:
    // 0x168d94: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168d98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168D98u;
    {
        const bool branch_taken_0x168d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168D98u;
        // 0x168d9c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168d98) {
            ctx->pc = 0x168DA8u;
            goto label_168da8;
        }
    }
    ctx->pc = 0x168DA0u;
label_168da0:
    // 0x168da0: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168da4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x168da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_168da8:
    // 0x168da8: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x168da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x168dac: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x168dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x168db0: 0xa4430692  sh          $v1, 0x692($v0)
    ctx->pc = 0x168db0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1682), (uint16_t)GPR_U32(ctx, 3));
label_168db4:
    // 0x168db4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168db8: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168DB8u;
    {
        const bool branch_taken_0x168db8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x168DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DB8u;
        // 0x168dbc: 0x24020130  addiu       $v0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168db8) {
            ctx->pc = 0x168DCCu;
            goto label_168dcc;
        }
    }
    ctx->pc = 0x168DC0u;
    // 0x168dc0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x168dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168dc4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x168dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x168dc8: 0xac5206a8  sw          $s2, 0x6A8($v0)
    ctx->pc = 0x168dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 18));
label_168dcc:
    // 0x168dcc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x168dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x168dd0: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x168dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x168dd4: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x168dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x168dd8: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x168dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x168ddc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x168ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x168de0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x168de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x168de4: 0xac4306a4  sw          $v1, 0x6A4($v0)
    ctx->pc = 0x168de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1700), GPR_U32(ctx, 3));
label_168de8:
    // 0x168de8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x168de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x168decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168df0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x168df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168df8: 0x3e00008  jr          $ra
    ctx->pc = 0x168DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168DF8u;
        // 0x168dfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E00u;
}
