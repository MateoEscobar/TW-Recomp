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

// Function: sub_004851E0
// Address: 0x4851e0 - 0x485308
void sub_004851E0_0x4851e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004851E0_0x4851e0");
#endif

    switch (ctx->pc) {
        case 0x4851e0u: goto label_4851e0;
        case 0x4851e4u: goto label_4851e4;
        case 0x4851e8u: goto label_4851e8;
        case 0x4851ecu: goto label_4851ec;
        case 0x4851f0u: goto label_4851f0;
        case 0x4851f4u: goto label_4851f4;
        case 0x4851f8u: goto label_4851f8;
        case 0x4851fcu: goto label_4851fc;
        case 0x485200u: goto label_485200;
        case 0x485204u: goto label_485204;
        case 0x485208u: goto label_485208;
        case 0x48520cu: goto label_48520c;
        case 0x485210u: goto label_485210;
        case 0x485214u: goto label_485214;
        case 0x485218u: goto label_485218;
        case 0x48521cu: goto label_48521c;
        case 0x485220u: goto label_485220;
        case 0x485224u: goto label_485224;
        case 0x485228u: goto label_485228;
        case 0x48522cu: goto label_48522c;
        case 0x485230u: goto label_485230;
        case 0x485234u: goto label_485234;
        case 0x485238u: goto label_485238;
        case 0x48523cu: goto label_48523c;
        case 0x485240u: goto label_485240;
        case 0x485244u: goto label_485244;
        case 0x485248u: goto label_485248;
        case 0x48524cu: goto label_48524c;
        case 0x485250u: goto label_485250;
        case 0x485254u: goto label_485254;
        case 0x485258u: goto label_485258;
        case 0x48525cu: goto label_48525c;
        case 0x485260u: goto label_485260;
        case 0x485264u: goto label_485264;
        case 0x485268u: goto label_485268;
        case 0x48526cu: goto label_48526c;
        case 0x485270u: goto label_485270;
        case 0x485274u: goto label_485274;
        case 0x485278u: goto label_485278;
        case 0x48527cu: goto label_48527c;
        case 0x485280u: goto label_485280;
        case 0x485284u: goto label_485284;
        case 0x485288u: goto label_485288;
        case 0x48528cu: goto label_48528c;
        case 0x485290u: goto label_485290;
        case 0x485294u: goto label_485294;
        case 0x485298u: goto label_485298;
        case 0x48529cu: goto label_48529c;
        case 0x4852a0u: goto label_4852a0;
        case 0x4852a4u: goto label_4852a4;
        case 0x4852a8u: goto label_4852a8;
        case 0x4852acu: goto label_4852ac;
        case 0x4852b0u: goto label_4852b0;
        case 0x4852b4u: goto label_4852b4;
        case 0x4852b8u: goto label_4852b8;
        case 0x4852bcu: goto label_4852bc;
        case 0x4852c0u: goto label_4852c0;
        case 0x4852c4u: goto label_4852c4;
        case 0x4852c8u: goto label_4852c8;
        case 0x4852ccu: goto label_4852cc;
        case 0x4852d0u: goto label_4852d0;
        case 0x4852d4u: goto label_4852d4;
        case 0x4852d8u: goto label_4852d8;
        case 0x4852dcu: goto label_4852dc;
        case 0x4852e0u: goto label_4852e0;
        case 0x4852e4u: goto label_4852e4;
        case 0x4852e8u: goto label_4852e8;
        case 0x4852ecu: goto label_4852ec;
        case 0x4852f0u: goto label_4852f0;
        case 0x4852f4u: goto label_4852f4;
        case 0x4852f8u: goto label_4852f8;
        case 0x4852fcu: goto label_4852fc;
        case 0x485300u: goto label_485300;
        case 0x485304u: goto label_485304;
        default: break;
    }

    ctx->pc = 0x4851e0u;

label_4851e0:
    // 0x4851e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4851e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4851e4:
    // 0x4851e4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4851e8:
    // 0x4851e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4851e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4851ec:
    // 0x4851ec: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x4851ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_4851f0:
    // 0x4851f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4851f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4851f4:
    // 0x4851f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4851f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4851f8:
    // 0x4851f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4851f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_4851fc:
    // 0x4851fc: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x4851fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_485200:
    // 0x485200: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_485204:
    // 0x485204: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x485204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485208:
    // 0x485208: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x485208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_48520c:
    // 0x48520c: 0x40f809  jalr        $v0
label_485210:
    if (ctx->pc == 0x485210u) {
        ctx->pc = 0x485210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48520Cu;
        // 0x485210: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485214u;
        goto label_485214;
    }
    ctx->pc = 0x48520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485214u);
        ctx->pc = 0x485210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48520Cu;
        // 0x485210: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48520Cu, 0x485214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485214u;
label_485214:
    // 0x485214: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x485214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_485218:
    // 0x485218: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x485218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_48521c:
    // 0x48521c: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x48521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_485220:
    // 0x485220: 0x40f809  jalr        $v0
label_485224:
    if (ctx->pc == 0x485224u) {
        ctx->pc = 0x485224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485220u;
        // 0x485224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485228u;
        goto label_485228;
    }
    ctx->pc = 0x485220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485228u);
        ctx->pc = 0x485224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485220u;
        // 0x485224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485220u, 0x485228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485228u;
label_485228:
    // 0x485228: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x485228u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_48522c:
    // 0x48522c: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x48522cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_485230:
    // 0x485230: 0x8e4200dc  lw          $v0, 0xDC($s2)
    ctx->pc = 0x485230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_485234:
    // 0x485234: 0x40f809  jalr        $v0
label_485238:
    if (ctx->pc == 0x485238u) {
        ctx->pc = 0x485238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485234u;
        // 0x485238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48523Cu;
        goto label_48523c;
    }
    ctx->pc = 0x485234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48523Cu);
        ctx->pc = 0x485238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485234u;
        // 0x485238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485234u, 0x48523Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48523Cu;
label_48523c:
    // 0x48523c: 0x8e4300dc  lw          $v1, 0xDC($s2)
    ctx->pc = 0x48523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
label_485240:
    // 0x485240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485244:
    // 0x485244: 0x42200b  movn        $a0, $v0, $v0
    ctx->pc = 0x485244u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_485248:
    // 0x485248: 0x60f809  jalr        $v1
label_48524c:
    if (ctx->pc == 0x48524Cu) {
        ctx->pc = 0x48524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485248u;
        // 0x48524c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485250u;
        goto label_485250;
    }
    ctx->pc = 0x485248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x485250u);
        ctx->pc = 0x48524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485248u;
        // 0x48524c: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485248u, 0x485250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485250u;
label_485250:
    // 0x485250: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485250u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485254:
    // 0x485254: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_485258:
    if (ctx->pc == 0x485258u) {
        ctx->pc = 0x485258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485254u;
        // 0x485258: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48525Cu;
        goto label_48525c;
    }
    ctx->pc = 0x485254u;
    {
        const bool branch_taken_0x485254 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x485258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485254u;
        // 0x485258: 0x8f828968  lw          $v0, -0x7698($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485254) {
            ctx->pc = 0x4852E4u;
            goto label_4852e4;
        }
    }
    ctx->pc = 0x48525Cu;
label_48525c:
    // 0x48525c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x48525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_485260:
    // 0x485260: 0x8c50021c  lw          $s0, 0x21C($v0)
    ctx->pc = 0x485260u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
label_485264:
    // 0x485264: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_485268:
    if (ctx->pc == 0x485268u) {
        ctx->pc = 0x485268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485264u;
        // 0x485268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48526Cu;
        goto label_48526c;
    }
    ctx->pc = 0x485264u;
    {
        const bool branch_taken_0x485264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x485268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485264u;
        // 0x485268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485264) {
            ctx->pc = 0x4852E8u;
            goto label_4852e8;
        }
    }
    ctx->pc = 0x48526Cu;
label_48526c:
    // 0x48526c: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x48526cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_485270:
    // 0x485270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485274:
    // 0x485274: 0x40f809  jalr        $v0
label_485278:
    if (ctx->pc == 0x485278u) {
        ctx->pc = 0x485278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485274u;
        // 0x485278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48527Cu;
        goto label_48527c;
    }
    ctx->pc = 0x485274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48527Cu);
        ctx->pc = 0x485278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485274u;
        // 0x485278: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485274u, 0x48527Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48527Cu;
label_48527c:
    // 0x48527c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_485280:
    if (ctx->pc == 0x485280u) {
        ctx->pc = 0x485280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48527Cu;
        // 0x485280: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485284u;
        goto label_485284;
    }
    ctx->pc = 0x48527Cu;
    {
        const bool branch_taken_0x48527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48527Cu;
        // 0x485280: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48527c) {
            ctx->pc = 0x485298u;
            goto label_485298;
        }
    }
    ctx->pc = 0x485284u;
label_485284:
    // 0x485284: 0x8e4200e8  lw          $v0, 0xE8($s2)
    ctx->pc = 0x485284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
label_485288:
    // 0x485288: 0x40f809  jalr        $v0
label_48528c:
    if (ctx->pc == 0x48528Cu) {
        ctx->pc = 0x48528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485288u;
        // 0x48528c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485290u;
        goto label_485290;
    }
    ctx->pc = 0x485288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x485290u);
        ctx->pc = 0x48528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485288u;
        // 0x48528c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485288u, 0x485290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x485290u;
label_485290:
    // 0x485290: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_485294:
    if (ctx->pc == 0x485294u) {
        ctx->pc = 0x485294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485290u;
        // 0x485294: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485298u;
        goto label_485298;
    }
    ctx->pc = 0x485290u;
    {
        const bool branch_taken_0x485290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x485290) {
            ctx->pc = 0x485294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485290u;
            // 0x485294: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4852ACu;
            goto label_4852ac;
        }
    }
    ctx->pc = 0x485298u;
label_485298:
    // 0x485298: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x485298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_48529c:
    // 0x48529c: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4852a0:
    if (ctx->pc == 0x4852A0u) {
        ctx->pc = 0x4852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48529Cu;
        // 0x4852a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852A4u;
        goto label_4852a4;
    }
    ctx->pc = 0x48529Cu;
    {
        const bool branch_taken_0x48529c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4852A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48529Cu;
        // 0x4852a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48529c) {
            ctx->pc = 0x4852BCu;
            goto label_4852bc;
        }
    }
    ctx->pc = 0x4852A4u;
label_4852a4:
    // 0x4852a4: 0x10000011  b           . + 4 + (0x11 << 2)
label_4852a8:
    if (ctx->pc == 0x4852A8u) {
        ctx->pc = 0x4852A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852A4u;
        // 0x4852a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852ACu;
        goto label_4852ac;
    }
    ctx->pc = 0x4852A4u;
    {
        const bool branch_taken_0x4852a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4852A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852A4u;
        // 0x4852a8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4852a4) {
            ctx->pc = 0x4852ECu;
            goto label_4852ec;
        }
    }
    ctx->pc = 0x4852ACu;
label_4852ac:
    // 0x4852ac: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_4852b0:
    if (ctx->pc == 0x4852B0u) {
        ctx->pc = 0x4852B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852ACu;
        // 0x4852b0: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852B4u;
        goto label_4852b4;
    }
    ctx->pc = 0x4852ACu;
    {
        const bool branch_taken_0x4852ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4852ac) {
            ctx->pc = 0x4852B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4852ACu;
            // 0x4852b0: 0x8e4200e8  lw          $v0, 0xE8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485270;
        }
    }
    ctx->pc = 0x4852B4u;
label_4852b4:
    // 0x4852b4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4852b8:
    if (ctx->pc == 0x4852B8u) {
        ctx->pc = 0x4852B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852B4u;
        // 0x4852b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852BCu;
        goto label_4852bc;
    }
    ctx->pc = 0x4852B4u;
    {
        const bool branch_taken_0x4852b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4852B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852B4u;
        // 0x4852b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4852b4) {
            ctx->pc = 0x4852E8u;
            goto label_4852e8;
        }
    }
    ctx->pc = 0x4852BCu;
label_4852bc:
    // 0x4852bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4852bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_4852c0:
    // 0x4852c0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x4852c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_4852c4:
    // 0x4852c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4852c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4852c8:
    // 0x4852c8: 0x24c65d80  addiu       $a2, $a2, 0x5D80
    ctx->pc = 0x4852c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23936));
label_4852cc:
    // 0x4852cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x4852ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_4852d0:
    // 0x4852d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4852d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4852d4:
    // 0x4852d4: 0xc1213b8  jal         func_484EE0
label_4852d8:
    if (ctx->pc == 0x4852D8u) {
        ctx->pc = 0x4852D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852D4u;
        // 0x4852d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852DCu;
        goto label_4852dc;
    }
    ctx->pc = 0x4852D4u;
    SET_GPR_U32(ctx, 31, 0x4852DCu);
    ctx->pc = 0x4852D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4852D4u;
    // 0x4852d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484EE0u, 0x4852D4u, 0x4852DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4852DCu;
label_4852dc:
    // 0x4852dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4852e0:
    if (ctx->pc == 0x4852E0u) {
        ctx->pc = 0x4852E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852DCu;
        // 0x4852e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4852E4u;
        goto label_4852e4;
    }
    ctx->pc = 0x4852DCu;
    {
        const bool branch_taken_0x4852dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4852E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852DCu;
        // 0x4852e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4852dc) {
            ctx->pc = 0x4852E8u;
            goto label_4852e8;
        }
    }
    ctx->pc = 0x4852E4u;
label_4852e4:
    // 0x4852e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4852e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4852e8:
    // 0x4852e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4852e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4852ec:
    // 0x4852ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4852ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4852f0:
    // 0x4852f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4852f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4852f4:
    // 0x4852f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4852f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4852f8:
    // 0x4852f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4852f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4852fc:
    // 0x4852fc: 0x3e00008  jr          $ra
label_485300:
    if (ctx->pc == 0x485300u) {
        ctx->pc = 0x485300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852FCu;
        // 0x485300: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x485304u;
        goto label_485304;
    }
    ctx->pc = 0x4852FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4852FCu;
        // 0x485300: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4852FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485304u;
label_485304:
    // 0x485304: 0x0  nop
    ctx->pc = 0x485304u;
    // NOP
    ctx->pc = 0x485308u;
}
