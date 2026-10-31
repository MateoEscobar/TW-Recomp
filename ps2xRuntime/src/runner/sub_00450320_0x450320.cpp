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

// Function: sub_00450320
// Address: 0x450320 - 0x4505d0
void sub_00450320_0x450320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450320_0x450320");
#endif

    switch (ctx->pc) {
        case 0x450364u: goto label_450364;
        case 0x450390u: goto label_450390;
        case 0x4503e0u: goto label_4503e0;
        case 0x450408u: goto label_450408;
        case 0x450438u: goto label_450438;
        case 0x450498u: goto label_450498;
        case 0x4504b4u: goto label_4504b4;
        case 0x450530u: goto label_450530;
        default: break;
    }

    ctx->pc = 0x450320u;

    // 0x450320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x450320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x450324: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x450324u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x450328: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x450328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x45032c: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x45032cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x450330: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x450330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x450334: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x450334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x450338: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x450338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x45033c: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x45033cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
    // 0x450340: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x450340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x450344: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x450344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x450348: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x450348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x45034c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45034cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x450350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x450354: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x450354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x450358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x450358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45035c: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x45035Cu;
    SET_GPR_U32(ctx, 31, 0x450364u);
    ctx->pc = 0x450360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45035Cu;
    // 0x450360: 0xa29823  subu        $s3, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x45035Cu, 0x450364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x450364u;
label_450364:
    // 0x450364: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450368: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45036c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45036cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x450370: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450374: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450374u;
    {
        const bool branch_taken_0x450374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450374u;
        // 0x450378: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450374) {
            ctx->pc = 0x4503B0u;
            goto label_4503b0;
        }
    }
    ctx->pc = 0x45037Cu;
    // 0x45037c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450380: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450384: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450384u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450388: 0xf  sync
    ctx->pc = 0x450388u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45038c: 0x40f  sync.p
    ctx->pc = 0x45038cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450390:
    // 0x450390: 0x0  nop
    ctx->pc = 0x450390u;
    // NOP
    // 0x450394: 0x0  nop
    ctx->pc = 0x450394u;
    // NOP
    // 0x450398: 0x0  nop
    ctx->pc = 0x450398u;
    // NOP
    // 0x45039c: 0x0  nop
    ctx->pc = 0x45039cu;
    // NOP
    // 0x4503a0: 0x0  nop
    ctx->pc = 0x4503a0u;
    // NOP
    // 0x4503a4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4503A4u;
    {
        const bool branch_taken_0x4503a4 = (false);
        if (branch_taken_0x4503a4) {
            ctx->pc = 0x450390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450390;
        }
    }
    ctx->pc = 0x4503ACu;
    // 0x4503ac: 0x0  nop
    ctx->pc = 0x4503acu;
    // NOP
label_4503b0:
    // 0x4503b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4503b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4503b4: 0x2a050401  slti        $a1, $s0, 0x401
    ctx->pc = 0x4503b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4503b8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4503b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4503bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4503bcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4503c0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4503c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4503c4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4503C4u;
    {
        const bool branch_taken_0x4503c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4503C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4503C4u;
        // 0x4503c8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4503c4) {
            ctx->pc = 0x450424u;
            goto label_450424;
        }
    }
    ctx->pc = 0x4503CCu;
    // 0x4503cc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x4503ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4503d0: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4503d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4503d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4503d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4503d8: 0xf  sync
    ctx->pc = 0x4503d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4503dc: 0x40f  sync.p
    ctx->pc = 0x4503dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4503e0:
    // 0x4503e0: 0x0  nop
    ctx->pc = 0x4503e0u;
    // NOP
    // 0x4503e4: 0x0  nop
    ctx->pc = 0x4503e4u;
    // NOP
    // 0x4503e8: 0x0  nop
    ctx->pc = 0x4503e8u;
    // NOP
    // 0x4503ec: 0x0  nop
    ctx->pc = 0x4503ecu;
    // NOP
    // 0x4503f0: 0x0  nop
    ctx->pc = 0x4503f0u;
    // NOP
    // 0x4503f4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4503F4u;
    {
        const bool branch_taken_0x4503f4 = (false);
        if (branch_taken_0x4503f4) {
            ctx->pc = 0x4503E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4503e0;
        }
    }
    ctx->pc = 0x4503FCu;
    // 0x4503fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4503fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450400: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x450400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x450404: 0x0  nop
    ctx->pc = 0x450404u;
    // NOP
label_450408:
    // 0x450408: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x450408u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45040c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45040cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x450410: 0x0  nop
    ctx->pc = 0x450410u;
    // NOP
    // 0x450414: 0x0  nop
    ctx->pc = 0x450414u;
    // NOP
    // 0x450418: 0x0  nop
    ctx->pc = 0x450418u;
    // NOP
    // 0x45041c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45041Cu;
    {
        const bool branch_taken_0x45041c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45041c) {
            ctx->pc = 0x450408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450408;
        }
    }
    ctx->pc = 0x450424u;
label_450424:
    // 0x450424: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x450424u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x450428: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x450428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x45042c: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x45042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x450430: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x450430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x450434: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x450434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_450438:
    // 0x450438: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x450438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45043c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x45043cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x450440: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x450440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x450444: 0x0  nop
    ctx->pc = 0x450444u;
    // NOP
    // 0x450448: 0x0  nop
    ctx->pc = 0x450448u;
    // NOP
    // 0x45044c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45044Cu;
    {
        const bool branch_taken_0x45044c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x450450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45044Cu;
        // 0x450450: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45044c) {
            ctx->pc = 0x450438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450438;
        }
    }
    ctx->pc = 0x450454u;
    // 0x450454: 0x14a0002a  bnez        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x450454u;
    {
        const bool branch_taken_0x450454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x450454) {
            ctx->pc = 0x450500u;
            goto label_450500;
        }
    }
    ctx->pc = 0x45045Cu;
    // 0x45045c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45045cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x450460: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x450460u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x450464: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x450464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x450468: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x450468u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x45046c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x45046cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x450470: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x450474: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x450474u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x450478: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x450478u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x45047c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45047cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450480: 0x34e7e010  ori         $a3, $a3, 0xE010
    ctx->pc = 0x450480u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57360);
    // 0x450484: 0x34c6d080  ori         $a2, $a2, 0xD080
    ctx->pc = 0x450484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53376);
    // 0x450488: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x450488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x45048c: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x45048cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x450490: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x450490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x450494: 0x0  nop
    ctx->pc = 0x450494u;
    // NOP
label_450498:
    // 0x450498: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x450498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45049c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45049cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4504a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4504A0u;
    {
        const bool branch_taken_0x4504a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4504a0) {
            ctx->pc = 0x4504D0u;
            goto label_4504d0;
        }
    }
    ctx->pc = 0x4504A8u;
    // 0x4504a8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4504a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4504ac: 0xf  sync
    ctx->pc = 0x4504acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4504b0: 0x40f  sync.p
    ctx->pc = 0x4504b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4504b4:
    // 0x4504b4: 0x0  nop
    ctx->pc = 0x4504b4u;
    // NOP
    // 0x4504b8: 0x0  nop
    ctx->pc = 0x4504b8u;
    // NOP
    // 0x4504bc: 0x0  nop
    ctx->pc = 0x4504bcu;
    // NOP
    // 0x4504c0: 0x0  nop
    ctx->pc = 0x4504c0u;
    // NOP
    // 0x4504c4: 0x0  nop
    ctx->pc = 0x4504c4u;
    // NOP
    // 0x4504c8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4504C8u;
    {
        const bool branch_taken_0x4504c8 = (false);
        if (branch_taken_0x4504c8) {
            ctx->pc = 0x4504B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4504b4;
        }
    }
    ctx->pc = 0x4504D0u;
label_4504d0:
    // 0x4504d0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4504d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4504d4: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x4504d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x4504d8: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x4504d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
    // 0x4504dc: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x4504dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
    // 0x4504e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x4504e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x4504e4: 0xac23d000  sw          $v1, -0x3000($at)
    ctx->pc = 0x4504e4u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x1000d000
    // 0x4504e8: 0xf  sync
    ctx->pc = 0x4504e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4504ec: 0x40f  sync.p
    ctx->pc = 0x4504ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4504f0: 0x2610fc00  addiu       $s0, $s0, -0x400
    ctx->pc = 0x4504f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966272));
    // 0x4504f4: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x4504f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x4504f8: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4504F8u;
    {
        const bool branch_taken_0x4504f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4504FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4504F8u;
        // 0x4504fc: 0x26314000  addiu       $s1, $s1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4504f8) {
            ctx->pc = 0x450498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450498;
        }
    }
    ctx->pc = 0x450500u;
label_450500:
    // 0x450500: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x450500u;
    {
        const bool branch_taken_0x450500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x450504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450500u;
        // 0x450504: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450500) {
            ctx->pc = 0x4505A0u;
            goto label_4505a0;
        }
    }
    ctx->pc = 0x450508u;
    // 0x450508: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x450508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x45050c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45050cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x450510: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x450510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x450514: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x450514u;
    {
        const bool branch_taken_0x450514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x450518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x450514u;
        // 0x450518: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x450514) {
            ctx->pc = 0x450550u;
            goto label_450550;
        }
    }
    ctx->pc = 0x45051Cu;
    // 0x45051c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x45051cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450520: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x450520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x450524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450524u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x450528: 0xf  sync
    ctx->pc = 0x450528u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45052c: 0x40f  sync.p
    ctx->pc = 0x45052cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_450530:
    // 0x450530: 0x0  nop
    ctx->pc = 0x450530u;
    // NOP
    // 0x450534: 0x0  nop
    ctx->pc = 0x450534u;
    // NOP
    // 0x450538: 0x0  nop
    ctx->pc = 0x450538u;
    // NOP
    // 0x45053c: 0x0  nop
    ctx->pc = 0x45053cu;
    // NOP
    // 0x450540: 0x0  nop
    ctx->pc = 0x450540u;
    // NOP
    // 0x450544: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x450544u;
    {
        const bool branch_taken_0x450544 = (false);
        if (branch_taken_0x450544) {
            ctx->pc = 0x450530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450530;
        }
    }
    ctx->pc = 0x45054Cu;
    // 0x45054c: 0x0  nop
    ctx->pc = 0x45054cu;
    // NOP
label_450550:
    // 0x450550: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450554: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x450554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x450558: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x450558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x45055c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45055cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x450560: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x450560u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x450564: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x450564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x450568: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x450568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x45056c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x45056cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x450570: 0x3484d010  ori         $a0, $a0, 0xD010
    ctx->pc = 0x450570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53264);
    // 0x450574: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x450574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x450578: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x450578u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x45057c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x45057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x450580: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x450580u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x450584: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x450584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x450588: 0xac25d000  sw          $a1, -0x3000($at)
    ctx->pc = 0x450588u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x45058c: 0xf  sync
    ctx->pc = 0x45058cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450590: 0x40f  sync.p
    ctx->pc = 0x450590u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x450594: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x450594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x450598: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x450598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x45059c: 0x0  nop
    ctx->pc = 0x45059cu;
    // NOP
label_4505a0:
    // 0x4505a0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4505A0u;
    {
        const bool branch_taken_0x4505a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4505A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4505A0u;
        // 0x4505a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4505a0) {
            ctx->pc = 0x4505B4u;
            goto label_4505b4;
        }
    }
    ctx->pc = 0x4505A8u;
    // 0x4505a8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x4505a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x4505ac: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x4505acu;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x70000000u));
    // 0x4505b0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x4505b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_4505b4:
    // 0x4505b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4505b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4505b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4505b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4505bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4505bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4505c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4505c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4505c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4505C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4505C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4505C4u;
        // 0x4505c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4505C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4505CCu;
    // 0x4505cc: 0x0  nop
    ctx->pc = 0x4505ccu;
    // NOP
    ctx->pc = 0x4505d0u;
}
