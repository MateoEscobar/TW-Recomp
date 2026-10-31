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

// Function: sub_00398FE0
// Address: 0x398fe0 - 0x399080
void sub_00398FE0_0x398fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398FE0_0x398fe0");
#endif

    switch (ctx->pc) {
        case 0x398fe0u: goto label_398fe0;
        case 0x398fe4u: goto label_398fe4;
        case 0x398fe8u: goto label_398fe8;
        case 0x398fecu: goto label_398fec;
        case 0x398ff0u: goto label_398ff0;
        case 0x398ff4u: goto label_398ff4;
        case 0x398ff8u: goto label_398ff8;
        case 0x398ffcu: goto label_398ffc;
        case 0x399000u: goto label_399000;
        case 0x399004u: goto label_399004;
        case 0x399008u: goto label_399008;
        case 0x39900cu: goto label_39900c;
        case 0x399010u: goto label_399010;
        case 0x399014u: goto label_399014;
        case 0x399018u: goto label_399018;
        case 0x39901cu: goto label_39901c;
        case 0x399020u: goto label_399020;
        case 0x399024u: goto label_399024;
        case 0x399028u: goto label_399028;
        case 0x39902cu: goto label_39902c;
        case 0x399030u: goto label_399030;
        case 0x399034u: goto label_399034;
        case 0x399038u: goto label_399038;
        case 0x39903cu: goto label_39903c;
        case 0x399040u: goto label_399040;
        case 0x399044u: goto label_399044;
        case 0x399048u: goto label_399048;
        case 0x39904cu: goto label_39904c;
        case 0x399050u: goto label_399050;
        case 0x399054u: goto label_399054;
        case 0x399058u: goto label_399058;
        case 0x39905cu: goto label_39905c;
        case 0x399060u: goto label_399060;
        case 0x399064u: goto label_399064;
        case 0x399068u: goto label_399068;
        case 0x39906cu: goto label_39906c;
        case 0x399070u: goto label_399070;
        case 0x399074u: goto label_399074;
        case 0x399078u: goto label_399078;
        case 0x39907cu: goto label_39907c;
        default: break;
    }

    ctx->pc = 0x398fe0u;

label_398fe0:
    // 0x398fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_398fe4:
    // 0x398fe4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x398fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_398fe8:
    // 0x398fe8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x398fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_398fec:
    // 0x398fec: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x398fecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_398ff0:
    // 0x398ff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_398ff4:
    // 0x398ff4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x398ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398ff8:
    // 0x398ff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398ffc:
    // 0x398ffc: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x398ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_399000:
    // 0x399000: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x399000u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_399004:
    // 0x399004: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x399004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_399008:
    // 0x399008: 0x31482  srl         $v0, $v1, 18
    ctx->pc = 0x399008u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_39900c:
    // 0x39900c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399010:
    // 0x399010: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_399014:
    if (ctx->pc == 0x399014u) {
        ctx->pc = 0x399014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399010u;
        // 0x399014: 0x31442  srl         $v0, $v1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399018u;
        goto label_399018;
    }
    ctx->pc = 0x399010u;
    {
        const bool branch_taken_0x399010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x399014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399010u;
        // 0x399014: 0x31442  srl         $v0, $v1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399010) {
            ctx->pc = 0x399024u;
            goto label_399024;
        }
    }
    ctx->pc = 0x399018u;
label_399018:
    // 0x399018: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39901c:
    // 0x39901c: 0x10000014  b           . + 4 + (0x14 << 2)
label_399020:
    if (ctx->pc == 0x399020u) {
        ctx->pc = 0x399020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39901Cu;
        // 0x399020: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399024u;
        goto label_399024;
    }
    ctx->pc = 0x39901Cu;
    {
        const bool branch_taken_0x39901c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39901Cu;
        // 0x399020: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39901c) {
            ctx->pc = 0x399070u;
            goto label_399070;
        }
    }
    ctx->pc = 0x399024u;
label_399024:
    // 0x399024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x399024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_399028:
    // 0x399028: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_39902c:
    if (ctx->pc == 0x39902Cu) {
        ctx->pc = 0x39902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399028u;
        // 0x39902c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399030u;
        goto label_399030;
    }
    ctx->pc = 0x399028u;
    {
        const bool branch_taken_0x399028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39902Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399028u;
        // 0x39902c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399028) {
            ctx->pc = 0x39903Cu;
            goto label_39903c;
        }
    }
    ctx->pc = 0x399030u;
label_399030:
    // 0x399030: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x399030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_399034:
    // 0x399034: 0xc0e6420  jal         func_399080
label_399038:
    if (ctx->pc == 0x399038u) {
        ctx->pc = 0x399038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399034u;
        // 0x399038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39903Cu;
        goto label_39903c;
    }
    ctx->pc = 0x399034u;
    SET_GPR_U32(ctx, 31, 0x39903Cu);
    ctx->pc = 0x399038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399034u;
    // 0x399038: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399080u, 0x399034u, 0x39903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39903Cu;
label_39903c:
    // 0x39903c: 0xc0e404c  jal         func_390130
label_399040:
    if (ctx->pc == 0x399040u) {
        ctx->pc = 0x399040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39903Cu;
        // 0x399040: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399044u;
        goto label_399044;
    }
    ctx->pc = 0x39903Cu;
    SET_GPR_U32(ctx, 31, 0x399044u);
    ctx->pc = 0x399040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39903Cu;
    // 0x399040: 0x86040024  lh          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x39903Cu, 0x399044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399044u;
label_399044:
    // 0x399044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x399044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_399048:
    // 0x399048: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_39904c:
    if (ctx->pc == 0x39904Cu) {
        ctx->pc = 0x39904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399048u;
        // 0x39904c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399050u;
        goto label_399050;
    }
    ctx->pc = 0x399048u;
    {
        const bool branch_taken_0x399048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399048u;
        // 0x39904c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399048) {
            ctx->pc = 0x39906Cu;
            goto label_39906c;
        }
    }
    ctx->pc = 0x399050u;
label_399050:
    // 0x399050: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x399050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_399054:
    // 0x399054: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x399054u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_399058:
    // 0x399058: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x399058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_39905c:
    // 0x39905c: 0x40f809  jalr        $v0
label_399060:
    if (ctx->pc == 0x399060u) {
        ctx->pc = 0x399060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39905Cu;
        // 0x399060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399064u;
        goto label_399064;
    }
    ctx->pc = 0x39905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399064u);
        ctx->pc = 0x399060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39905Cu;
        // 0x399060: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39905Cu, 0x399064u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399064u;
label_399064:
    // 0x399064: 0x10000003  b           . + 4 + (0x3 << 2)
label_399068:
    if (ctx->pc == 0x399068u) {
        ctx->pc = 0x399068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399064u;
        // 0x399068: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39906Cu;
        goto label_39906c;
    }
    ctx->pc = 0x399064u;
    {
        const bool branch_taken_0x399064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399064u;
        // 0x399068: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399064) {
            ctx->pc = 0x399074u;
            goto label_399074;
        }
    }
    ctx->pc = 0x39906Cu;
label_39906c:
    // 0x39906c: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x39906cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_399070:
    // 0x399070: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x399070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_399074:
    // 0x399074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x399074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_399078:
    // 0x399078: 0x3e00008  jr          $ra
label_39907c:
    if (ctx->pc == 0x39907Cu) {
        ctx->pc = 0x39907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399078u;
        // 0x39907c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399080u;
        goto label_fallthrough_0x399078;
    }
    ctx->pc = 0x399078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399078u;
        // 0x39907c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x399078:
    ctx->pc = 0x399080u;
}
