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

// Function: sub_00327288
// Address: 0x327288 - 0x327358
void sub_00327288_0x327288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327288_0x327288");
#endif

    switch (ctx->pc) {
        case 0x3272b4u: goto label_3272b4;
        case 0x3272c0u: goto label_3272c0;
        case 0x3272d4u: goto label_3272d4;
        case 0x32730cu: goto label_32730c;
        case 0x327330u: goto label_327330;
        default: break;
    }

    ctx->pc = 0x327288u;

    // 0x327288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x327288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32728c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32728cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x327290: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x327290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x327294: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32729c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3272a0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3272A0u;
    {
        const bool branch_taken_0x3272a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3272A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272A0u;
        // 0x3272a4: 0x8c910028  lw          $s1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272a0) {
            ctx->pc = 0x3272C8u;
            goto label_3272c8;
        }
    }
    ctx->pc = 0x3272A8u;
    // 0x3272a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3272a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272ac: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x3272ACu;
    SET_GPR_U32(ctx, 31, 0x3272B4u);
    ctx->pc = 0x3272B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272ACu;
    // 0x3272b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x3272ACu, 0x3272B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272B4u;
label_3272b4:
    // 0x3272b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3272b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272b8: 0xc0c9d64  jal         func_327590
    ctx->pc = 0x3272B8u;
    SET_GPR_U32(ctx, 31, 0x3272C0u);
    ctx->pc = 0x3272BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272B8u;
    // 0x3272bc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327590u, 0x3272B8u, 0x3272C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272C0u;
label_3272c0:
    // 0x3272c0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3272C0u;
    {
        const bool branch_taken_0x3272c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3272C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3272C0u;
        // 0x3272c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3272c0) {
            ctx->pc = 0x327344u;
            goto label_327344;
        }
    }
    ctx->pc = 0x3272C8u;
label_3272c8:
    // 0x3272c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3272c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3272cc: 0xc0c9ad6  jal         func_326B58
    ctx->pc = 0x3272CCu;
    SET_GPR_U32(ctx, 31, 0x3272D4u);
    ctx->pc = 0x3272D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3272CCu;
    // 0x3272d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B58u, 0x3272CCu, 0x3272D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3272D4u;
label_3272d4:
    // 0x3272d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3272d8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3272dc: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x3272dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3272e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3272e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3272e4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3272e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3272e8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3272e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3272ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3272f0: 0x3064003f  andi        $a0, $v1, 0x3F
    ctx->pc = 0x3272f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3272f4: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x3272f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x3272f8: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x3272f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x3272fc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3272FCu;
    {
        const bool branch_taken_0x3272fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3272fc) {
            ctx->pc = 0x327300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3272FCu;
            // 0x327300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327328u;
            goto label_327328;
        }
    }
    ctx->pc = 0x327304u;
    // 0x327304: 0xc0c9b0e  jal         func_326C38
    ctx->pc = 0x327304u;
    SET_GPR_U32(ctx, 31, 0x32730Cu);
    ctx->pc = 0x326C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326C38u, 0x327304u, 0x32730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32730Cu;
label_32730c:
    // 0x32730c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x327310: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x327310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x327314: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x327314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x327318: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x327318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x32731c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32731cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x327320: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327320u;
    {
        const bool branch_taken_0x327320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327320u;
        // 0x327324: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327320) {
            ctx->pc = 0x327330u;
            goto label_327330;
        }
    }
    ctx->pc = 0x327328u;
label_327328:
    // 0x327328: 0xc0c9d64  jal         func_327590
    ctx->pc = 0x327328u;
    SET_GPR_U32(ctx, 31, 0x327330u);
    ctx->pc = 0x32732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327328u;
    // 0x32732c: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327590u, 0x327328u, 0x327330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327330u;
label_327330:
    // 0x327330: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x327330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x327334: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x327334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x327338: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x327338u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x32733c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x32733cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x327340: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x327340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_327344:
    // 0x327344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x327344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x327348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32734c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32734cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327350: 0x3e00008  jr          $ra
    ctx->pc = 0x327350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327350u;
        // 0x327354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327358u;
}
