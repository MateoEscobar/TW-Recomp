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

// Function: sub_004C43E8
// Address: 0x4c43e8 - 0x4c4610
void sub_004C43E8_0x4c43e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C43E8_0x4c43e8");
#endif

    switch (ctx->pc) {
        case 0x4c4418u: goto label_4c4418;
        case 0x4c44a0u: goto label_4c44a0;
        case 0x4c44e4u: goto label_4c44e4;
        case 0x4c453cu: goto label_4c453c;
        case 0x4c4590u: goto label_4c4590;
        default: break;
    }

    ctx->pc = 0x4c43e8u;

    // 0x4c43e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c43e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c43ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c43ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c43f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c43f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c43f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c43f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c43f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c43f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c43fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c43fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c4400: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
    ctx->pc = 0x4C4400u;
    {
        const bool branch_taken_0x4c4400 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4400u;
        // 0x4c4404: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4400) {
            ctx->pc = 0x4C45F8u;
            goto label_4c45f8;
        }
    }
    ctx->pc = 0x4C4408u;
    // 0x4c4408: 0x1240007c  beqz        $s2, . + 4 + (0x7C << 2)
    ctx->pc = 0x4C4408u;
    {
        const bool branch_taken_0x4c4408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4408u;
        // 0x4c440c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4408) {
            ctx->pc = 0x4C45FCu;
            goto label_4c45fc;
        }
    }
    ctx->pc = 0x4C4410u;
    // 0x4c4410: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4C4410u;
    SET_GPR_U32(ctx, 31, 0x4C4418u);
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C4410u, 0x4C4418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4418u;
label_4c4418:
    // 0x4c4418: 0x8e23027c  lw          $v1, 0x27C($s1)
    ctx->pc = 0x4c4418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
    // 0x4c441c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4C441Cu;
    {
        const bool branch_taken_0x4c441c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C441Cu;
        // 0x4c4420: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c441c) {
            ctx->pc = 0x4C4438u;
            goto label_4c4438;
        }
    }
    ctx->pc = 0x4C4424u;
    // 0x4c4424: 0x8e2202b4  lw          $v0, 0x2B4($s1)
    ctx->pc = 0x4c4424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x4c4428: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4c4428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4c442c: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x4c442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x4c4430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c4430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c4434: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x4c4434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_4c4438:
    // 0x4c4438: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x4c4438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x4c443c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4C443Cu;
    {
        const bool branch_taken_0x4c443c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c443c) {
            ctx->pc = 0x4C4440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C443Cu;
            // 0x4c4440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4494u;
            goto label_4c4494;
        }
    }
    ctx->pc = 0x4C4444u;
    // 0x4c4444: 0x8e250290  lw          $a1, 0x290($s1)
    ctx->pc = 0x4c4444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x4c4448: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4c4448u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c444c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x4c444cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c4450: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4C4450u;
    {
        const bool branch_taken_0x4c4450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4450u;
        // 0x4c4454: 0xae20028c  sw          $zero, 0x28C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c4450) {
            ctx->pc = 0x4C4474u;
            goto label_4c4474;
        }
    }
    ctx->pc = 0x4C4458u;
    // 0x4c4458: 0x8e220294  lw          $v0, 0x294($s1)
    ctx->pc = 0x4c4458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x4c445c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x4c445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4c4460: 0xae250298  sw          $a1, 0x298($s1)
    ctx->pc = 0x4c4460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 5));
    // 0x4c4464: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x4c4464u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
    // 0x4c4468: 0xae240290  sw          $a0, 0x290($s1)
    ctx->pc = 0x4c4468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 4));
    // 0x4c446c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4C446Cu;
    {
        const bool branch_taken_0x4c446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C446Cu;
        // 0x4c4470: 0xae230294  sw          $v1, 0x294($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c446c) {
            ctx->pc = 0x4C4490u;
            goto label_4c4490;
        }
    }
    ctx->pc = 0x4C4474u;
label_4c4474:
    // 0x4c4474: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x4c4474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x4c4478: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4c4478u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4c447c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C447Cu;
    {
        const bool branch_taken_0x4c447c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c447c) {
            ctx->pc = 0x4C4480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C447Cu;
            // 0x4c4480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C4494u;
            goto label_4c4494;
        }
    }
    ctx->pc = 0x4C4484u;
    // 0x4c4484: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4c4488: 0xae240298  sw          $a0, 0x298($s1)
    ctx->pc = 0x4c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 4));
    // 0x4c448c: 0xae22029c  sw          $v0, 0x29C($s1)
    ctx->pc = 0x4c448cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 2));
label_4c4490:
    // 0x4c4490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c4490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c4494:
    // 0x4c4494: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x4c4494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x4c4498: 0xc13372a  jal         func_4CDCA8
    ctx->pc = 0x4C4498u;
    SET_GPR_U32(ctx, 31, 0x4C44A0u);
    ctx->pc = 0x4C449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4498u;
    // 0x4c449c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CDCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CDCA8u, 0x4C4498u, 0x4C44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C44A0u;
label_4c44a0:
    // 0x4c44a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x4c44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x4c44a4: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x4c44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x4c44a8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x4c44a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4c44ac: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x4c44acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
    // 0x4c44b0: 0x8e220314  lw          $v0, 0x314($s1)
    ctx->pc = 0x4c44b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 788)));
    // 0x4c44b4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x4c44b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x4c44b8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x4c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x4c44bc: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x4c44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x4c44c0: 0x8e2202bc  lw          $v0, 0x2BC($s1)
    ctx->pc = 0x4c44c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x4c44c4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x4c44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x4c44c8: 0x8e2302c0  lw          $v1, 0x2C0($s1)
    ctx->pc = 0x4c44c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x4c44cc: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x4c44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x4c44d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4c44d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c44d4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4c44d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x4c44d8: 0x8e230270  lw          $v1, 0x270($s1)
    ctx->pc = 0x4c44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x4c44dc: 0xc1334f4  jal         func_4CD3D0
    ctx->pc = 0x4C44DCu;
    SET_GPR_U32(ctx, 31, 0x4C44E4u);
    ctx->pc = 0x4C44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C44DCu;
    // 0x4c44e0: 0xae430024  sw          $v1, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD3D0u, 0x4C44DCu, 0x4C44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C44E4u;
label_4c44e4:
    // 0x4c44e4: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x4c44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x4c44e8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x4c44e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x4c44ec: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x4c44ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x4c44f0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c44f4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x4c44f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x4c44f8: 0x8e2202b8  lw          $v0, 0x2B8($s1)
    ctx->pc = 0x4c44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
    // 0x4c44fc: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4c44fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x4c4500: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x4c4500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x4c4504: 0xae430040  sw          $v1, 0x40($s2)
    ctx->pc = 0x4c4504u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 3));
    // 0x4c4508: 0x8e2202ac  lw          $v0, 0x2AC($s1)
    ctx->pc = 0x4c4508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x4c450c: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x4c450cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x4c4510: 0x8e2302b4  lw          $v1, 0x2B4($s1)
    ctx->pc = 0x4c4510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x4c4514: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x4c4514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x4c4518: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x4c4518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x4c451c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4c451cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4c4520: 0xae440068  sw          $a0, 0x68($s2)
    ctx->pc = 0x4c4520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 4));
    // 0x4c4524: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x4c4524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x4c4528: 0xae42006c  sw          $v0, 0x6C($s2)
    ctx->pc = 0x4c4528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 2));
    // 0x4c452c: 0x8e26013c  lw          $a2, 0x13C($s1)
    ctx->pc = 0x4c452cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x4c4530: 0x8e240134  lw          $a0, 0x134($s1)
    ctx->pc = 0x4c4530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4c4534: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4C4534u;
    SET_GPR_U32(ctx, 31, 0x4C453Cu);
    ctx->pc = 0x4C4538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4534u;
    // 0x4c4538: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C4534u, 0x4C453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C453Cu;
label_4c453c:
    // 0x4c453c: 0xae42004c  sw          $v0, 0x4C($s2)
    ctx->pc = 0x4c453cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x4c4540: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4c4540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4c4544: 0x8e25010c  lw          $a1, 0x10C($s1)
    ctx->pc = 0x4c4544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x4c4548: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x4c4548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x4c454c: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x4c454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x4c4550: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x4c4550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x4c4554: 0x8e230144  lw          $v1, 0x144($s1)
    ctx->pc = 0x4c4554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x4c4558: 0xae430044  sw          $v1, 0x44($s2)
    ctx->pc = 0x4c4558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
    // 0x4c455c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x4c455cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x4c4560: 0xae420048  sw          $v0, 0x48($s2)
    ctx->pc = 0x4c4560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x4c4564: 0x8e2302c0  lw          $v1, 0x2C0($s1)
    ctx->pc = 0x4c4564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x4c4568: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4c4568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c456c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c4570: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x4c4570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4c4574: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x4c4574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4c4578: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4c4578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4c457c: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x4c457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x4c4580: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x4c4580u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4c4584: 0x3012  mflo        $a2
    ctx->pc = 0x4c4584u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4c4588: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4C4588u;
    SET_GPR_U32(ctx, 31, 0x4C4590u);
    ctx->pc = 0x4C458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C4588u;
    // 0x4c458c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4C4588u, 0x4C4590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C4590u;
label_4c4590:
    // 0x4c4590: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x4c4590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x4c4594: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4c4594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4c4598: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x4c4598u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x4c459c: 0x8012  mflo        $s0
    ctx->pc = 0x4c459cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x4c45a0: 0xae500064  sw          $s0, 0x64($s2)
    ctx->pc = 0x4c45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 16));
    // 0x4c45a4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x4c45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x4c45a8: 0xae430074  sw          $v1, 0x74($s2)
    ctx->pc = 0x4c45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 3));
    // 0x4c45ac: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x4c45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x4c45b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4c45b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4c45b4: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x4c45b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
    // 0x4c45b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c45b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c45bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4c45bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4c45c0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4c45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4c45c4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x4c45c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x4c45c8: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x4c45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x4c45cc: 0xae430050  sw          $v1, 0x50($s2)
    ctx->pc = 0x4c45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
    // 0x4c45d0: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x4c45d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x4c45d4: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x4c45d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x4c45d8: 0x8e230294  lw          $v1, 0x294($s1)
    ctx->pc = 0x4c45d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x4c45dc: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x4c45dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x4c45e0: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x4c45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
    // 0x4c45e4: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x4c45e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
    // 0x4c45e8: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x4c45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x4c45ec: 0xae43006c  sw          $v1, 0x6C($s2)
    ctx->pc = 0x4c45ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 3));
    // 0x4c45f0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x4c45f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x4c45f4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x4c45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
label_4c45f8:
    // 0x4c45f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c45f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c45fc:
    // 0x4c45fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c45fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c4600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c4600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c4604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4c4604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c4608: 0x3e00008  jr          $ra
    ctx->pc = 0x4C4608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C4608u;
        // 0x4c460c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C4608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C4610u;
}
