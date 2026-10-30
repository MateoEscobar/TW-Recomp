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

// Function: sub_0032C440
// Address: 0x32c440 - 0x32c5f8
void sub_0032C440_0x32c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C440_0x32c440");
#endif

    switch (ctx->pc) {
        case 0x32c460u: goto label_32c460;
        case 0x32c480u: goto label_32c480;
        case 0x32c498u: goto label_32c498;
        case 0x32c4a4u: goto label_32c4a4;
        case 0x32c4e8u: goto label_32c4e8;
        case 0x32c4fcu: goto label_32c4fc;
        case 0x32c504u: goto label_32c504;
        case 0x32c520u: goto label_32c520;
        case 0x32c528u: goto label_32c528;
        case 0x32c534u: goto label_32c534;
        case 0x32c53cu: goto label_32c53c;
        case 0x32c54cu: goto label_32c54c;
        case 0x32c554u: goto label_32c554;
        case 0x32c564u: goto label_32c564;
        case 0x32c56cu: goto label_32c56c;
        case 0x32c58cu: goto label_32c58c;
        case 0x32c598u: goto label_32c598;
        case 0x32c5a4u: goto label_32c5a4;
        case 0x32c5acu: goto label_32c5ac;
        case 0x32c5b8u: goto label_32c5b8;
        case 0x32c5c4u: goto label_32c5c4;
        case 0x32c5d8u: goto label_32c5d8;
        default: break;
    }

    ctx->pc = 0x32c440u;

    // 0x32c440: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32c440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32c444: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32c448: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x32c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x32c44c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32c450: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32c454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c458: 0xc10d272  jal         func_4349C8
    ctx->pc = 0x32C458u;
    SET_GPR_U32(ctx, 31, 0x32C460u);
    ctx->pc = 0x32C45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C458u;
    // 0x32c45c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4349C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4349C8u, 0x32C458u, 0x32C460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C460u;
label_32c460:
    // 0x32c460: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x32c460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x32c464: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x32c464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x32c468: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x32c468u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x32c46c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C46Cu;
    {
        const bool branch_taken_0x32c46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c46c) {
            ctx->pc = 0x32C470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C46Cu;
            // 0x32c470: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C474u;
            goto label_32c474;
        }
    }
    ctx->pc = 0x32C474u;
label_32c474:
    // 0x32c474: 0x2010  mfhi        $a0
    ctx->pc = 0x32c474u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x32c478: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32C478u;
    SET_GPR_U32(ctx, 31, 0x32C480u);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32C478u, 0x32C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C480u;
label_32c480:
    // 0x32c480: 0x3405f800  ori         $a1, $zero, 0xF800
    ctx->pc = 0x32c480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x32c484: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x32c484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x32c488: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x32c488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x32c48c: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x32c48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x32c490: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32C490u;
    SET_GPR_U32(ctx, 31, 0x32C498u);
    ctx->pc = 0x32C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C490u;
    // 0x32c494: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32C490u, 0x32C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C498u;
label_32c498:
    // 0x32c498: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32c498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c49c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x32C49Cu;
    SET_GPR_U32(ctx, 31, 0x32C4A4u);
    ctx->pc = 0x32C4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C49Cu;
    // 0x32c4a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x32C49Cu, 0x32C4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4A4u;
label_32c4a4:
    // 0x32c4a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32c4a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c4ac: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x32C4ACu;
    {
        const bool branch_taken_0x32c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4ACu;
        // 0x32c4b0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4ac) {
            ctx->pc = 0x32C4F0u;
            goto label_32c4f0;
        }
    }
    ctx->pc = 0x32C4B4u;
    // 0x32c4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C4B4u;
    {
        const bool branch_taken_0x32c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4B4u;
        // 0x32c4b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4b4) {
            ctx->pc = 0x32C4CCu;
            goto label_32c4cc;
        }
    }
    ctx->pc = 0x32C4BCu;
    // 0x32c4bc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32C4BCu;
    {
        const bool branch_taken_0x32c4bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4BCu;
        // 0x32c4c0: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4bc) {
            ctx->pc = 0x32C4DCu;
            goto label_32c4dc;
        }
    }
    ctx->pc = 0x32C4C4u;
    // 0x32c4c4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x32C4C4u;
    {
        const bool branch_taken_0x32c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4C4u;
        // 0x32c4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4c4) {
            ctx->pc = 0x32C5D0u;
            goto label_32c5d0;
        }
    }
    ctx->pc = 0x32C4CCu;
label_32c4cc:
    // 0x32c4cc: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x32C4CCu;
    {
        const bool branch_taken_0x32c4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32c4cc) {
            ctx->pc = 0x32C4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C4CCu;
            // 0x32c4d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C544u;
            goto label_32c544;
        }
    }
    ctx->pc = 0x32C4D4u;
    // 0x32c4d4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x32C4D4u;
    {
        const bool branch_taken_0x32c4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4D4u;
        // 0x32c4d8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4d4) {
            ctx->pc = 0x32C5CCu;
            goto label_32c5cc;
        }
    }
    ctx->pc = 0x32C4DCu;
label_32c4dc:
    // 0x32c4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4e0: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C4E0u;
    SET_GPR_U32(ctx, 31, 0x32C4E8u);
    ctx->pc = 0x32C4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4E0u;
    // 0x32c4e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C4E0u, 0x32C4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4E8u;
label_32c4e8:
    // 0x32c4e8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x32C4E8u;
    {
        const bool branch_taken_0x32c4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4E8u;
        // 0x32c4ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c4e8) {
            ctx->pc = 0x32C5DCu;
            goto label_32c5dc;
        }
    }
    ctx->pc = 0x32C4F0u;
label_32c4f0:
    // 0x32c4f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c4f4: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C4F4u;
    SET_GPR_U32(ctx, 31, 0x32C4FCu);
    ctx->pc = 0x32C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4F4u;
    // 0x32c4f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C4F4u, 0x32C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4FCu;
label_32c4fc:
    // 0x32c4fc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C4FCu;
    SET_GPR_U32(ctx, 31, 0x32C504u);
    ctx->pc = 0x32C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4FCu;
    // 0x32c500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C4FCu, 0x32C504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C504u;
label_32c504:
    // 0x32c504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32c504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c508: 0x1e200005  bgtz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C508u;
    {
        const bool branch_taken_0x32c508 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x32C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C508u;
        // 0x32c50c: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c508) {
            ctx->pc = 0x32C520u;
            goto label_32c520;
        }
    }
    ctx->pc = 0x32C510u;
    // 0x32c510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c514: 0x24c658e0  addiu       $a2, $a2, 0x58E0
    ctx->pc = 0x32c514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22752));
    // 0x32c518: 0xc0c910e  jal         func_324438
    ctx->pc = 0x32C518u;
    SET_GPR_U32(ctx, 31, 0x32C520u);
    ctx->pc = 0x32C51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C518u;
    // 0x32c51c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x32C518u, 0x32C520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C520u;
label_32c520:
    // 0x32c520: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32C520u;
    SET_GPR_U32(ctx, 31, 0x32C528u);
    ctx->pc = 0x32C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C520u;
    // 0x32c524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32C520u, 0x32C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C528u;
label_32c528:
    // 0x32c528: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c52c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32C52Cu;
    SET_GPR_U32(ctx, 31, 0x32C534u);
    ctx->pc = 0x32C530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C52Cu;
    // 0x32c530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32C52Cu, 0x32C534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C534u;
label_32c534:
    // 0x32c534: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C534u;
    SET_GPR_U32(ctx, 31, 0x32C53Cu);
    ctx->pc = 0x32C538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C534u;
    // 0x32c538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C534u, 0x32C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C53Cu;
label_32c53c:
    // 0x32c53c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x32C53Cu;
    {
        const bool branch_taken_0x32c53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C53Cu;
        // 0x32c540: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c53c) {
            ctx->pc = 0x32C5B0u;
            goto label_32c5b0;
        }
    }
    ctx->pc = 0x32C544u;
label_32c544:
    // 0x32c544: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C544u;
    SET_GPR_U32(ctx, 31, 0x32C54Cu);
    ctx->pc = 0x32C548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C544u;
    // 0x32c548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C544u, 0x32C54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C54Cu;
label_32c54c:
    // 0x32c54c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C54Cu;
    SET_GPR_U32(ctx, 31, 0x32C554u);
    ctx->pc = 0x32C550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C54Cu;
    // 0x32c550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C54Cu, 0x32C554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C554u;
label_32c554:
    // 0x32c554: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32c554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c55c: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32C55Cu;
    SET_GPR_U32(ctx, 31, 0x32C564u);
    ctx->pc = 0x32C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C55Cu;
    // 0x32c560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32C55Cu, 0x32C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C564u;
label_32c564:
    // 0x32c564: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C564u;
    SET_GPR_U32(ctx, 31, 0x32C56Cu);
    ctx->pc = 0x32C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C564u;
    // 0x32c568: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C564u, 0x32C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C56Cu;
label_32c56c:
    // 0x32c56c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c570: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x32c570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x32c574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C574u;
    {
        const bool branch_taken_0x32c574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C574u;
        // 0x32c578: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c574) {
            ctx->pc = 0x32C58Cu;
            goto label_32c58c;
        }
    }
    ctx->pc = 0x32C57Cu;
    // 0x32c57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c580: 0x24c658e0  addiu       $a2, $a2, 0x58E0
    ctx->pc = 0x32c580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22752));
    // 0x32c584: 0xc0c910e  jal         func_324438
    ctx->pc = 0x32C584u;
    SET_GPR_U32(ctx, 31, 0x32C58Cu);
    ctx->pc = 0x32C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C584u;
    // 0x32c588: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324438u, 0x32C584u, 0x32C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C58Cu;
label_32c58c:
    // 0x32c58c: 0x2512023  subu        $a0, $s2, $s1
    ctx->pc = 0x32c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x32c590: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32C590u;
    SET_GPR_U32(ctx, 31, 0x32C598u);
    ctx->pc = 0x32C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C590u;
    // 0x32c594: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32C590u, 0x32C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C598u;
label_32c598:
    // 0x32c598: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32c598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c59c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x32C59Cu;
    SET_GPR_U32(ctx, 31, 0x32C5A4u);
    ctx->pc = 0x32C5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C59Cu;
    // 0x32c5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x32C59Cu, 0x32C5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5A4u;
label_32c5a4:
    // 0x32c5a4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32C5A4u;
    SET_GPR_U32(ctx, 31, 0x32C5ACu);
    ctx->pc = 0x32C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5A4u;
    // 0x32c5a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32C5A4u, 0x32C5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5ACu;
label_32c5ac:
    // 0x32c5ac: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x32c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32c5b0:
    // 0x32c5b0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x32C5B0u;
    SET_GPR_U32(ctx, 31, 0x32C5B8u);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x32C5B0u, 0x32C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5B8u;
label_32c5b8:
    // 0x32c5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c5bc: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x32C5BCu;
    SET_GPR_U32(ctx, 31, 0x32C5C4u);
    ctx->pc = 0x32C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5BCu;
    // 0x32c5c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x32C5BCu, 0x32C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5C4u;
label_32c5c4:
    // 0x32c5c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32C5C4u;
    {
        const bool branch_taken_0x32c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5C4u;
        // 0x32c5c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c5c4) {
            ctx->pc = 0x32C5DCu;
            goto label_32c5dc;
        }
    }
    ctx->pc = 0x32C5CCu;
label_32c5cc:
    // 0x32c5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c5d0:
    // 0x32c5d0: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x32C5D0u;
    SET_GPR_U32(ctx, 31, 0x32C5D8u);
    ctx->pc = 0x32C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5D0u;
    // 0x32c5d4: 0x24a558f8  addiu       $a1, $a1, 0x58F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x32C5D0u, 0x32C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5D8u;
label_32c5d8:
    // 0x32c5d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32c5d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32c5dc:
    // 0x32c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c5e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32c5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32c5e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32c5e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32c5e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x32c5e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32c5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x32C5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5F0u;
        // 0x32c5f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C5F8u;
}
