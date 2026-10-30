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

// Function: sub_002513A8
// Address: 0x2513a8 - 0x251680
void sub_002513A8_0x2513a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002513A8_0x2513a8");
#endif

    switch (ctx->pc) {
        case 0x251400u: goto label_251400;
        case 0x251410u: goto label_251410;
        case 0x251480u: goto label_251480;
        case 0x25149cu: goto label_25149c;
        case 0x2514f0u: goto label_2514f0;
        case 0x251508u: goto label_251508;
        case 0x251510u: goto label_251510;
        case 0x251598u: goto label_251598;
        case 0x2515b4u: goto label_2515b4;
        case 0x2515c8u: goto label_2515c8;
        case 0x2515dcu: goto label_2515dc;
        case 0x2515f0u: goto label_2515f0;
        case 0x251604u: goto label_251604;
        case 0x251614u: goto label_251614;
        case 0x251628u: goto label_251628;
        case 0x251638u: goto label_251638;
        default: break;
    }

    ctx->pc = 0x2513a8u;

    // 0x2513a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2513a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2513ac: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2513acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2513b0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2513b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2513b4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2513b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513b8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2513b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2513bc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2513bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513c0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2513c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2513c4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2513c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513c8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2513c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2513cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2513ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2513d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2513d4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2513d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513d8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2513d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2513dc: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x2513dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2513e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2513e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2513e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2513e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2513ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2513ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2513f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2513f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2513f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513f8: 0xc09469c  jal         func_251A70
    ctx->pc = 0x2513F8u;
    SET_GPR_U32(ctx, 31, 0x251400u);
    ctx->pc = 0x2513FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2513F8u;
    // 0x2513fc: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251A70u, 0x2513F8u, 0x251400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251400u;
label_251400:
    // 0x251400: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x251400u;
    {
        const bool branch_taken_0x251400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251400u;
        // 0x251404: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251400) {
            ctx->pc = 0x251440u;
            goto label_251440;
        }
    }
    ctx->pc = 0x251408u;
    // 0x251408: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x251408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x25140c: 0x0  nop
    ctx->pc = 0x25140cu;
    // NOP
label_251410:
    // 0x251410: 0x18e00009  blez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x251410u;
    {
        const bool branch_taken_0x251410 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x251414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251410u;
        // 0x251414: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251410) {
            ctx->pc = 0x251438u;
            goto label_251438;
        }
    }
    ctx->pc = 0x251418u;
    // 0x251418: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x251418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x25141c: 0xe51018  mult        $v0, $a3, $a1
    ctx->pc = 0x25141cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x251420: 0x24c4a250  addiu       $a0, $a2, -0x5DB0
    ctx->pc = 0x251420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943312));
    // 0x251424: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x251424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x251428: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x251428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25142c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25142Cu;
    {
        const bool branch_taken_0x25142c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0xe51018  mult        $v0, $a3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25142c) {
            ctx->pc = 0x251410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251410;
        }
    }
    ctx->pc = 0x251434u;
    // 0x251434: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x251434u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_251438:
    // 0x251438: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x251438u;
    {
        const bool branch_taken_0x251438 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x25143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251438u;
        // 0x25143c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251438) {
            ctx->pc = 0x251448u;
            goto label_251448;
        }
    }
    ctx->pc = 0x251440u;
label_251440:
    // 0x251440: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x251440u;
    {
        const bool branch_taken_0x251440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251440u;
        // 0x251444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251440) {
            ctx->pc = 0x25164Cu;
            goto label_25164c;
        }
    }
    ctx->pc = 0x251448u;
label_251448:
    // 0x251448: 0x8c6205a0  lw          $v0, 0x5A0($v1)
    ctx->pc = 0x251448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1440)));
    // 0x25144c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x25144Cu;
    {
        const bool branch_taken_0x25144c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25144Cu;
        // 0x251450: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25144c) {
            ctx->pc = 0x2514B8u;
            goto label_2514b8;
        }
    }
    ctx->pc = 0x251454u;
    // 0x251454: 0x9663001c  lhu         $v1, 0x1C($s3)
    ctx->pc = 0x251454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x251458: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x251458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x25145c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25145Cu;
    {
        const bool branch_taken_0x25145c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25145Cu;
        // 0x251460: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25145c) {
            ctx->pc = 0x2514B4u;
            goto label_2514b4;
        }
    }
    ctx->pc = 0x251464u;
    // 0x251464: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x251464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x251468: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25146c: 0x8c64a21c  lw          $a0, -0x5DE4($v1)
    ctx->pc = 0x25146cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943260)));
    // 0x251470: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x251470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x251474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x251474u;
    {
        const bool branch_taken_0x251474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251474u;
        // 0x251478: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251474) {
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x25147Cu;
    // 0x25147c: 0x0  nop
    ctx->pc = 0x25147cu;
    // NOP
label_251480:
    // 0x251480: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251484: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x251484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251488:
    // 0x251488: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x251488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25148c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25148cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x251490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251494: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x251494u;
    SET_GPR_U32(ctx, 31, 0x25149Cu);
    ctx->pc = 0x251498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251494u;
    // 0x251498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x251494u, 0x25149Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25149Cu;
label_25149c:
    // 0x25149c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25149Cu;
    {
        const bool branch_taken_0x25149c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25149Cu;
        // 0x2514a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25149c) {
            ctx->pc = 0x2514B4u;
            goto label_2514b4;
        }
    }
    ctx->pc = 0x2514A4u;
    // 0x2514a4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2514a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514a8: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2514a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2514ac: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2514ACu;
    {
        const bool branch_taken_0x2514ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2514B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514ACu;
        // 0x2514b0: 0x8ea3a21c  lw          $v1, -0x5DE4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514ac) {
            ctx->pc = 0x251480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251480;
        }
    }
    ctx->pc = 0x2514B4u;
label_2514b4:
    // 0x2514b4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2514b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2514b8:
    // 0x2514b8: 0x12720032  beq         $s3, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2514B8u;
    {
        const bool branch_taken_0x2514b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x2514BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514B8u;
        // 0x2514bc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514b8) {
            ctx->pc = 0x251584u;
            goto label_251584;
        }
    }
    ctx->pc = 0x2514C0u;
    // 0x2514c0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2514c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2514c4: 0x9662001c  lhu         $v0, 0x1C($s3)
    ctx->pc = 0x2514c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x2514c8: 0x8c64a21c  lw          $a0, -0x5DE4($v1)
    ctx->pc = 0x2514c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6CA21Cu));
    // 0x2514cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2514ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2514d0: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x2514d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2514d4: 0x10d2002c  beq         $a2, $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2514D4u;
    {
        const bool branch_taken_0x2514d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x2514D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514D4u;
        // 0x2514d8: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514d4) {
            ctx->pc = 0x251588u;
            goto label_251588;
        }
    }
    ctx->pc = 0x2514DCu;
    // 0x2514dc: 0x2a0602d  daddu       $t4, $s5, $zero
    ctx->pc = 0x2514dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514e0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2514e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514e4: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x2514e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514e8: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x2514e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2514ec: 0x0  nop
    ctx->pc = 0x2514ecu;
    // NOP
label_2514f0:
    // 0x2514f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2514f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2514f4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2514f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2514f8: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x2514f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2514fc: 0x10d20012  beq         $a2, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2514FCu;
    {
        const bool branch_taken_0x2514fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x251500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514FCu;
        // 0x251500: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514fc) {
            ctx->pc = 0x251548u;
            goto label_251548;
        }
    }
    ctx->pc = 0x251504u;
    // 0x251504: 0x8daaa21c  lw          $t2, -0x5DE4($t5)
    ctx->pc = 0x251504u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943260)));
label_251508:
    // 0x251508: 0x84c50014  lh          $a1, 0x14($a2)
    ctx->pc = 0x251508u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x25150c: 0x94c8001c  lhu         $t0, 0x1C($a2)
    ctx->pc = 0x25150cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
label_251510:
    // 0x251510: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x251510u;
    {
        const bool branch_taken_0x251510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x251514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251510u;
        // 0x251514: 0x81140  sll         $v0, $t0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251510) {
            ctx->pc = 0x251538u;
            goto label_251538;
        }
    }
    ctx->pc = 0x251518u;
    // 0x251518: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x251518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x25151c: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x25151cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x251520: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x251520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x251524: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251528: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x251528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25152c: 0x1490fff8  bne         $a0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25152Cu;
    {
        const bool branch_taken_0x25152c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x251530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25152Cu;
        // 0x251530: 0x81140  sll         $v0, $t0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25152c) {
            ctx->pc = 0x251510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251510;
        }
    }
    ctx->pc = 0x251534u;
    // 0x251534: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x251534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_251538:
    // 0x251538: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x251538u;
    {
        const bool branch_taken_0x251538 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x25153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251538u;
        // 0x25153c: 0x1423021  addu        $a2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251538) {
            ctx->pc = 0x251548u;
            goto label_251548;
        }
    }
    ctx->pc = 0x251540u;
    // 0x251540: 0x14d2fff1  bne         $a2, $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x251540u;
    {
        const bool branch_taken_0x251540 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        ctx->pc = 0x251544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251540u;
        // 0x251544: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251540) {
            ctx->pc = 0x251508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251508;
        }
    }
    ctx->pc = 0x251548u;
label_251548:
    // 0x251548: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x251548u;
    {
        const bool branch_taken_0x251548 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x25154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251548u;
        // 0x25154c: 0x12b1023  subu        $v0, $t1, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251548) {
            ctx->pc = 0x251558u;
            goto label_251558;
        }
    }
    ctx->pc = 0x251550u;
    // 0x251550: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x251550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x251554: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x251554u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
label_251558:
    // 0x251558: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x251558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x25155c: 0x8d83a21c  lw          $v1, -0x5DE4($t4)
    ctx->pc = 0x25155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943260)));
    // 0x251560: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251564: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x251564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251568: 0x52120007  beql        $s0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x251568u;
    {
        const bool branch_taken_0x251568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x251568) {
            ctx->pc = 0x25156Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251568u;
            // 0x25156c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251588u;
            goto label_251588;
        }
    }
    ctx->pc = 0x251570u;
    // 0x251570: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x251570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x251574: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x251578: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x251578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25157c: 0x54d2ffdc  bnel        $a2, $s2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x25157Cu;
    {
        const bool branch_taken_0x25157c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 18));
        if (branch_taken_0x25157c) {
            ctx->pc = 0x251580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25157Cu;
            // 0x251580: 0x94c2001c  lhu         $v0, 0x1C($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2514F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2514f0;
        }
    }
    ctx->pc = 0x251584u;
label_251584:
    // 0x251584: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x251584u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_251588:
    // 0x251588: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x251588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25158c: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x25158cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251590: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251590u;
    {
        const bool branch_taken_0x251590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251590u;
        // 0x251594: 0x3c12006d  lui         $s2, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251590) {
            ctx->pc = 0x2515A0u;
            goto label_2515a0;
        }
    }
    ctx->pc = 0x251598u;
label_251598:
    // 0x251598: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x251598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x25159c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x25159cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2515a0:
    // 0x2515a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2515a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2515a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2515a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515ac: 0xc0945b4  jal         func_2516D0
    ctx->pc = 0x2515ACu;
    SET_GPR_U32(ctx, 31, 0x2515B4u);
    ctx->pc = 0x2515B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515ACu;
    // 0x2515b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516D0u, 0x2515ACu, 0x2515B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515B4u;
label_2515b4:
    // 0x2515b4: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x2515b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2515b8: 0x1455fff7  bne         $v0, $s5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2515B8u;
    {
        const bool branch_taken_0x2515b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2515BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515B8u;
        // 0x2515bc: 0x8e43a21c  lw          $v1, -0x5DE4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515b8) {
            ctx->pc = 0x251598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251598;
        }
    }
    ctx->pc = 0x2515C0u;
    // 0x2515c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2515C0u;
    {
        const bool branch_taken_0x2515c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2515C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515C0u;
        // 0x2515c4: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515c0) {
            ctx->pc = 0x2515CCu;
            goto label_2515cc;
        }
    }
    ctx->pc = 0x2515C8u;
label_2515c8:
    // 0x2515c8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2515c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2515cc:
    // 0x2515cc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2515CCu;
    {
        const bool branch_taken_0x2515cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2515D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515CCu;
        // 0x2515d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2515cc) {
            ctx->pc = 0x2515F8u;
            goto label_2515f8;
        }
    }
    ctx->pc = 0x2515D4u;
    // 0x2515d4: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x2515D4u;
    SET_GPR_U32(ctx, 31, 0x2515DCu);
    ctx->pc = 0x2515D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515D4u;
    // 0x2515d8: 0x2625fffe  addiu       $a1, $s1, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x2515D4u, 0x2515DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515DCu;
label_2515dc:
    // 0x2515dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2515dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2515e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2515e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515e4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2515e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2515e8: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x2515E8u;
    SET_GPR_U32(ctx, 31, 0x2515F0u);
    ctx->pc = 0x2515ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515E8u;
    // 0x2515ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x2515E8u, 0x2515F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515F0u;
label_2515f0:
    // 0x2515f0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2515F0u;
    {
        const bool branch_taken_0x2515f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2515f0) {
            ctx->pc = 0x2515F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2515F0u;
            // 0x2515f4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2515C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2515c8;
        }
    }
    ctx->pc = 0x2515F8u;
label_2515f8:
    // 0x2515f8: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x2515f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2515fc: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x2515FCu;
    SET_GPR_U32(ctx, 31, 0x251604u);
    ctx->pc = 0x251600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515FCu;
    // 0x251600: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x2515FCu, 0x251604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251604u;
label_251604:
    // 0x251604: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x251604u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25160c: 0xc0945c4  jal         func_251710
    ctx->pc = 0x25160Cu;
    SET_GPR_U32(ctx, 31, 0x251614u);
    ctx->pc = 0x251610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25160Cu;
    // 0x251610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251710u, 0x25160Cu, 0x251614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251614u;
label_251614:
    // 0x251614: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x251614u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x251618: 0xae930104  sw          $s3, 0x104($s4)
    ctx->pc = 0x251618u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 260), GPR_U32(ctx, 19));
    // 0x25161c: 0xae920108  sw          $s2, 0x108($s4)
    ctx->pc = 0x25161cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 264), GPR_U32(ctx, 18));
    // 0x251620: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x251620u;
    {
        const bool branch_taken_0x251620 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x251624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251620u;
        // 0x251624: 0xae9e010c  sw          $fp, 0x10C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 268), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251620) {
            ctx->pc = 0x251648u;
            goto label_251648;
        }
    }
    ctx->pc = 0x251628u;
label_251628:
    // 0x251628: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x251628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x25162c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251630: 0xc0945bc  jal         func_2516F0
    ctx->pc = 0x251630u;
    SET_GPR_U32(ctx, 31, 0x251638u);
    ctx->pc = 0x251634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251630u;
    // 0x251634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2516F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2516F0u, 0x251630u, 0x251638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251638u;
label_251638:
    // 0x251638: 0x9043001f  lbu         $v1, 0x1F($v0)
    ctx->pc = 0x251638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31)));
    // 0x25163c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251640: 0x1e20fff9  bgtz        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x251640u;
    {
        const bool branch_taken_0x251640 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x251644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251640u;
        // 0x251644: 0xa043001f  sb          $v1, 0x1F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 31), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251640) {
            ctx->pc = 0x251628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251628;
        }
    }
    ctx->pc = 0x251648u;
label_251648:
    // 0x251648: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x251648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25164c:
    // 0x25164c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x25164cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x251650: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x251650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x251654: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x251654u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251658: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x251658u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25165c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x25165cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251660: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x251660u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251664: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x251664u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251668: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x251668u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25166c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x25166cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251674: 0x3e00008  jr          $ra
    ctx->pc = 0x251674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251674u;
        // 0x251678: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25167Cu;
    // 0x25167c: 0x0  nop
    ctx->pc = 0x25167cu;
    // NOP
    ctx->pc = 0x251680u;
}
