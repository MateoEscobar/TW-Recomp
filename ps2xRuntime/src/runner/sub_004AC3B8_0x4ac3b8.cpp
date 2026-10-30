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

// Function: sub_004AC3B8
// Address: 0x4ac3b8 - 0x4acc90
void sub_004AC3B8_0x4ac3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AC3B8_0x4ac3b8");
#endif

    switch (ctx->pc) {
        case 0x4ac420u: goto label_4ac420;
        case 0x4ac444u: goto label_4ac444;
        case 0x4ac468u: goto label_4ac468;
        case 0x4ac4a8u: goto label_4ac4a8;
        case 0x4ac4dcu: goto label_4ac4dc;
        case 0x4ac4ecu: goto label_4ac4ec;
        case 0x4ac510u: goto label_4ac510;
        case 0x4ac534u: goto label_4ac534;
        case 0x4ac570u: goto label_4ac570;
        case 0x4ac5bcu: goto label_4ac5bc;
        case 0x4ac5d8u: goto label_4ac5d8;
        case 0x4ac5e8u: goto label_4ac5e8;
        case 0x4ac67cu: goto label_4ac67c;
        case 0x4ac6dcu: goto label_4ac6dc;
        case 0x4ac73cu: goto label_4ac73c;
        case 0x4ac79cu: goto label_4ac79c;
        case 0x4ac7fcu: goto label_4ac7fc;
        case 0x4ac85cu: goto label_4ac85c;
        case 0x4ac8bcu: goto label_4ac8bc;
        case 0x4ac91cu: goto label_4ac91c;
        case 0x4ac97cu: goto label_4ac97c;
        case 0x4aca00u: goto label_4aca00;
        case 0x4aca24u: goto label_4aca24;
        case 0x4aca40u: goto label_4aca40;
        case 0x4acaa8u: goto label_4acaa8;
        case 0x4acaccu: goto label_4acacc;
        case 0x4acae8u: goto label_4acae8;
        case 0x4acb48u: goto label_4acb48;
        case 0x4acb6cu: goto label_4acb6c;
        case 0x4acb88u: goto label_4acb88;
        case 0x4acbf0u: goto label_4acbf0;
        case 0x4acc14u: goto label_4acc14;
        case 0x4acc1cu: goto label_4acc1c;
        case 0x4acc40u: goto label_4acc40;
        case 0x4acc48u: goto label_4acc48;
        case 0x4acc58u: goto label_4acc58;
        default: break;
    }

    ctx->pc = 0x4ac3b8u;

label_4ac3b8:
    // 0x4ac3b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4ac3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4ac3bc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ac3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ac3c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ac3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ac3c4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4ac3c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac3c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ac3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ac3cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ac3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac3d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ac3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4ac3d4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4ac3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4ac3d8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x4ac3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x4ac3dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4ac3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4ac3e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4ac3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4ac3e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4ac3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4ac3e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ac3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ac3ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac3f0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac3f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC3F4u;
    {
        const bool branch_taken_0x4ac3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC3F4u;
        // 0x4ac3f8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac3f4) {
            ctx->pc = 0x4AC40Cu;
            goto label_4ac40c;
        }
    }
    ctx->pc = 0x4AC3FCu;
    // 0x4ac3fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ac3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ac400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ac400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac404: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC404u;
    {
        const bool branch_taken_0x4ac404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC404u;
        // 0x4ac408: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac404) {
            ctx->pc = 0x4AC448u;
            goto label_4ac448;
        }
    }
    ctx->pc = 0x4AC40Cu;
label_4ac40c:
    // 0x4ac40c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ac40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ac410: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC410u;
    {
        const bool branch_taken_0x4ac410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac410) {
            ctx->pc = 0x4AC414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC410u;
            // 0x4ac414: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC428u;
            goto label_4ac428;
        }
    }
    ctx->pc = 0x4AC418u;
    // 0x4ac418: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AC418u;
    SET_GPR_U32(ctx, 31, 0x4AC420u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AC418u, 0x4AC420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC420u;
label_4ac420:
    // 0x4ac420: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4ac420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac424: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ac424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4ac428:
    // 0x4ac428: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ac428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ac42c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ac42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ac430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4ac430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ac434: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC434u;
    {
        const bool branch_taken_0x4ac434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC434u;
        // 0x4ac438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac434) {
            ctx->pc = 0x4AC448u;
            goto label_4ac448;
        }
    }
    ctx->pc = 0x4AC43Cu;
    // 0x4ac43c: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4AC43Cu;
    SET_GPR_U32(ctx, 31, 0x4AC444u);
    ctx->pc = 0x4AC440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC43Cu;
    // 0x4ac440: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4AC43Cu, 0x4AC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC444u;
label_4ac444:
    // 0x4ac444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ac444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac448:
    // 0x4ac448: 0x10800076  beqz        $a0, . + 4 + (0x76 << 2)
    ctx->pc = 0x4AC448u;
    {
        const bool branch_taken_0x4ac448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC448u;
        // 0x4ac44c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac448) {
            ctx->pc = 0x4AC624u;
            goto label_4ac624;
        }
    }
    ctx->pc = 0x4AC450u;
    // 0x4ac450: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ac450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac454: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x4ac454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4ac458: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4ac458u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac45c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4ac45cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ac460: 0xc12af22  jal         func_4ABC88
    ctx->pc = 0x4AC460u;
    SET_GPR_U32(ctx, 31, 0x4AC468u);
    ctx->pc = 0x4AC464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC460u;
    // 0x4ac464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABC88u, 0x4AC460u, 0x4AC468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC468u;
label_4ac468:
    // 0x4ac468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac46c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ac46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ac470: 0x10a20067  beq         $a1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x4AC470u;
    {
        const bool branch_taken_0x4ac470 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC470u;
        // 0x4ac474: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac470) {
            ctx->pc = 0x4AC610u;
            goto label_4ac610;
        }
    }
    ctx->pc = 0x4AC478u;
    // 0x4ac478: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC478u;
    {
        const bool branch_taken_0x4ac478 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AC47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC478u;
        // 0x4ac47c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac478) {
            ctx->pc = 0x4AC488u;
            goto label_4ac488;
        }
    }
    ctx->pc = 0x4AC480u;
    // 0x4ac480: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC480u;
    {
        const bool branch_taken_0x4ac480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC480u;
        // 0x4ac484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac480) {
            ctx->pc = 0x4AC4A0u;
            goto label_4ac4a0;
        }
    }
    ctx->pc = 0x4AC488u;
label_4ac488:
    // 0x4ac488: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x4ac488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x4ac48c: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC48Cu;
    {
        const bool branch_taken_0x4ac48c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ac48c) {
            ctx->pc = 0x4AC490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC48Cu;
            // 0x4ac490: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC4ACu;
            goto label_4ac4ac;
        }
    }
    ctx->pc = 0x4AC494u;
    // 0x4ac494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ac494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ac498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac49c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ac49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ac4a0:
    // 0x4ac4a0: 0xc12af22  jal         func_4ABC88
    ctx->pc = 0x4AC4A0u;
    SET_GPR_U32(ctx, 31, 0x4AC4A8u);
    ctx->pc = 0x4AC4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC4A0u;
    // 0x4ac4a4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABC88u, 0x4AC4A0u, 0x4AC4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC4A8u;
label_4ac4a8:
    // 0x4ac4a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4ac4ac:
    // 0x4ac4ac: 0x50b00059  beql        $a1, $s0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4AC4ACu;
    {
        const bool branch_taken_0x4ac4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x4ac4ac) {
            ctx->pc = 0x4AC4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC4ACu;
            // 0x4ac4b0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC614u;
            goto label_4ac614;
        }
    }
    ctx->pc = 0x4AC4B4u;
    // 0x4ac4b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4ac4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac4b8: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x4ac4b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x4ac4bc: 0x30630070  andi        $v1, $v1, 0x70
    ctx->pc = 0x4ac4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)112);
    // 0x4ac4c0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4AC4C0u;
    {
        const bool branch_taken_0x4ac4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4C0u;
        // 0x4ac4c4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4c0) {
            ctx->pc = 0x4AC53Cu;
            goto label_4ac53c;
        }
    }
    ctx->pc = 0x4AC4C8u;
    // 0x4ac4c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4ac4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4ac4cc: 0x54a20022  bnel        $a1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4AC4CCu;
    {
        const bool branch_taken_0x4ac4cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ac4cc) {
            ctx->pc = 0x4AC4D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC4CCu;
            // 0x4ac4d0: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC558u;
            goto label_4ac558;
        }
    }
    ctx->pc = 0x4AC4D4u;
    // 0x4ac4d4: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AC4D4u;
    SET_GPR_U32(ctx, 31, 0x4AC4DCu);
    ctx->pc = 0x4AC4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC4D4u;
    // 0x4ac4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AC4D4u, 0x4AC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC4DCu;
label_4ac4dc:
    // 0x4ac4dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac4e0: 0x14b00004  bne         $a1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AC4E0u;
    {
        const bool branch_taken_0x4ac4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 16));
        ctx->pc = 0x4AC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4E0u;
        // 0x4ac4e4: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4e0) {
            ctx->pc = 0x4AC4F4u;
            goto label_4ac4f4;
        }
    }
    ctx->pc = 0x4AC4E8u;
    // 0x4ac4e8: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x4ac4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_4ac4ec:
    // 0x4ac4ec: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x4AC4ECu;
    {
        const bool branch_taken_0x4ac4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4ECu;
        // 0x4ac4f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4ec) {
            ctx->pc = 0x4AC624u;
            goto label_4ac624;
        }
    }
    ctx->pc = 0x4AC4F4u;
label_4ac4f4:
    // 0x4ac4f4: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC4F4u;
    {
        const bool branch_taken_0x4ac4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4F4u;
        // 0x4ac4f8: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4f4) {
            ctx->pc = 0x4AC504u;
            goto label_4ac504;
        }
    }
    ctx->pc = 0x4AC4FCu;
    // 0x4ac4fc: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AC4FCu;
    {
        const bool branch_taken_0x4ac4fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AC500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC4FCu;
        // 0x4ac500: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac4fc) {
            ctx->pc = 0x4AC524u;
            goto label_4ac524;
        }
    }
    ctx->pc = 0x4AC504u;
label_4ac504:
    // 0x4ac504: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac508: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AC508u;
    SET_GPR_U32(ctx, 31, 0x4AC510u);
    ctx->pc = 0x4AC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC508u;
    // 0x4ac50c: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AC508u, 0x4AC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC510u;
label_4ac510:
    // 0x4ac510: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac514: 0x50b0003f  beql        $a1, $s0, . + 4 + (0x3F << 2)
    ctx->pc = 0x4AC514u;
    {
        const bool branch_taken_0x4ac514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x4ac514) {
            ctx->pc = 0x4AC518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC514u;
            // 0x4ac518: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC614u;
            goto label_4ac614;
        }
    }
    ctx->pc = 0x4AC51Cu;
    // 0x4ac51c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AC51Cu;
    {
        const bool branch_taken_0x4ac51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC51Cu;
        // 0x4ac520: 0xfe800000  sd          $zero, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac51c) {
            ctx->pc = 0x4AC558u;
            goto label_4ac558;
        }
    }
    ctx->pc = 0x4AC524u;
label_4ac524:
    // 0x4ac524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac528: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x4ac528u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x4ac52c: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4AC52Cu;
    SET_GPR_U32(ctx, 31, 0x4AC534u);
    ctx->pc = 0x4AC530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC52Cu;
    // 0x4ac530: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4AC52Cu, 0x4AC534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC534u;
label_4ac534:
    // 0x4ac534: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC534u;
    {
        const bool branch_taken_0x4ac534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC534u;
        // 0x4ac538: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac534) {
            ctx->pc = 0x4AC554u;
            goto label_4ac554;
        }
    }
    ctx->pc = 0x4AC53Cu;
label_4ac53c:
    // 0x4ac53c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC53Cu;
    {
        const bool branch_taken_0x4ac53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC53Cu;
        // 0x4ac540: 0x38630020  xori        $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac53c) {
            ctx->pc = 0x4AC54Cu;
            goto label_4ac54c;
        }
    }
    ctx->pc = 0x4AC544u;
    // 0x4ac544: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC544u;
    {
        const bool branch_taken_0x4ac544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC544u;
        // 0x4ac548: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac544) {
            ctx->pc = 0x4AC554u;
            goto label_4ac554;
        }
    }
    ctx->pc = 0x4AC54Cu;
label_4ac54c:
    // 0x4ac54c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4ac54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ac550: 0x43980a  movz        $s3, $v0, $v1
    ctx->pc = 0x4ac550u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_4ac554:
    // 0x4ac554: 0xfe800000  sd          $zero, 0x0($s4)
    ctx->pc = 0x4ac554u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 0));
label_4ac558:
    // 0x4ac558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4ac558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ac55c: 0x10a2ffe3  beq         $a1, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4AC55Cu;
    {
        const bool branch_taken_0x4ac55c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC55Cu;
        // 0x4ac560: 0x241e0005  addiu       $fp, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac55c) {
            ctx->pc = 0x4AC4ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ac4ec;
        }
    }
    ctx->pc = 0x4AC564u;
    // 0x4ac564: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x4ac564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac568: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x4ac568u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ac56c: 0x24a3ffd0  addiu       $v1, $a1, -0x30
    ctx->pc = 0x4ac56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_4ac570:
    // 0x4ac570: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x4ac570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x4ac574: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AC574u;
    {
        const bool branch_taken_0x4ac574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC574u;
        // 0x4ac578: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac574) {
            ctx->pc = 0x4AC5A0u;
            goto label_4ac5a0;
        }
    }
    ctx->pc = 0x4AC57Cu;
    // 0x4ac57c: 0x24a2ffbf  addiu       $v0, $a1, -0x41
    ctx->pc = 0x4ac57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967231));
    // 0x4ac580: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x4ac580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4ac584: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AC584u;
    {
        const bool branch_taken_0x4ac584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC584u;
        // 0x4ac588: 0x24b0ffc9  addiu       $s0, $a1, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac584) {
            ctx->pc = 0x4AC5A0u;
            goto label_4ac5a0;
        }
    }
    ctx->pc = 0x4AC58Cu;
    // 0x4ac58c: 0x24a3ff9f  addiu       $v1, $a1, -0x61
    ctx->pc = 0x4ac58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967199));
    // 0x4ac590: 0x241003e7  addiu       $s0, $zero, 0x3E7
    ctx->pc = 0x4ac590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x4ac594: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x4ac594u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ac598: 0x24a2ffa9  addiu       $v0, $a1, -0x57
    ctx->pc = 0x4ac598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967209));
    // 0x4ac59c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x4ac59cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_4ac5a0:
    // 0x4ac5a0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x4ac5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4ac5a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AC5A4u;
    {
        const bool branch_taken_0x4ac5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ac5a4) {
            ctx->pc = 0x4AC5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC5A4u;
            // 0x4ac5a8: 0xde850000  ld          $a1, 0x0($s4) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AC5CCu;
            goto label_4ac5cc;
        }
    }
    ctx->pc = 0x4AC5ACu;
    // 0x4ac5ac: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x4ac5acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x4ac5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac5b4: 0xc12bed0  jal         func_4AFB40
    ctx->pc = 0x4AC5B4u;
    SET_GPR_U32(ctx, 31, 0x4AC5BCu);
    ctx->pc = 0x4AC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5B4u;
    // 0x4ac5b8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB40u, 0x4AC5B4u, 0x4AC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5BCu;
label_4ac5bc:
    // 0x4ac5bc: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
    ctx->pc = 0x4AC5BCu;
    {
        const bool branch_taken_0x4ac5bc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5BCu;
        // 0x4ac5c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5bc) {
            ctx->pc = 0x4AC5FCu;
            goto label_4ac5fc;
        }
    }
    ctx->pc = 0x4AC5C4u;
    // 0x4ac5c4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4AC5C4u;
    {
        const bool branch_taken_0x4ac5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5C4u;
        // 0x4ac5c8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5c4) {
            ctx->pc = 0x4AC628u;
            goto label_4ac628;
        }
    }
    ctx->pc = 0x4AC5CCu;
label_4ac5cc:
    // 0x4ac5cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ac5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac5d0: 0xc10b602  jal         func_42D808
    ctx->pc = 0x4AC5D0u;
    SET_GPR_U32(ctx, 31, 0x4AC5D8u);
    ctx->pc = 0x4AC5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5D0u;
    // 0x4ac5d4: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x4AC5D0u, 0x4AC5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5D8u;
label_4ac5d8:
    // 0x4ac5d8: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x4ac5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x4ac5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ac5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac5e0: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4AC5E0u;
    SET_GPR_U32(ctx, 31, 0x4AC5E8u);
    ctx->pc = 0x4AC5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC5E0u;
    // 0x4ac5e4: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4AC5E0u, 0x4AC5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AC5E8u;
label_4ac5e8:
    // 0x4ac5e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4ac5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac5ec: 0x14b7ffe0  bne         $a1, $s7, . + 4 + (-0x20 << 2)
    ctx->pc = 0x4AC5ECu;
    {
        const bool branch_taken_0x4ac5ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        ctx->pc = 0x4AC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5ECu;
        // 0x4ac5f0: 0x24a3ffd0  addiu       $v1, $a1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5ec) {
            ctx->pc = 0x4AC570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ac570;
        }
    }
    ctx->pc = 0x4AC5F4u;
    // 0x4ac5f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4AC5F4u;
    {
        const bool branch_taken_0x4ac5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC5F4u;
        // 0x4ac5f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac5f4) {
            ctx->pc = 0x4AC624u;
            goto label_4ac624;
        }
    }
    ctx->pc = 0x4AC5FCu;
label_4ac5fc:
    // 0x4ac5fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ac5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ac600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac604: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4ac604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ac608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC608u;
    {
        const bool branch_taken_0x4ac608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC608u;
        // 0x4ac60c: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac608) {
            ctx->pc = 0x4AC620u;
            goto label_4ac620;
        }
    }
    ctx->pc = 0x4AC610u;
label_4ac610:
    // 0x4ac610: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4ac610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4ac614:
    // 0x4ac614: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ac614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac618: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x4ac618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ac61c: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x4ac61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_4ac620:
    // 0x4ac620: 0xa083001a  sb          $v1, 0x1A($a0)
    ctx->pc = 0x4ac620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
label_4ac624:
    // 0x4ac624: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4ac624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4ac628:
    // 0x4ac628: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4ac628u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4ac62c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x4ac62cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ac630: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4ac630u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ac634: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4ac634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ac638: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ac638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ac63c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4ac63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4ac640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ac644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ac648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac64c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC64Cu;
        // 0x4ac650: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC654u;
    // 0x4ac654: 0x0  nop
    ctx->pc = 0x4ac654u;
    // NOP
    // 0x4ac658: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac65c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac660: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac664: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac668: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac66c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac670: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac674: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC674u;
    SET_GPR_U32(ctx, 31, 0x4AC67Cu);
    ctx->pc = 0x4AC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC674u;
    // 0x4ac678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC67Cu;
label_4ac67c:
    // 0x4ac67c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC67Cu;
    {
        const bool branch_taken_0x4ac67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC67Cu;
        // 0x4ac680: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac67c) {
            ctx->pc = 0x4AC69Cu;
            goto label_4ac69c;
        }
    }
    ctx->pc = 0x4AC684u;
    // 0x4ac684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC684u;
    {
        const bool branch_taken_0x4ac684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC684u;
        // 0x4ac688: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac684) {
            ctx->pc = 0x4AC694u;
            goto label_4ac694;
        }
    }
    ctx->pc = 0x4AC68Cu;
    // 0x4ac68c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac690: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac694:
    // 0x4ac694: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4ac694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac698: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ac698u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ac69c:
    // 0x4ac69c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac6a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac6a4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac6a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac6a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac6a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC6ACu;
        // 0x4ac6b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC6B4u;
    // 0x4ac6b4: 0x0  nop
    ctx->pc = 0x4ac6b4u;
    // NOP
    // 0x4ac6b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac6bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac6c0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac6c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac6c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac6cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac6d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac6d4: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC6D4u;
    SET_GPR_U32(ctx, 31, 0x4AC6DCu);
    ctx->pc = 0x4AC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC6D4u;
    // 0x4ac6d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC6DCu;
label_4ac6dc:
    // 0x4ac6dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC6DCu;
    {
        const bool branch_taken_0x4ac6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC6DCu;
        // 0x4ac6e0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac6dc) {
            ctx->pc = 0x4AC6FCu;
            goto label_4ac6fc;
        }
    }
    ctx->pc = 0x4AC6E4u;
    // 0x4ac6e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC6E4u;
    {
        const bool branch_taken_0x4ac6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC6E4u;
        // 0x4ac6e8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac6e4) {
            ctx->pc = 0x4AC6F4u;
            goto label_4ac6f4;
        }
    }
    ctx->pc = 0x4AC6ECu;
    // 0x4ac6ec: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac6f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac6f4:
    // 0x4ac6f4: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4ac6f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac6f8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4ac6f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ac6fc:
    // 0x4ac6fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac6fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac700: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac704: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac708: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac70c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC70Cu;
        // 0x4ac710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC714u;
    // 0x4ac714: 0x0  nop
    ctx->pc = 0x4ac714u;
    // NOP
    // 0x4ac718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac71c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac720: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac720u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac724: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac728: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac730: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac734: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC734u;
    SET_GPR_U32(ctx, 31, 0x4AC73Cu);
    ctx->pc = 0x4AC738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC734u;
    // 0x4ac738: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC73Cu;
label_4ac73c:
    // 0x4ac73c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC73Cu;
    {
        const bool branch_taken_0x4ac73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC73Cu;
        // 0x4ac740: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac73c) {
            ctx->pc = 0x4AC75Cu;
            goto label_4ac75c;
        }
    }
    ctx->pc = 0x4AC744u;
    // 0x4ac744: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC744u;
    {
        const bool branch_taken_0x4ac744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC744u;
        // 0x4ac748: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac744) {
            ctx->pc = 0x4AC754u;
            goto label_4ac754;
        }
    }
    ctx->pc = 0x4AC74Cu;
    // 0x4ac74c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac750: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac754:
    // 0x4ac754: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ac754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac758: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac75c:
    // 0x4ac75c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac75cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac760: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac764: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac768: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac76c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC76Cu;
        // 0x4ac770: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC774u;
    // 0x4ac774: 0x0  nop
    ctx->pc = 0x4ac774u;
    // NOP
    // 0x4ac778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac77c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac780: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac784: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac788: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac788u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac790: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac794: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC794u;
    SET_GPR_U32(ctx, 31, 0x4AC79Cu);
    ctx->pc = 0x4AC798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC794u;
    // 0x4ac798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC79Cu;
label_4ac79c:
    // 0x4ac79c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC79Cu;
    {
        const bool branch_taken_0x4ac79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC79Cu;
        // 0x4ac7a0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac79c) {
            ctx->pc = 0x4AC7BCu;
            goto label_4ac7bc;
        }
    }
    ctx->pc = 0x4AC7A4u;
    // 0x4ac7a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC7A4u;
    {
        const bool branch_taken_0x4ac7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7A4u;
        // 0x4ac7a8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7a4) {
            ctx->pc = 0x4AC7B4u;
            goto label_4ac7b4;
        }
    }
    ctx->pc = 0x4AC7ACu;
    // 0x4ac7ac: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac7b0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac7b4:
    // 0x4ac7b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ac7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac7b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac7bc:
    // 0x4ac7bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac7bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac7c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac7c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac7c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac7c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7CCu;
        // 0x4ac7d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC7D4u;
    // 0x4ac7d4: 0x0  nop
    ctx->pc = 0x4ac7d4u;
    // NOP
    // 0x4ac7d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac7d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac7dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac7e0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac7e4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac7e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac7e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac7f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac7f4: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC7F4u;
    SET_GPR_U32(ctx, 31, 0x4AC7FCu);
    ctx->pc = 0x4AC7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC7F4u;
    // 0x4ac7f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC7FCu;
label_4ac7fc:
    // 0x4ac7fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC7FCu;
    {
        const bool branch_taken_0x4ac7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC7FCu;
        // 0x4ac800: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac7fc) {
            ctx->pc = 0x4AC81Cu;
            goto label_4ac81c;
        }
    }
    ctx->pc = 0x4AC804u;
    // 0x4ac804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC804u;
    {
        const bool branch_taken_0x4ac804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC804u;
        // 0x4ac808: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac804) {
            ctx->pc = 0x4AC814u;
            goto label_4ac814;
        }
    }
    ctx->pc = 0x4AC80Cu;
    // 0x4ac80c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac810: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac814:
    // 0x4ac814: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4ac814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac818: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x4ac818u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_4ac81c:
    // 0x4ac81c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac81cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac820: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac824: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac828: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac82c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC82Cu;
        // 0x4ac830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC834u;
    // 0x4ac834: 0x0  nop
    ctx->pc = 0x4ac834u;
    // NOP
    // 0x4ac838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac83c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac840: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac844: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac848: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac848u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac84c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac850: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac854: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC854u;
    SET_GPR_U32(ctx, 31, 0x4AC85Cu);
    ctx->pc = 0x4AC858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC854u;
    // 0x4ac858: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC85Cu;
label_4ac85c:
    // 0x4ac85c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC85Cu;
    {
        const bool branch_taken_0x4ac85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC85Cu;
        // 0x4ac860: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac85c) {
            ctx->pc = 0x4AC87Cu;
            goto label_4ac87c;
        }
    }
    ctx->pc = 0x4AC864u;
    // 0x4ac864: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC864u;
    {
        const bool branch_taken_0x4ac864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC864u;
        // 0x4ac868: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac864) {
            ctx->pc = 0x4AC874u;
            goto label_4ac874;
        }
    }
    ctx->pc = 0x4AC86Cu;
    // 0x4ac86c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac870: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac874:
    // 0x4ac874: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4ac874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac878: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x4ac878u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_4ac87c:
    // 0x4ac87c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac884: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac888: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac88c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC88Cu;
        // 0x4ac890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC894u;
    // 0x4ac894: 0x0  nop
    ctx->pc = 0x4ac894u;
    // NOP
    // 0x4ac898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac89c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac8a0: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac8a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac8a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac8a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac8b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac8b4: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC8B4u;
    SET_GPR_U32(ctx, 31, 0x4AC8BCu);
    ctx->pc = 0x4AC8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC8B4u;
    // 0x4ac8b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC8BCu;
label_4ac8bc:
    // 0x4ac8bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC8BCu;
    {
        const bool branch_taken_0x4ac8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8BCu;
        // 0x4ac8c0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8bc) {
            ctx->pc = 0x4AC8DCu;
            goto label_4ac8dc;
        }
    }
    ctx->pc = 0x4AC8C4u;
    // 0x4ac8c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC8C4u;
    {
        const bool branch_taken_0x4ac8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8C4u;
        // 0x4ac8c8: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac8c4) {
            ctx->pc = 0x4AC8D4u;
            goto label_4ac8d4;
        }
    }
    ctx->pc = 0x4AC8CCu;
    // 0x4ac8cc: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac8d0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac8d4:
    // 0x4ac8d4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4ac8d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac8d8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x4ac8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_4ac8dc:
    // 0x4ac8dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac8e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac8e4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac8e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC8ECu;
        // 0x4ac8f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC8F4u;
    // 0x4ac8f4: 0x0  nop
    ctx->pc = 0x4ac8f4u;
    // NOP
    // 0x4ac8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac8fc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac900: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac904: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac910: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac914: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC914u;
    SET_GPR_U32(ctx, 31, 0x4AC91Cu);
    ctx->pc = 0x4AC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC914u;
    // 0x4ac918: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC91Cu;
label_4ac91c:
    // 0x4ac91c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AC91Cu;
    {
        const bool branch_taken_0x4ac91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC91Cu;
        // 0x4ac920: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac91c) {
            ctx->pc = 0x4AC93Cu;
            goto label_4ac93c;
        }
    }
    ctx->pc = 0x4AC924u;
    // 0x4ac924: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC924u;
    {
        const bool branch_taken_0x4ac924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC924u;
        // 0x4ac928: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac924) {
            ctx->pc = 0x4AC934u;
            goto label_4ac934;
        }
    }
    ctx->pc = 0x4AC92Cu;
    // 0x4ac92c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac930: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac934:
    // 0x4ac934: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4ac934u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac938: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x4ac938u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_4ac93c:
    // 0x4ac93c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac940: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac944: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac948: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac94c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC94Cu;
        // 0x4ac950: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC954u;
    // 0x4ac954: 0x0  nop
    ctx->pc = 0x4ac954u;
    // NOP
    // 0x4ac958: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac95c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac960: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x4ac960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x4ac964: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac968: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ac968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac96c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac970: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac974: 0xc12b0ee  jal         func_4AC3B8
    ctx->pc = 0x4AC974u;
    SET_GPR_U32(ctx, 31, 0x4AC97Cu);
    ctx->pc = 0x4AC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AC974u;
    // 0x4ac978: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AC3B8u;
    goto label_4ac3b8;
    ctx->pc = 0x4AC97Cu;
label_4ac97c:
    // 0x4ac97c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AC97Cu;
    {
        const bool branch_taken_0x4ac97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC97Cu;
        // 0x4ac980: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac97c) {
            ctx->pc = 0x4AC9A0u;
            goto label_4ac9a0;
        }
    }
    ctx->pc = 0x4AC984u;
    // 0x4ac984: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AC984u;
    {
        const bool branch_taken_0x4ac984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC984u;
        // 0x4ac988: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac984) {
            ctx->pc = 0x4AC994u;
            goto label_4ac994;
        }
    }
    ctx->pc = 0x4AC98Cu;
    // 0x4ac98c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x4ac98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x4ac990: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x4ac990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_4ac994:
    // 0x4ac994: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x4ac994u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ac998: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x4ac998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4ac99c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ac99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4ac9a0:
    // 0x4ac9a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ac9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac9a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ac9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ac9a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4ac9a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ac9ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ac9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ac9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AC9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9B0u;
        // 0x4ac9b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AC9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AC9B8u;
    // 0x4ac9b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ac9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ac9bc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4ac9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4ac9c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ac9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ac9c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ac9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ac9c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ac9c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac9cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ac9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ac9d0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4ac9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4ac9d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC9D4u;
    {
        const bool branch_taken_0x4ac9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9D4u;
        // 0x4ac9d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9d4) {
            ctx->pc = 0x4AC9ECu;
            goto label_4ac9ec;
        }
    }
    ctx->pc = 0x4AC9DCu;
    // 0x4ac9dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4ac9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4ac9e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ac9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ac9e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4AC9E4u;
    {
        const bool branch_taken_0x4ac9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AC9E4u;
        // 0x4ac9e8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ac9e4) {
            ctx->pc = 0x4ACA28u;
            goto label_4aca28;
        }
    }
    ctx->pc = 0x4AC9ECu;
label_4ac9ec:
    // 0x4ac9ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4ac9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ac9f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AC9F0u;
    {
        const bool branch_taken_0x4ac9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ac9f0) {
            ctx->pc = 0x4AC9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AC9F0u;
            // 0x4ac9f4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACA08u;
            goto label_4aca08;
        }
    }
    ctx->pc = 0x4AC9F8u;
    // 0x4ac9f8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AC9F8u;
    SET_GPR_U32(ctx, 31, 0x4ACA00u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AC9F8u, 0x4ACA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA00u;
label_4aca00:
    // 0x4aca00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4aca00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aca04: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4aca04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4aca08:
    // 0x4aca08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4aca0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4aca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4aca10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4aca10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4aca14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACA14u;
    {
        const bool branch_taken_0x4aca14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA14u;
        // 0x4aca18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aca14) {
            ctx->pc = 0x4ACA28u;
            goto label_4aca28;
        }
    }
    ctx->pc = 0x4ACA1Cu;
    // 0x4aca1c: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4ACA1Cu;
    SET_GPR_U32(ctx, 31, 0x4ACA24u);
    ctx->pc = 0x4ACA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACA1Cu;
    // 0x4aca20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4ACA1Cu, 0x4ACA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA24u;
label_4aca24:
    // 0x4aca24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4aca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4aca28:
    // 0x4aca28: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ACA28u;
    {
        const bool branch_taken_0x4aca28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA28u;
        // 0x4aca2c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aca28) {
            ctx->pc = 0x4ACA48u;
            goto label_4aca48;
        }
    }
    ctx->pc = 0x4ACA30u;
    // 0x4aca30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4aca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca34: 0x24a50410  addiu       $a1, $a1, 0x410
    ctx->pc = 0x4aca34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
    // 0x4aca38: 0xc12bd2a  jal         func_4AF4A8
    ctx->pc = 0x4ACA38u;
    SET_GPR_U32(ctx, 31, 0x4ACA40u);
    ctx->pc = 0x4ACA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACA38u;
    // 0x4aca3c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF4A8u, 0x4ACA38u, 0x4ACA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA40u;
label_4aca40:
    // 0x4aca40: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x4aca40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aca44: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x4aca44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_4aca48:
    // 0x4aca48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aca48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aca50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4aca50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aca54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4aca54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aca58: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA58u;
        // 0x4aca5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACA60u;
    // 0x4aca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aca64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4aca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4aca68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4aca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4aca6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4aca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4aca70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4aca74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4aca78: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4aca78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4aca7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACA7Cu;
    {
        const bool branch_taken_0x4aca7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA7Cu;
        // 0x4aca80: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aca7c) {
            ctx->pc = 0x4ACA94u;
            goto label_4aca94;
        }
    }
    ctx->pc = 0x4ACA84u;
    // 0x4aca84: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4aca84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4aca88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4aca88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca8c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4ACA8Cu;
    {
        const bool branch_taken_0x4aca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA8Cu;
        // 0x4aca90: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aca8c) {
            ctx->pc = 0x4ACAD0u;
            goto label_4acad0;
        }
    }
    ctx->pc = 0x4ACA94u;
label_4aca94:
    // 0x4aca94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4aca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4aca98: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACA98u;
    {
        const bool branch_taken_0x4aca98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aca98) {
            ctx->pc = 0x4ACA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACA98u;
            // 0x4aca9c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACAB0u;
            goto label_4acab0;
        }
    }
    ctx->pc = 0x4ACAA0u;
    // 0x4acaa0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ACAA0u;
    SET_GPR_U32(ctx, 31, 0x4ACAA8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ACAA0u, 0x4ACAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACAA8u;
label_4acaa8:
    // 0x4acaa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acaac: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4acaacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4acab0:
    // 0x4acab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4acab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4acab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4acab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4acab8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4acab8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4acabc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACABCu;
    {
        const bool branch_taken_0x4acabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACABCu;
        // 0x4acac0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acabc) {
            ctx->pc = 0x4ACAD0u;
            goto label_4acad0;
        }
    }
    ctx->pc = 0x4ACAC4u;
    // 0x4acac4: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4ACAC4u;
    SET_GPR_U32(ctx, 31, 0x4ACACCu);
    ctx->pc = 0x4ACAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACAC4u;
    // 0x4acac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4ACAC4u, 0x4ACACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACACCu;
label_4acacc:
    // 0x4acacc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4acaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4acad0:
    // 0x4acad0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACAD0u;
    {
        const bool branch_taken_0x4acad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACAD0u;
        // 0x4acad4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acad0) {
            ctx->pc = 0x4ACAE8u;
            goto label_4acae8;
        }
    }
    ctx->pc = 0x4ACAD8u;
    // 0x4acad8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4acad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acadc: 0x24a50410  addiu       $a1, $a1, 0x410
    ctx->pc = 0x4acadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
    // 0x4acae0: 0xc12bd2a  jal         func_4AF4A8
    ctx->pc = 0x4ACAE0u;
    SET_GPR_U32(ctx, 31, 0x4ACAE8u);
    ctx->pc = 0x4ACAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACAE0u;
    // 0x4acae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF4A8u, 0x4ACAE0u, 0x4ACAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACAE8u;
label_4acae8:
    // 0x4acae8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acaec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4acaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acaf0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4acaf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4acaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACAF8u;
        // 0x4acafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACB00u;
    // 0x4acb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4acb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4acb04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4acb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4acb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4acb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4acb0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4acb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4acb10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acb10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb14: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acb18: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4acb18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4acb1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACB1Cu;
    {
        const bool branch_taken_0x4acb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB1Cu;
        // 0x4acb20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb1c) {
            ctx->pc = 0x4ACB34u;
            goto label_4acb34;
        }
    }
    ctx->pc = 0x4ACB24u;
    // 0x4acb24: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4acb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4acb28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4acb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4ACB2Cu;
    {
        const bool branch_taken_0x4acb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB2Cu;
        // 0x4acb30: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb2c) {
            ctx->pc = 0x4ACB70u;
            goto label_4acb70;
        }
    }
    ctx->pc = 0x4ACB34u;
label_4acb34:
    // 0x4acb34: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4acb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4acb38: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACB38u;
    {
        const bool branch_taken_0x4acb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acb38) {
            ctx->pc = 0x4ACB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACB38u;
            // 0x4acb3c: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACB50u;
            goto label_4acb50;
        }
    }
    ctx->pc = 0x4ACB40u;
    // 0x4acb40: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ACB40u;
    SET_GPR_U32(ctx, 31, 0x4ACB48u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ACB40u, 0x4ACB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACB48u;
label_4acb48:
    // 0x4acb48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acb4c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4acb4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4acb50:
    // 0x4acb50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4acb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4acb54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4acb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4acb58: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4acb58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4acb5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACB5Cu;
    {
        const bool branch_taken_0x4acb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB5Cu;
        // 0x4acb60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb5c) {
            ctx->pc = 0x4ACB70u;
            goto label_4acb70;
        }
    }
    ctx->pc = 0x4ACB64u;
    // 0x4acb64: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4ACB64u;
    SET_GPR_U32(ctx, 31, 0x4ACB6Cu);
    ctx->pc = 0x4ACB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACB64u;
    // 0x4acb68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4ACB64u, 0x4ACB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACB6Cu;
label_4acb6c:
    // 0x4acb6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4acb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4acb70:
    // 0x4acb70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACB70u;
    {
        const bool branch_taken_0x4acb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB70u;
        // 0x4acb74: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb70) {
            ctx->pc = 0x4ACB88u;
            goto label_4acb88;
        }
    }
    ctx->pc = 0x4ACB78u;
    // 0x4acb78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4acb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb7c: 0x24a50418  addiu       $a1, $a1, 0x418
    ctx->pc = 0x4acb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1048));
    // 0x4acb80: 0xc12bd2a  jal         func_4AF4A8
    ctx->pc = 0x4ACB80u;
    SET_GPR_U32(ctx, 31, 0x4ACB88u);
    ctx->pc = 0x4ACB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACB80u;
    // 0x4acb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AF4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AF4A8u, 0x4ACB80u, 0x4ACB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACB88u;
label_4acb88:
    // 0x4acb88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acb88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4acb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acb90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4acb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acb94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4acb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb98: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB98u;
        // 0x4acb9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACBA0u;
    // 0x4acba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4acba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4acba4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4acba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4acba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4acba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4acbac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4acbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4acbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4acbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4acbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4acbb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4acbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4acbbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acbc0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4acbc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4acbc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACBC4u;
    {
        const bool branch_taken_0x4acbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBC4u;
        // 0x4acbc8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acbc4) {
            ctx->pc = 0x4ACBDCu;
            goto label_4acbdc;
        }
    }
    ctx->pc = 0x4ACBCCu;
    // 0x4acbcc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4acbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4acbd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4acbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4ACBD4u;
    {
        const bool branch_taken_0x4acbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACBD4u;
        // 0x4acbd8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acbd4) {
            ctx->pc = 0x4ACC28u;
            goto label_4acc28;
        }
    }
    ctx->pc = 0x4ACBDCu;
label_4acbdc:
    // 0x4acbdc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x4acbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4acbe0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ACBE0u;
    {
        const bool branch_taken_0x4acbe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4acbe0) {
            ctx->pc = 0x4ACBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACBE0u;
            // 0x4acbe4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACBF8u;
            goto label_4acbf8;
        }
    }
    ctx->pc = 0x4ACBE8u;
    // 0x4acbe8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ACBE8u;
    SET_GPR_U32(ctx, 31, 0x4ACBF0u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ACBE8u, 0x4ACBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACBF0u;
label_4acbf0:
    // 0x4acbf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acbf4: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4acbf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4acbf8:
    // 0x4acbf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4acbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4acbfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4acbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4acc00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4acc00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4acc04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4ACC04u;
    {
        const bool branch_taken_0x4acc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC04u;
        // 0x4acc08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc04) {
            ctx->pc = 0x4ACC28u;
            goto label_4acc28;
        }
    }
    ctx->pc = 0x4ACC0Cu;
    // 0x4acc0c: 0xc12b69e  jal         func_4ADA78
    ctx->pc = 0x4ACC0Cu;
    SET_GPR_U32(ctx, 31, 0x4ACC14u);
    ctx->pc = 0x4ACC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACC0Cu;
    // 0x4acc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA78u, 0x4ACC0Cu, 0x4ACC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACC14u;
label_4acc14:
    // 0x4acc14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ACC14u;
    {
        const bool branch_taken_0x4acc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC14u;
        // 0x4acc18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc14) {
            ctx->pc = 0x4ACC28u;
            goto label_4acc28;
        }
    }
    ctx->pc = 0x4ACC1Cu;
label_4acc1c:
    // 0x4acc1c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4acc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4acc20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4ACC20u;
    {
        const bool branch_taken_0x4acc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC20u;
        // 0x4acc24: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc20) {
            ctx->pc = 0x4ACC6Cu;
            goto label_4acc6c;
        }
    }
    ctx->pc = 0x4ACC28u;
label_4acc28:
    // 0x4acc28: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4ACC28u;
    {
        const bool branch_taken_0x4acc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC28u;
        // 0x4acc2c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc28) {
            ctx->pc = 0x4ACC70u;
            goto label_4acc70;
        }
    }
    ctx->pc = 0x4ACC30u;
    // 0x4acc30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4acc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acc34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4ACC34u;
    {
        const bool branch_taken_0x4acc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC34u;
        // 0x4acc38: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc34) {
            ctx->pc = 0x4ACC50u;
            goto label_4acc50;
        }
    }
    ctx->pc = 0x4ACC3Cu;
    // 0x4acc3c: 0x0  nop
    ctx->pc = 0x4acc3cu;
    // NOP
label_4acc40:
    // 0x4acc40: 0xc12cc82  jal         func_4B3208
    ctx->pc = 0x4ACC40u;
    SET_GPR_U32(ctx, 31, 0x4ACC48u);
    ctx->pc = 0x4ACC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACC40u;
    // 0x4acc44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3208u, 0x4ACC40u, 0x4ACC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACC48u;
label_4acc48:
    // 0x4acc48: 0x5051fff4  beql        $v0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4ACC48u;
    {
        const bool branch_taken_0x4acc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x4acc48) {
            ctx->pc = 0x4ACC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACC48u;
            // 0x4acc4c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACC1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4acc1c;
        }
    }
    ctx->pc = 0x4ACC50u;
label_4acc50:
    // 0x4acc50: 0xc12cc70  jal         func_4B31C0
    ctx->pc = 0x4ACC50u;
    SET_GPR_U32(ctx, 31, 0x4ACC58u);
    ctx->pc = 0x4ACC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACC50u;
    // 0x4acc54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B31C0u, 0x4ACC50u, 0x4ACC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACC58u;
label_4acc58:
    // 0x4acc58: 0x5451fff9  bnel        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4ACC58u;
    {
        const bool branch_taken_0x4acc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4acc58) {
            ctx->pc = 0x4ACC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACC58u;
            // 0x4acc5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ACC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4acc40;
        }
    }
    ctx->pc = 0x4ACC60u;
    // 0x4acc60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4acc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acc64: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x4acc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x4acc68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4acc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4acc6c:
    // 0x4acc6c: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x4acc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_4acc70:
    // 0x4acc70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4acc70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4acc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4acc78: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4acc78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acc7c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4acc7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acc80: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4acc80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4acc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acc88: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC88u;
        // 0x4acc8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACC90u;
}
