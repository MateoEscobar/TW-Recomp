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

// Function: sub_004180B0
// Address: 0x4180b0 - 0x41813c
void sub_004180B0_0x4180b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004180B0_0x4180b0");
#endif

    switch (ctx->pc) {
        case 0x4180b0u: goto label_4180b0;
        case 0x4180b4u: goto label_4180b4;
        case 0x4180b8u: goto label_4180b8;
        case 0x4180bcu: goto label_4180bc;
        case 0x4180c0u: goto label_4180c0;
        case 0x4180c4u: goto label_4180c4;
        case 0x4180c8u: goto label_4180c8;
        case 0x4180ccu: goto label_4180cc;
        case 0x4180d0u: goto label_4180d0;
        case 0x4180d4u: goto label_4180d4;
        case 0x4180d8u: goto label_4180d8;
        case 0x4180dcu: goto label_4180dc;
        case 0x4180e0u: goto label_4180e0;
        case 0x4180e4u: goto label_4180e4;
        case 0x4180e8u: goto label_4180e8;
        case 0x4180ecu: goto label_4180ec;
        case 0x4180f0u: goto label_4180f0;
        case 0x4180f4u: goto label_4180f4;
        case 0x4180f8u: goto label_4180f8;
        case 0x4180fcu: goto label_4180fc;
        case 0x418100u: goto label_418100;
        case 0x418104u: goto label_418104;
        case 0x418108u: goto label_418108;
        case 0x41810cu: goto label_41810c;
        case 0x418110u: goto label_418110;
        case 0x418114u: goto label_418114;
        case 0x418118u: goto label_418118;
        case 0x41811cu: goto label_41811c;
        case 0x418120u: goto label_418120;
        case 0x418124u: goto label_418124;
        case 0x418128u: goto label_418128;
        case 0x41812cu: goto label_41812c;
        case 0x418130u: goto label_418130;
        case 0x418134u: goto label_418134;
        case 0x418138u: goto label_418138;
        default: break;
    }

    ctx->pc = 0x4180b0u;

label_4180b0:
    // 0x4180b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4180b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4180b4:
    // 0x4180b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4180b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4180b8:
    // 0x4180b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4180b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4180bc:
    // 0x4180bc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x4180bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4180c0:
    // 0x4180c0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x4180c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4180c4:
    // 0x4180c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4180c8:
    if (ctx->pc == 0x4180C8u) {
        ctx->pc = 0x4180C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180C4u;
        // 0x4180c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4180CCu;
        goto label_4180cc;
    }
    ctx->pc = 0x4180C4u;
    {
        const bool branch_taken_0x4180c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4180C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180C4u;
        // 0x4180c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4180c4) {
            ctx->pc = 0x41813Cu;
            return;
        }
    }
    ctx->pc = 0x4180CCu;
label_4180cc:
    // 0x4180cc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4180ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_4180d0:
    // 0x4180d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4180d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4180d4:
    // 0x4180d4: 0x2442aa30  addiu       $v0, $v0, -0x55D0
    ctx->pc = 0x4180d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945328));
label_4180d8:
    // 0x4180d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4180d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4180dc:
    // 0x4180dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4180dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4180e0:
    // 0x4180e0: 0x800008  jr          $a0
label_4180e4:
    if (ctx->pc == 0x4180E4u) {
        ctx->pc = 0x4180E8u;
        goto label_4180e8;
    }
    ctx->pc = 0x4180E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4180E8u: goto label_4180e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4180E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4180E8u;
label_4180e8:
    // 0x4180e8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4180e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4180ec:
    // 0x4180ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4180ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4180f0:
    // 0x4180f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4180f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4180f4:
    // 0x4180f4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x4180f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4180f8:
    // 0x4180f8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x4180f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4180fc:
    // 0x4180fc: 0x60f809  jalr        $v1
label_418100:
    if (ctx->pc == 0x418100u) {
        ctx->pc = 0x418100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180FCu;
        // 0x418100: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418104u;
        goto label_418104;
    }
    ctx->pc = 0x4180FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x418104u);
        ctx->pc = 0x418100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4180FCu;
        // 0x418100: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4180FCu, 0x418104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418104u;
label_418104:
    // 0x418104: 0x86020092  lh          $v0, 0x92($s0)
    ctx->pc = 0x418104u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_418108:
    // 0x418108: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x418108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_41810c:
    // 0x41810c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x41810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_418110:
    // 0x418110: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x418110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_418114:
    // 0x418114: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x418114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_418118:
    // 0x418118: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x418118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41811c:
    // 0x41811c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x41811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418120:
    // 0x418120: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x418120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418124:
    // 0x418124: 0x0  nop
    ctx->pc = 0x418124u;
    // NOP
label_418128:
    // 0x418128: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_41812c:
    if (ctx->pc == 0x41812Cu) {
        ctx->pc = 0x41812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418128u;
        // 0x41812c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418130u;
        goto label_418130;
    }
    ctx->pc = 0x418128u;
    {
        const bool branch_taken_0x418128 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x41812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418128u;
        // 0x41812c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418128) {
            ctx->pc = 0x418134u;
            goto label_418134;
        }
    }
    ctx->pc = 0x418130u;
label_418130:
    // 0x418130: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418134:
    // 0x418134: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_418138:
    if (ctx->pc == 0x418138u) {
        ctx->pc = 0x418138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418134u;
        // 0x418138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41813Cu;
        goto label_fallthrough_0x418134;
    }
    ctx->pc = 0x418134u;
    {
        const bool branch_taken_0x418134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x418138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418134u;
        // 0x418138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418134) {
            ctx->pc = 0x418140u;
            return;
        }
    }
label_fallthrough_0x418134:
    ctx->pc = 0x41813Cu;
}
