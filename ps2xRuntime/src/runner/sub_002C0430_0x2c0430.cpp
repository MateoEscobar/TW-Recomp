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

// Function: sub_002C0430
// Address: 0x2c0430 - 0x2c04e0
void sub_002C0430_0x2c0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0430_0x2c0430");
#endif

    switch (ctx->pc) {
        case 0x2c049cu: goto label_2c049c;
        case 0x2c04a8u: goto label_2c04a8;
        default: break;
    }

    ctx->pc = 0x2c0430u;

    // 0x2c0430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c0434: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2c0434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2c0438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c0438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c043c: 0x24420a50  addiu       $v0, $v0, 0xA50
    ctx->pc = 0x2c043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
    // 0x2c0440: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c0440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c0444: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x2c0444u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x2c0448: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c044c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c044cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0450: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x2c0450u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x2c0454: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2c0454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2c0458: 0xe60c0010  swc1        $f12, 0x10($s0)
    ctx->pc = 0x2c0458u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2c045c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c045cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0460: 0xe60d0014  swc1        $f13, 0x14($s0)
    ctx->pc = 0x2c0460u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2c0464: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2c0464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x2c0468: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x2c0468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
    // 0x2c046c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2c046cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2c0470: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2c0470u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0474: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2c0474u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0478: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x2c0478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x2c047c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2c047cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2c0480: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c0480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c0484: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0484u;
    {
        const bool branch_taken_0x2c0484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c0484) {
            ctx->pc = 0x2C0488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0484u;
            // 0x2c0488: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C04A0u;
            goto label_2c04a0;
        }
    }
    ctx->pc = 0x2C048Cu;
    // 0x2c048c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c048cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c0490: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c0494: 0xc10708c  jal         func_41C230
    ctx->pc = 0x2C0494u;
    SET_GPR_U32(ctx, 31, 0x2C049Cu);
    ctx->pc = 0x2C0498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0494u;
    // 0x2c0498: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C230u, 0x2C0494u, 0x2C049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C049Cu;
label_2c049c:
    // 0x2c049c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c049cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c04a0:
    // 0x2c04a0: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x2C04A0u;
    SET_GPR_U32(ctx, 31, 0x2C04A8u);
    ctx->pc = 0x2C04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04A0u;
    // 0x2c04a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x2C04A0u, 0x2C04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04A8u;
label_2c04a8:
    // 0x2c04a8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2c04a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c04ac: 0x10b10005  beq         $a1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C04ACu;
    {
        const bool branch_taken_0x2c04ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x2C04B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04ACu;
        // 0x2c04b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04ac) {
            ctx->pc = 0x2C04C4u;
            goto label_2c04c4;
        }
    }
    ctx->pc = 0x2C04B4u;
    // 0x2c04b4: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c04b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2c04b8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c04b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c04bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2c04bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2c04c0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2c04c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_2c04c4:
    // 0x2c04c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c04c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c04c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c04cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c04ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c04d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c04d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c04d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C04D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C04D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04D4u;
        // 0x2c04d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C04D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C04DCu;
    // 0x2c04dc: 0x0  nop
    ctx->pc = 0x2c04dcu;
    // NOP
    ctx->pc = 0x2c04e0u;
}
