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

// Function: sub_0022F8D8
// Address: 0x22f8d8 - 0x22f9e0
void sub_0022F8D8_0x22f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F8D8_0x22f8d8");
#endif

    switch (ctx->pc) {
        case 0x22f8ecu: goto label_22f8ec;
        case 0x22f8fcu: goto label_22f8fc;
        case 0x22f90cu: goto label_22f90c;
        case 0x22f91cu: goto label_22f91c;
        case 0x22f92cu: goto label_22f92c;
        case 0x22f938u: goto label_22f938;
        case 0x22f948u: goto label_22f948;
        case 0x22f95cu: goto label_22f95c;
        case 0x22f96cu: goto label_22f96c;
        case 0x22f978u: goto label_22f978;
        case 0x22f980u: goto label_22f980;
        case 0x22f98cu: goto label_22f98c;
        case 0x22f9b0u: goto label_22f9b0;
        default: break;
    }

    ctx->pc = 0x22f8d8u;

    // 0x22f8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22f8dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22f8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f8e4: 0xc088ee6  jal         func_223B98
    ctx->pc = 0x22F8E4u;
    SET_GPR_U32(ctx, 31, 0x22F8ECu);
    ctx->pc = 0x22F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8E4u;
    // 0x22f8e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22F8E4u, 0x22F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8ECu;
label_22f8ec:
    // 0x22f8ec: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22F8ECu;
    {
        const bool branch_taken_0x22f8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8ECu;
        // 0x22f8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8ec) {
            ctx->pc = 0x22F924u;
            goto label_22f924;
        }
    }
    ctx->pc = 0x22F8F4u;
    // 0x22f8f4: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x22F8F4u;
    SET_GPR_U32(ctx, 31, 0x22F8FCu);
    ctx->pc = 0x22F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8F4u;
    // 0x22f8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x22F8F4u, 0x22F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8FCu;
label_22f8fc:
    // 0x22f8fc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22F8FCu;
    {
        const bool branch_taken_0x22f8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8FCu;
        // 0x22f900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f8fc) {
            ctx->pc = 0x22F924u;
            goto label_22f924;
        }
    }
    ctx->pc = 0x22F904u;
    // 0x22f904: 0xc089f86  jal         func_227E18
    ctx->pc = 0x22F904u;
    SET_GPR_U32(ctx, 31, 0x22F90Cu);
    ctx->pc = 0x22F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F904u;
    // 0x22f908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x22F904u, 0x22F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F90Cu;
label_22f90c:
    // 0x22f90c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F90Cu;
    {
        const bool branch_taken_0x22f90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F90Cu;
        // 0x22f910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f90c) {
            ctx->pc = 0x22F924u;
            goto label_22f924;
        }
    }
    ctx->pc = 0x22F914u;
    // 0x22f914: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x22F914u;
    SET_GPR_U32(ctx, 31, 0x22F91Cu);
    ctx->pc = 0x22F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F914u;
    // 0x22f918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22F914u, 0x22F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F91Cu;
label_22f91c:
    // 0x22f91c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22F91Cu;
    {
        const bool branch_taken_0x22f91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F91Cu;
        // 0x22f920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f91c) {
            ctx->pc = 0x22F940u;
            goto label_22f940;
        }
    }
    ctx->pc = 0x22F924u;
label_22f924:
    // 0x22f924: 0xc094fde  jal         func_253F78
    ctx->pc = 0x22F924u;
    SET_GPR_U32(ctx, 31, 0x22F92Cu);
    ctx->pc = 0x22F928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F924u;
    // 0x22f928: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22F924u, 0x22F92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F92Cu;
label_22f92c:
    // 0x22f92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f930: 0xc089988  jal         func_226620
    ctx->pc = 0x22F930u;
    SET_GPR_U32(ctx, 31, 0x22F938u);
    ctx->pc = 0x22F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F930u;
    // 0x22f934: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22F930u, 0x22F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F938u;
label_22f938:
    // 0x22f938: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x22F938u;
    {
        const bool branch_taken_0x22f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F938u;
        // 0x22f93c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f938) {
            ctx->pc = 0x22F9D0u;
            goto label_22f9d0;
        }
    }
    ctx->pc = 0x22F940u;
label_22f940:
    // 0x22f940: 0xc095018  jal         func_254060
    ctx->pc = 0x22F940u;
    SET_GPR_U32(ctx, 31, 0x22F948u);
    ctx->pc = 0x22F944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F940u;
    // 0x22f944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F940u, 0x22F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F948u;
label_22f948:
    // 0x22f948: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x22f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x22f94c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F94Cu;
    {
        const bool branch_taken_0x22f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F94Cu;
        // 0x22f950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f94c) {
            ctx->pc = 0x22F964u;
            goto label_22f964;
        }
    }
    ctx->pc = 0x22F954u;
    // 0x22f954: 0xc094fde  jal         func_253F78
    ctx->pc = 0x22F954u;
    SET_GPR_U32(ctx, 31, 0x22F95Cu);
    ctx->pc = 0x22F958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F954u;
    // 0x22f958: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22F954u, 0x22F95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F95Cu;
label_22f95c:
    // 0x22f95c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F95Cu;
    {
        const bool branch_taken_0x22f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F95Cu;
        // 0x22f960: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f95c) {
            ctx->pc = 0x22F970u;
            goto label_22f970;
        }
    }
    ctx->pc = 0x22F964u;
label_22f964:
    // 0x22f964: 0xc094fca  jal         func_253F28
    ctx->pc = 0x22F964u;
    SET_GPR_U32(ctx, 31, 0x22F96Cu);
    ctx->pc = 0x22F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F964u;
    // 0x22f968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22F964u, 0x22F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F96Cu;
label_22f96c:
    // 0x22f96c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x22f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_22f970:
    // 0x22f970: 0xc089974  jal         func_2265D0
    ctx->pc = 0x22F970u;
    SET_GPR_U32(ctx, 31, 0x22F978u);
    ctx->pc = 0x22F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F970u;
    // 0x22f974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22F970u, 0x22F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F978u;
label_22f978:
    // 0x22f978: 0xc08bf92  jal         func_22FE48
    ctx->pc = 0x22F978u;
    SET_GPR_U32(ctx, 31, 0x22F980u);
    ctx->pc = 0x22F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F978u;
    // 0x22f97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22F978u, 0x22F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F980u;
label_22f980:
    // 0x22f980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f984: 0xc089988  jal         func_226620
    ctx->pc = 0x22F984u;
    SET_GPR_U32(ctx, 31, 0x22F98Cu);
    ctx->pc = 0x22F988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F984u;
    // 0x22f988: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22F984u, 0x22F98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F98Cu;
label_22f98c:
    // 0x22f98c: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x22f98cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22f990: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x22f990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x22f994: 0x8c44021c  lw          $a0, 0x21C($v0)
    ctx->pc = 0x22f994u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51021Cu));
    // 0x22f998: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x22f998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x22f99c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F99Cu;
    {
        const bool branch_taken_0x22f99c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F99Cu;
        // 0x22f9a0: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f99c) {
            ctx->pc = 0x22F9CCu;
            goto label_22f9cc;
        }
    }
    ctx->pc = 0x22F9A4u;
    // 0x22f9a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9a8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x22F9A8u;
    SET_GPR_U32(ctx, 31, 0x22F9B0u);
    ctx->pc = 0x22F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F9A8u;
    // 0x22f9ac: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F9A8u, 0x22F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F9B0u;
label_22f9b0:
    // 0x22f9b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22F9B0u;
    {
        const bool branch_taken_0x22f9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f9b0) {
            ctx->pc = 0x22F9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F9B0u;
            // 0x22f9b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F9D0u;
            goto label_22f9d0;
        }
    }
    ctx->pc = 0x22F9B8u;
    // 0x22f9b8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x22f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x22f9bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x22f9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x22f9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f9c4: 0x0  nop
    ctx->pc = 0x22f9c4u;
    // NOP
    // 0x22f9c8: 0xe60003a4  swc1        $f0, 0x3A4($s0)
    ctx->pc = 0x22f9c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
label_22f9cc:
    // 0x22f9cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22f9ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f9d0:
    // 0x22f9d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F9D4u;
        // 0x22f9d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F9DCu;
    // 0x22f9dc: 0x0  nop
    ctx->pc = 0x22f9dcu;
    // NOP
    ctx->pc = 0x22f9e0u;
}
