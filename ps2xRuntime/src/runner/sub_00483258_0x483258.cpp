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

// Function: sub_00483258
// Address: 0x483258 - 0x483360
void sub_00483258_0x483258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483258_0x483258");
#endif

    switch (ctx->pc) {
        case 0x483258u: goto label_483258;
        case 0x48325cu: goto label_48325c;
        case 0x483260u: goto label_483260;
        case 0x483264u: goto label_483264;
        case 0x483268u: goto label_483268;
        case 0x48326cu: goto label_48326c;
        case 0x483270u: goto label_483270;
        case 0x483274u: goto label_483274;
        case 0x483278u: goto label_483278;
        case 0x48327cu: goto label_48327c;
        case 0x483280u: goto label_483280;
        case 0x483284u: goto label_483284;
        case 0x483288u: goto label_483288;
        case 0x48328cu: goto label_48328c;
        case 0x483290u: goto label_483290;
        case 0x483294u: goto label_483294;
        case 0x483298u: goto label_483298;
        case 0x48329cu: goto label_48329c;
        case 0x4832a0u: goto label_4832a0;
        case 0x4832a4u: goto label_4832a4;
        case 0x4832a8u: goto label_4832a8;
        case 0x4832acu: goto label_4832ac;
        case 0x4832b0u: goto label_4832b0;
        case 0x4832b4u: goto label_4832b4;
        case 0x4832b8u: goto label_4832b8;
        case 0x4832bcu: goto label_4832bc;
        case 0x4832c0u: goto label_4832c0;
        case 0x4832c4u: goto label_4832c4;
        case 0x4832c8u: goto label_4832c8;
        case 0x4832ccu: goto label_4832cc;
        case 0x4832d0u: goto label_4832d0;
        case 0x4832d4u: goto label_4832d4;
        case 0x4832d8u: goto label_4832d8;
        case 0x4832dcu: goto label_4832dc;
        case 0x4832e0u: goto label_4832e0;
        case 0x4832e4u: goto label_4832e4;
        case 0x4832e8u: goto label_4832e8;
        case 0x4832ecu: goto label_4832ec;
        case 0x4832f0u: goto label_4832f0;
        case 0x4832f4u: goto label_4832f4;
        case 0x4832f8u: goto label_4832f8;
        case 0x4832fcu: goto label_4832fc;
        case 0x483300u: goto label_483300;
        case 0x483304u: goto label_483304;
        case 0x483308u: goto label_483308;
        case 0x48330cu: goto label_48330c;
        case 0x483310u: goto label_483310;
        case 0x483314u: goto label_483314;
        case 0x483318u: goto label_483318;
        case 0x48331cu: goto label_48331c;
        case 0x483320u: goto label_483320;
        case 0x483324u: goto label_483324;
        case 0x483328u: goto label_483328;
        case 0x48332cu: goto label_48332c;
        case 0x483330u: goto label_483330;
        case 0x483334u: goto label_483334;
        case 0x483338u: goto label_483338;
        case 0x48333cu: goto label_48333c;
        case 0x483340u: goto label_483340;
        case 0x483344u: goto label_483344;
        case 0x483348u: goto label_483348;
        case 0x48334cu: goto label_48334c;
        case 0x483350u: goto label_483350;
        case 0x483354u: goto label_483354;
        case 0x483358u: goto label_483358;
        case 0x48335cu: goto label_48335c;
        default: break;
    }

    ctx->pc = 0x483258u;

label_483258:
    // 0x483258: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48325c:
    // 0x48325c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_483260:
    // 0x483260: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x483260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_483264:
    // 0x483264: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x483264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483268:
    // 0x483268: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x483268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48326c:
    // 0x48326c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48326cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483270:
    // 0x483270: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_483274:
    // 0x483274: 0x2451ad28  addiu       $s1, $v0, -0x52D8
    ctx->pc = 0x483274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946088));
label_483278:
    // 0x483278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x483278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48327c:
    // 0x48327c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x48327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_483280:
    // 0x483280: 0x40f809  jalr        $v0
label_483284:
    if (ctx->pc == 0x483284u) {
        ctx->pc = 0x483284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483280u;
        // 0x483284: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483288u;
        goto label_483288;
    }
    ctx->pc = 0x483280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x483288u);
        ctx->pc = 0x483284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483280u;
        // 0x483284: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483280u, 0x483288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x483288u;
label_483288:
    // 0x483288: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48328c:
    // 0x48328c: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_483290:
    if (ctx->pc == 0x483290u) {
        ctx->pc = 0x483290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48328Cu;
        // 0x483290: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483294u;
        goto label_483294;
    }
    ctx->pc = 0x48328Cu;
    {
        const bool branch_taken_0x48328c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48328Cu;
        // 0x483290: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48328c) {
            ctx->pc = 0x4832C0u;
            goto label_4832c0;
        }
    }
    ctx->pc = 0x483294u;
label_483294:
    // 0x483294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483298:
    // 0x483298: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48329c:
    // 0x48329c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48329cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4832a0:
    // 0x4832a0: 0xc11eff2  jal         func_47BFC8
label_4832a4:
    if (ctx->pc == 0x4832A4u) {
        ctx->pc = 0x4832A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832A0u;
        // 0x4832a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832A8u;
        goto label_4832a8;
    }
    ctx->pc = 0x4832A0u;
    SET_GPR_U32(ctx, 31, 0x4832A8u);
    ctx->pc = 0x4832A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4832A0u;
    // 0x4832a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4832A0u, 0x4832A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832A8u;
label_4832a8:
    // 0x4832a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4832a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4832ac:
    // 0x4832ac: 0xc11f024  jal         func_47C090
label_4832b0:
    if (ctx->pc == 0x4832B0u) {
        ctx->pc = 0x4832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832ACu;
        // 0x4832b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832B4u;
        goto label_4832b4;
    }
    ctx->pc = 0x4832ACu;
    SET_GPR_U32(ctx, 31, 0x4832B4u);
    ctx->pc = 0x4832B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4832ACu;
    // 0x4832b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4832ACu, 0x4832B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832B4u;
label_4832b4:
    // 0x4832b4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4832b8:
    if (ctx->pc == 0x4832B8u) {
        ctx->pc = 0x4832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832B4u;
        // 0x4832b8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832BCu;
        goto label_4832bc;
    }
    ctx->pc = 0x4832B4u;
    {
        const bool branch_taken_0x4832b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4832B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832B4u;
        // 0x4832b8: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4832b4) {
            ctx->pc = 0x483348u;
            goto label_483348;
        }
    }
    ctx->pc = 0x4832BCu;
label_4832bc:
    // 0x4832bc: 0x0  nop
    ctx->pc = 0x4832bcu;
    // NOP
label_4832c0:
    // 0x4832c0: 0x2630fff0  addiu       $s0, $s1, -0x10
    ctx->pc = 0x4832c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_4832c4:
    // 0x4832c4: 0x2484eaa8  addiu       $a0, $a0, -0x1558
    ctx->pc = 0x4832c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961832));
label_4832c8:
    // 0x4832c8: 0xc11ff8e  jal         func_47FE38
label_4832cc:
    if (ctx->pc == 0x4832CCu) {
        ctx->pc = 0x4832CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832C8u;
        // 0x4832cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832D0u;
        goto label_4832d0;
    }
    ctx->pc = 0x4832C8u;
    SET_GPR_U32(ctx, 31, 0x4832D0u);
    ctx->pc = 0x4832CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4832C8u;
    // 0x4832cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x4832C8u, 0x4832D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832D0u;
label_4832d0:
    // 0x4832d0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_4832d4:
    if (ctx->pc == 0x4832D4u) {
        ctx->pc = 0x4832D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832D0u;
        // 0x4832d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832D8u;
        goto label_4832d8;
    }
    ctx->pc = 0x4832D0u;
    {
        const bool branch_taken_0x4832d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4832d0) {
            ctx->pc = 0x4832D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4832D0u;
            // 0x4832d4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483308u;
            goto label_483308;
        }
    }
    ctx->pc = 0x4832D8u;
label_4832d8:
    // 0x4832d8: 0xc12170a  jal         func_485C28
label_4832dc:
    if (ctx->pc == 0x4832DCu) {
        ctx->pc = 0x4832DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832D8u;
        // 0x4832dc: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832E0u;
        goto label_4832e0;
    }
    ctx->pc = 0x4832D8u;
    SET_GPR_U32(ctx, 31, 0x4832E0u);
    ctx->pc = 0x4832DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4832D8u;
    // 0x4832dc: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x485C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485C28u, 0x4832D8u, 0x4832E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4832E0u;
label_4832e0:
    // 0x4832e0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4832e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4832e4:
    // 0x4832e4: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x4832e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4832e8:
    // 0x4832e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4832e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4832ec:
    // 0x4832ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4832ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4832f0:
    // 0x4832f0: 0x40f809  jalr        $v0
label_4832f4:
    if (ctx->pc == 0x4832F4u) {
        ctx->pc = 0x4832F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832F0u;
        // 0x4832f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4832F8u;
        goto label_4832f8;
    }
    ctx->pc = 0x4832F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4832F8u);
        ctx->pc = 0x4832F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4832F0u;
        // 0x4832f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4832F0u, 0x4832F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4832F8u;
label_4832f8:
    // 0x4832f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4832f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4832fc:
    // 0x4832fc: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x4832fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_483300:
    // 0x483300: 0x10000012  b           . + 4 + (0x12 << 2)
label_483304:
    if (ctx->pc == 0x483304u) {
        ctx->pc = 0x483304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483300u;
        // 0x483304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483308u;
        goto label_483308;
    }
    ctx->pc = 0x483300u;
    {
        const bool branch_taken_0x483300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483300u;
        // 0x483304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483300) {
            ctx->pc = 0x48334Cu;
            goto label_48334c;
        }
    }
    ctx->pc = 0x483308u;
label_483308:
    // 0x483308: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x483308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48330c:
    // 0x48330c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48330cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483310:
    // 0x483310: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x483310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483314:
    // 0x483314: 0x40f809  jalr        $v0
label_483318:
    if (ctx->pc == 0x483318u) {
        ctx->pc = 0x483318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483314u;
        // 0x483318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48331Cu;
        goto label_48331c;
    }
    ctx->pc = 0x483314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48331Cu);
        ctx->pc = 0x483318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483314u;
        // 0x483318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483314u, 0x48331Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48331Cu;
label_48331c:
    // 0x48331c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_483320:
    if (ctx->pc == 0x483320u) {
        ctx->pc = 0x483320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48331Cu;
        // 0x483320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483324u;
        goto label_483324;
    }
    ctx->pc = 0x48331Cu;
    {
        const bool branch_taken_0x48331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x483320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48331Cu;
        // 0x483320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48331c) {
            ctx->pc = 0x48334Cu;
            goto label_48334c;
        }
    }
    ctx->pc = 0x483324u;
label_483324:
    // 0x483324: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x483324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483328:
    // 0x483328: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x483328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_48332c:
    // 0x48332c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_483330:
    // 0x483330: 0xc11eff2  jal         func_47BFC8
label_483334:
    if (ctx->pc == 0x483334u) {
        ctx->pc = 0x483334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483330u;
        // 0x483334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483338u;
        goto label_483338;
    }
    ctx->pc = 0x483330u;
    SET_GPR_U32(ctx, 31, 0x483338u);
    ctx->pc = 0x483334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483330u;
    // 0x483334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x483330u, 0x483338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483338u;
label_483338:
    // 0x483338: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x483338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_48333c:
    // 0x48333c: 0xc11f024  jal         func_47C090
label_483340:
    if (ctx->pc == 0x483340u) {
        ctx->pc = 0x483340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48333Cu;
        // 0x483340: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483344u;
        goto label_483344;
    }
    ctx->pc = 0x48333Cu;
    SET_GPR_U32(ctx, 31, 0x483344u);
    ctx->pc = 0x483340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48333Cu;
    // 0x483340: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x48333Cu, 0x483344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483344u;
label_483344:
    // 0x483344: 0x0  nop
    ctx->pc = 0x483344u;
    // NOP
label_483348:
    // 0x483348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x483348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48334c:
    // 0x48334c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x48334cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_483350:
    // 0x483350: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x483350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_483354:
    // 0x483354: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_483358:
    // 0x483358: 0x3e00008  jr          $ra
label_48335c:
    if (ctx->pc == 0x48335Cu) {
        ctx->pc = 0x48335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483358u;
        // 0x48335c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x483360u;
        goto label_fallthrough_0x483358;
    }
    ctx->pc = 0x483358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483358u;
        // 0x48335c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x483358:
    ctx->pc = 0x483360u;
}
