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

// Function: sub_00178FD8
// Address: 0x178fd8 - 0x1790a8
void sub_00178FD8_0x178fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178FD8_0x178fd8");
#endif

    switch (ctx->pc) {
        case 0x178fd8u: goto label_178fd8;
        case 0x178fdcu: goto label_178fdc;
        case 0x178fe0u: goto label_178fe0;
        case 0x178fe4u: goto label_178fe4;
        case 0x178fe8u: goto label_178fe8;
        case 0x178fecu: goto label_178fec;
        case 0x178ff0u: goto label_178ff0;
        case 0x178ff4u: goto label_178ff4;
        case 0x178ff8u: goto label_178ff8;
        case 0x178ffcu: goto label_178ffc;
        case 0x179000u: goto label_179000;
        case 0x179004u: goto label_179004;
        case 0x179008u: goto label_179008;
        case 0x17900cu: goto label_17900c;
        case 0x179010u: goto label_179010;
        case 0x179014u: goto label_179014;
        case 0x179018u: goto label_179018;
        case 0x17901cu: goto label_17901c;
        case 0x179020u: goto label_179020;
        case 0x179024u: goto label_179024;
        case 0x179028u: goto label_179028;
        case 0x17902cu: goto label_17902c;
        case 0x179030u: goto label_179030;
        case 0x179034u: goto label_179034;
        case 0x179038u: goto label_179038;
        case 0x17903cu: goto label_17903c;
        case 0x179040u: goto label_179040;
        case 0x179044u: goto label_179044;
        case 0x179048u: goto label_179048;
        case 0x17904cu: goto label_17904c;
        case 0x179050u: goto label_179050;
        case 0x179054u: goto label_179054;
        case 0x179058u: goto label_179058;
        case 0x17905cu: goto label_17905c;
        case 0x179060u: goto label_179060;
        case 0x179064u: goto label_179064;
        case 0x179068u: goto label_179068;
        case 0x17906cu: goto label_17906c;
        case 0x179070u: goto label_179070;
        case 0x179074u: goto label_179074;
        case 0x179078u: goto label_179078;
        case 0x17907cu: goto label_17907c;
        case 0x179080u: goto label_179080;
        case 0x179084u: goto label_179084;
        case 0x179088u: goto label_179088;
        case 0x17908cu: goto label_17908c;
        case 0x179090u: goto label_179090;
        case 0x179094u: goto label_179094;
        case 0x179098u: goto label_179098;
        case 0x17909cu: goto label_17909c;
        case 0x1790a0u: goto label_1790a0;
        case 0x1790a4u: goto label_1790a4;
        default: break;
    }

    ctx->pc = 0x178fd8u;

label_178fd8:
    // 0x178fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178fdc:
    // 0x178fdc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_178fe0:
    // 0x178fe0: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x178fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_178fe4:
    // 0x178fe4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_178fe8:
    // 0x178fe8: 0x8e4271ac  lw          $v0, 0x71AC($s2)
    ctx->pc = 0x178fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29100)));
label_178fec:
    // 0x178fec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_178ff0:
    // 0x178ff0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_178ff4:
    if (ctx->pc == 0x178FF4u) {
        ctx->pc = 0x178FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FF0u;
        // 0x178ff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FF8u;
        goto label_178ff8;
    }
    ctx->pc = 0x178FF0u;
    {
        const bool branch_taken_0x178ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FF0u;
        // 0x178ff4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ff0) {
            ctx->pc = 0x179090u;
            goto label_179090;
        }
    }
    ctx->pc = 0x178FF8u;
label_178ff8:
    // 0x178ff8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x178ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_178ffc:
    // 0x178ffc: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x178ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
label_179000:
    // 0x179000: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x179000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_179004:
    // 0x179004: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x179004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_179008:
    // 0x179008: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x179008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17900c:
    // 0x17900c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x17900cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_179010:
    // 0x179010: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x179010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_179014:
    // 0x179014: 0x60f809  jalr        $v1
label_179018:
    if (ctx->pc == 0x179018u) {
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17901Cu;
        goto label_17901c;
    }
    ctx->pc = 0x179014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17901Cu);
        ctx->pc = 0x179018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179014u;
        // 0x179018: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179014u, 0x17901Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17901Cu;
label_17901c:
    // 0x17901c: 0x8e0b27e4  lw          $t3, 0x27E4($s0)
    ctx->pc = 0x17901cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_179020:
    // 0x179020: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x179020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_179024:
    // 0x179024: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x179024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_179028:
    // 0x179028: 0x24a52020  addiu       $a1, $a1, 0x2020
    ctx->pc = 0x179028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8224));
label_17902c:
    // 0x17902c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x17902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_179030:
    // 0x179030: 0x25082030  addiu       $t0, $t0, 0x2030
    ctx->pc = 0x179030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8240));
label_179034:
    // 0x179034: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x179034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_179038:
    // 0x179038: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x179038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17903c:
    // 0x17903c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17903cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_179040:
    // 0x179040: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x179040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_179044:
    // 0x179044: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x179044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_179048:
    // 0x179048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x179048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17904c:
    // 0x17904c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x17904cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_179050:
    // 0x179050: 0x40f809  jalr        $v0
label_179054:
    if (ctx->pc == 0x179054u) {
        ctx->pc = 0x179054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179050u;
        // 0x179054: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179058u;
        goto label_179058;
    }
    ctx->pc = 0x179050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179058u);
        ctx->pc = 0x179054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179050u;
        // 0x179054: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179050u, 0x179058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179058u;
label_179058:
    // 0x179058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17905c:
    // 0x17905c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_179060:
    if (ctx->pc == 0x179060u) {
        ctx->pc = 0x179060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17905Cu;
        // 0x179060: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179064u;
        goto label_179064;
    }
    ctx->pc = 0x17905Cu;
    {
        const bool branch_taken_0x17905c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17905Cu;
        // 0x179060: 0x8e0627e4  lw          $a2, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17905c) {
            ctx->pc = 0x179074u;
            goto label_179074;
        }
    }
    ctx->pc = 0x179064u;
label_179064:
    // 0x179064: 0xc05e44e  jal         func_179138
label_179068:
    if (ctx->pc == 0x179068u) {
        ctx->pc = 0x17906Cu;
        goto label_17906c;
    }
    ctx->pc = 0x179064u;
    SET_GPR_U32(ctx, 31, 0x17906Cu);
    ctx->pc = 0x179138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179138u, 0x179064u, 0x17906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17906Cu;
label_17906c:
    // 0x17906c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17906cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179070:
    // 0x179070: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x179070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_179074:
    // 0x179074: 0x8e25b9b8  lw          $a1, -0x4648($s1)
    ctx->pc = 0x179074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294949304)));
label_179078:
    // 0x179078: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x179078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17907c:
    // 0x17907c: 0xae4471ac  sw          $a0, 0x71AC($s2)
    ctx->pc = 0x17907cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29100), GPR_U32(ctx, 4));
label_179080:
    // 0x179080: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x179080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_179084:
    // 0x179084: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x179084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_179088:
    // 0x179088: 0x60f809  jalr        $v1
label_17908c:
    if (ctx->pc == 0x17908Cu) {
        ctx->pc = 0x17908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179088u;
        // 0x17908c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179090u;
        goto label_179090;
    }
    ctx->pc = 0x179088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179090u);
        ctx->pc = 0x17908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179088u;
        // 0x17908c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179088u, 0x179090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179090u;
label_179090:
    // 0x179090: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x179090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_179094:
    // 0x179094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x179094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_179098:
    // 0x179098: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x179098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17909c:
    // 0x17909c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17909cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1790a0:
    // 0x1790a0: 0x3e00008  jr          $ra
label_1790a4:
    if (ctx->pc == 0x1790A4u) {
        ctx->pc = 0x1790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790A0u;
        // 0x1790a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1790A8u;
        goto label_fallthrough_0x1790a0;
    }
    ctx->pc = 0x1790A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1790A0u;
        // 0x1790a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1790A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1790a0:
    ctx->pc = 0x1790A8u;
}
