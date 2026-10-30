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

// Function: sub_002D2F98
// Address: 0x2d2f98 - 0x2d3038
void sub_002D2F98_0x2d2f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F98_0x2d2f98");
#endif

    switch (ctx->pc) {
        case 0x2d2f98u: goto label_2d2f98;
        case 0x2d2f9cu: goto label_2d2f9c;
        case 0x2d2fa0u: goto label_2d2fa0;
        case 0x2d2fa4u: goto label_2d2fa4;
        case 0x2d2fa8u: goto label_2d2fa8;
        case 0x2d2facu: goto label_2d2fac;
        case 0x2d2fb0u: goto label_2d2fb0;
        case 0x2d2fb4u: goto label_2d2fb4;
        case 0x2d2fb8u: goto label_2d2fb8;
        case 0x2d2fbcu: goto label_2d2fbc;
        case 0x2d2fc0u: goto label_2d2fc0;
        case 0x2d2fc4u: goto label_2d2fc4;
        case 0x2d2fc8u: goto label_2d2fc8;
        case 0x2d2fccu: goto label_2d2fcc;
        case 0x2d2fd0u: goto label_2d2fd0;
        case 0x2d2fd4u: goto label_2d2fd4;
        case 0x2d2fd8u: goto label_2d2fd8;
        case 0x2d2fdcu: goto label_2d2fdc;
        case 0x2d2fe0u: goto label_2d2fe0;
        case 0x2d2fe4u: goto label_2d2fe4;
        case 0x2d2fe8u: goto label_2d2fe8;
        case 0x2d2fecu: goto label_2d2fec;
        case 0x2d2ff0u: goto label_2d2ff0;
        case 0x2d2ff4u: goto label_2d2ff4;
        case 0x2d2ff8u: goto label_2d2ff8;
        case 0x2d2ffcu: goto label_2d2ffc;
        case 0x2d3000u: goto label_2d3000;
        case 0x2d3004u: goto label_2d3004;
        case 0x2d3008u: goto label_2d3008;
        case 0x2d300cu: goto label_2d300c;
        case 0x2d3010u: goto label_2d3010;
        case 0x2d3014u: goto label_2d3014;
        case 0x2d3018u: goto label_2d3018;
        case 0x2d301cu: goto label_2d301c;
        case 0x2d3020u: goto label_2d3020;
        case 0x2d3024u: goto label_2d3024;
        case 0x2d3028u: goto label_2d3028;
        case 0x2d302cu: goto label_2d302c;
        case 0x2d3030u: goto label_2d3030;
        case 0x2d3034u: goto label_2d3034;
        default: break;
    }

    ctx->pc = 0x2d2f98u;

label_2d2f98:
    // 0x2d2f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d2f9c:
    // 0x2d2f9c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d2f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2d2fa0:
    // 0x2d2fa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d2fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d2fa4:
    // 0x2d2fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d2fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d2fa8:
    // 0x2d2fa8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d2fac:
    // 0x2d2fac: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x2d2facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
label_2d2fb0:
    // 0x2d2fb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2d2fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2d2fb4:
    // 0x2d2fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d2fb8:
    // 0x2d2fb8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2d2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2d2fbc:
    // 0x2d2fbc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d2fc0:
    // 0x2d2fc0: 0xdca200e0  ld          $v0, 0xE0($a1)
    ctx->pc = 0x2d2fc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 224)));
label_2d2fc4:
    // 0x2d2fc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2d2fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2d2fc8:
    // 0x2d2fc8: 0xfca200e0  sd          $v0, 0xE0($a1)
    ctx->pc = 0x2d2fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 224), GPR_U64(ctx, 2));
label_2d2fcc:
    // 0x2d2fcc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2d2fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2d2fd0:
    // 0x2d2fd0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_2d2fd4:
    if (ctx->pc == 0x2D2FD4u) {
        ctx->pc = 0x2D2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FD0u;
        // 0x2d2fd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D2FD8u;
        goto label_2d2fd8;
    }
    ctx->pc = 0x2D2FD0u;
    {
        const bool branch_taken_0x2d2fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FD0u;
        // 0x2d2fd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2fd0) {
            ctx->pc = 0x2D301Cu;
            goto label_2d301c;
        }
    }
    ctx->pc = 0x2D2FD8u;
label_2d2fd8:
    // 0x2d2fd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2d2fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2d2fdc:
    // 0x2d2fdc: 0x8c512b04  lw          $s1, 0x2B04($v0)
    ctx->pc = 0x2d2fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_2d2fe0:
    // 0x2d2fe0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d2fe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d2fe4:
    // 0x2d2fe4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2d2fe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d2fe8:
    // 0x2d2fe8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d2fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d2fec:
    // 0x2d2fec: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2d2fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2d2ff0:
    // 0x2d2ff0: 0x860300a0  lh          $v1, 0xA0($s0)
    ctx->pc = 0x2d2ff0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_2d2ff4:
    // 0x2d2ff4: 0x261000a0  addiu       $s0, $s0, 0xA0
    ctx->pc = 0x2d2ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2d2ff8:
    // 0x2d2ff8: 0x40f809  jalr        $v0
label_2d2ffc:
    if (ctx->pc == 0x2D2FFCu) {
        ctx->pc = 0x2D2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FF8u;
        // 0x2d2ffc: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3000u;
        goto label_2d3000;
    }
    ctx->pc = 0x2D2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D3000u);
        ctx->pc = 0x2D2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2FF8u;
        // 0x2d2ffc: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2FF8u, 0x2D3000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D3000u;
label_2d3000:
    // 0x2d3000: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d3000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d3004:
    // 0x2d3004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d3008:
    // 0x2d3008: 0x92470015  lbu         $a3, 0x15($s2)
    ctx->pc = 0x2d3008u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_2d300c:
    // 0x2d300c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d300cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d3010:
    // 0x2d3010: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2d3010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2d3014:
    // 0x2d3014: 0x60f809  jalr        $v1
label_2d3018:
    if (ctx->pc == 0x2D3018u) {
        ctx->pc = 0x2D3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3014u;
        // 0x2d3018: 0x24080021  addiu       $t0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D301Cu;
        goto label_2d301c;
    }
    ctx->pc = 0x2D3014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2D301Cu);
        ctx->pc = 0x2D3018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3014u;
        // 0x2d3018: 0x24080021  addiu       $t0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3014u, 0x2D301Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D301Cu;
label_2d301c:
    // 0x2d301c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d3020:
    // 0x2d3020: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d3020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d3024:
    // 0x2d3024: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d3024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d3028:
    // 0x2d3028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d302c:
    // 0x2d302c: 0x3e00008  jr          $ra
label_2d3030:
    if (ctx->pc == 0x2D3030u) {
        ctx->pc = 0x2D3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D302Cu;
        // 0x2d3030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D3034u;
        goto label_2d3034;
    }
    ctx->pc = 0x2D302Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D302Cu;
        // 0x2d3030: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D302Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3034u;
label_2d3034:
    // 0x2d3034: 0x0  nop
    ctx->pc = 0x2d3034u;
    // NOP
    ctx->pc = 0x2d3038u;
}
