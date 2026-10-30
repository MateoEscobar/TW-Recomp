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

// Function: sub_004087C0
// Address: 0x4087c0 - 0x408860
void sub_004087C0_0x4087c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004087C0_0x4087c0");
#endif

    switch (ctx->pc) {
        case 0x4087c0u: goto label_4087c0;
        case 0x4087c4u: goto label_4087c4;
        case 0x4087c8u: goto label_4087c8;
        case 0x4087ccu: goto label_4087cc;
        case 0x4087d0u: goto label_4087d0;
        case 0x4087d4u: goto label_4087d4;
        case 0x4087d8u: goto label_4087d8;
        case 0x4087dcu: goto label_4087dc;
        case 0x4087e0u: goto label_4087e0;
        case 0x4087e4u: goto label_4087e4;
        case 0x4087e8u: goto label_4087e8;
        case 0x4087ecu: goto label_4087ec;
        case 0x4087f0u: goto label_4087f0;
        case 0x4087f4u: goto label_4087f4;
        case 0x4087f8u: goto label_4087f8;
        case 0x4087fcu: goto label_4087fc;
        case 0x408800u: goto label_408800;
        case 0x408804u: goto label_408804;
        case 0x408808u: goto label_408808;
        case 0x40880cu: goto label_40880c;
        case 0x408810u: goto label_408810;
        case 0x408814u: goto label_408814;
        case 0x408818u: goto label_408818;
        case 0x40881cu: goto label_40881c;
        case 0x408820u: goto label_408820;
        case 0x408824u: goto label_408824;
        case 0x408828u: goto label_408828;
        case 0x40882cu: goto label_40882c;
        case 0x408830u: goto label_408830;
        case 0x408834u: goto label_408834;
        case 0x408838u: goto label_408838;
        case 0x40883cu: goto label_40883c;
        case 0x408840u: goto label_408840;
        case 0x408844u: goto label_408844;
        case 0x408848u: goto label_408848;
        case 0x40884cu: goto label_40884c;
        case 0x408850u: goto label_408850;
        case 0x408854u: goto label_408854;
        case 0x408858u: goto label_408858;
        case 0x40885cu: goto label_40885c;
        default: break;
    }

    ctx->pc = 0x4087c0u;

label_4087c0:
    // 0x4087c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4087c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4087c4:
    // 0x4087c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4087c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4087c8:
    // 0x4087c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4087c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4087cc:
    // 0x4087cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4087ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4087d0:
    // 0x4087d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4087d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4087d4:
    // 0x4087d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4087d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4087d8:
    // 0x4087d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x4087d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_4087dc:
    // 0x4087dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x4087dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_4087e0:
    // 0x4087e0: 0x40f809  jalr        $v0
label_4087e4:
    if (ctx->pc == 0x4087E4u) {
        ctx->pc = 0x4087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087E0u;
        // 0x4087e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4087E8u;
        goto label_4087e8;
    }
    ctx->pc = 0x4087E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4087E8u);
        ctx->pc = 0x4087E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087E0u;
        // 0x4087e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4087E0u, 0x4087E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4087E8u;
label_4087e8:
    // 0x4087e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4087e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4087ec:
    // 0x4087ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4087ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4087f0:
    // 0x4087f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4087f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4087f4:
    // 0x4087f4: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
label_4087f8:
    if (ctx->pc == 0x4087F8u) {
        ctx->pc = 0x4087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087F4u;
        // 0x4087f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4087FCu;
        goto label_4087fc;
    }
    ctx->pc = 0x4087F4u;
    {
        const bool branch_taken_0x4087f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087F4u;
        // 0x4087f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4087f4) {
            ctx->pc = 0x40884Cu;
            goto label_40884c;
        }
    }
    ctx->pc = 0x4087FCu;
label_4087fc:
    // 0x4087fc: 0xc0e9694  jal         func_3A5A50
label_408800:
    if (ctx->pc == 0x408800u) {
        ctx->pc = 0x408800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4087FCu;
        // 0x408800: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408804u;
        goto label_408804;
    }
    ctx->pc = 0x4087FCu;
    SET_GPR_U32(ctx, 31, 0x408804u);
    ctx->pc = 0x408800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4087FCu;
    // 0x408800: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x4087FCu, 0x408804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x408804u;
label_408804:
    // 0x408804: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_408808:
    if (ctx->pc == 0x408808u) {
        ctx->pc = 0x408808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408804u;
        // 0x408808: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40880Cu;
        goto label_40880c;
    }
    ctx->pc = 0x408804u;
    {
        const bool branch_taken_0x408804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x408804) {
            ctx->pc = 0x408808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x408804u;
            // 0x408808: 0x8e0300b0  lw          $v1, 0xB0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x408814u;
            goto label_408814;
        }
    }
    ctx->pc = 0x40880Cu;
label_40880c:
    // 0x40880c: 0x1000000f  b           . + 4 + (0xF << 2)
label_408810:
    if (ctx->pc == 0x408810u) {
        ctx->pc = 0x408810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40880Cu;
        // 0x408810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408814u;
        goto label_408814;
    }
    ctx->pc = 0x40880Cu;
    {
        const bool branch_taken_0x40880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40880Cu;
        // 0x408810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40880c) {
            ctx->pc = 0x40884Cu;
            goto label_40884c;
        }
    }
    ctx->pc = 0x408814u;
label_408814:
    // 0x408814: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x408814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_408818:
    // 0x408818: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x408818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_40881c:
    // 0x40881c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x40881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_408820:
    // 0x408820: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x408820u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_408824:
    // 0x408824: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x408824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_408828:
    // 0x408828: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x408828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40882c:
    // 0x40882c: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x40882cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_408830:
    // 0x408830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x408830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408834:
    // 0x408834: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x408834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408838:
    // 0x408838: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x408838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_40883c:
    // 0x40883c: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x40883cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
label_408840:
    // 0x408840: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x408840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_408844:
    // 0x408844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x408844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_408848:
    // 0x408848: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x408848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_40884c:
    // 0x40884c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40884cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_408850:
    // 0x408850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_408854:
    // 0x408854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x408854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_408858:
    // 0x408858: 0x3e00008  jr          $ra
label_40885c:
    if (ctx->pc == 0x40885Cu) {
        ctx->pc = 0x40885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408858u;
        // 0x40885c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x408860u;
        goto label_fallthrough_0x408858;
    }
    ctx->pc = 0x408858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408858u;
        // 0x40885c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x408858:
    ctx->pc = 0x408860u;
}
