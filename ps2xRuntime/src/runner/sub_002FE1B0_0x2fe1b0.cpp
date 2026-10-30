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

// Function: sub_002FE1B0
// Address: 0x2fe1b0 - 0x2fe248
void sub_002FE1B0_0x2fe1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE1B0_0x2fe1b0");
#endif

    switch (ctx->pc) {
        case 0x2fe1b0u: goto label_2fe1b0;
        case 0x2fe1b4u: goto label_2fe1b4;
        case 0x2fe1b8u: goto label_2fe1b8;
        case 0x2fe1bcu: goto label_2fe1bc;
        case 0x2fe1c0u: goto label_2fe1c0;
        case 0x2fe1c4u: goto label_2fe1c4;
        case 0x2fe1c8u: goto label_2fe1c8;
        case 0x2fe1ccu: goto label_2fe1cc;
        case 0x2fe1d0u: goto label_2fe1d0;
        case 0x2fe1d4u: goto label_2fe1d4;
        case 0x2fe1d8u: goto label_2fe1d8;
        case 0x2fe1dcu: goto label_2fe1dc;
        case 0x2fe1e0u: goto label_2fe1e0;
        case 0x2fe1e4u: goto label_2fe1e4;
        case 0x2fe1e8u: goto label_2fe1e8;
        case 0x2fe1ecu: goto label_2fe1ec;
        case 0x2fe1f0u: goto label_2fe1f0;
        case 0x2fe1f4u: goto label_2fe1f4;
        case 0x2fe1f8u: goto label_2fe1f8;
        case 0x2fe1fcu: goto label_2fe1fc;
        case 0x2fe200u: goto label_2fe200;
        case 0x2fe204u: goto label_2fe204;
        case 0x2fe208u: goto label_2fe208;
        case 0x2fe20cu: goto label_2fe20c;
        case 0x2fe210u: goto label_2fe210;
        case 0x2fe214u: goto label_2fe214;
        case 0x2fe218u: goto label_2fe218;
        case 0x2fe21cu: goto label_2fe21c;
        case 0x2fe220u: goto label_2fe220;
        case 0x2fe224u: goto label_2fe224;
        case 0x2fe228u: goto label_2fe228;
        case 0x2fe22cu: goto label_2fe22c;
        case 0x2fe230u: goto label_2fe230;
        case 0x2fe234u: goto label_2fe234;
        case 0x2fe238u: goto label_2fe238;
        case 0x2fe23cu: goto label_2fe23c;
        case 0x2fe240u: goto label_2fe240;
        case 0x2fe244u: goto label_2fe244;
        default: break;
    }

    ctx->pc = 0x2fe1b0u;

label_2fe1b0:
    // 0x2fe1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fe1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2fe1b4:
    // 0x2fe1b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2fe1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2fe1b8:
    // 0x2fe1b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fe1b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1bc:
    // 0x2fe1bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2fe1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2fe1c0:
    // 0x2fe1c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2fe1c4:
    // 0x2fe1c4: 0xc0e4060  jal         func_390180
label_2fe1c8:
    if (ctx->pc == 0x2FE1C8u) {
        ctx->pc = 0x2FE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1C4u;
        // 0x2fe1c8: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE1CCu;
        goto label_2fe1cc;
    }
    ctx->pc = 0x2FE1C4u;
    SET_GPR_U32(ctx, 31, 0x2FE1CCu);
    ctx->pc = 0x2FE1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE1C4u;
    // 0x2fe1c8: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2FE1C4u, 0x2FE1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE1CCu;
label_2fe1cc:
    // 0x2fe1cc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2fe1ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1d0:
    // 0x2fe1d0: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_2fe1d4:
    if (ctx->pc == 0x2FE1D4u) {
        ctx->pc = 0x2FE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1D0u;
        // 0x2fe1d4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE1D8u;
        goto label_2fe1d8;
    }
    ctx->pc = 0x2FE1D0u;
    {
        const bool branch_taken_0x2fe1d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE1D0u;
        // 0x2fe1d4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe1d0) {
            ctx->pc = 0x2FE228u;
            goto label_2fe228;
        }
    }
    ctx->pc = 0x2FE1D8u;
label_2fe1d8:
    // 0x2fe1d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fe1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fe1dc:
    // 0x2fe1dc: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x2fe1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2fe1e0:
    // 0x2fe1e0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fe1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2fe1e4:
    // 0x2fe1e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fe1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fe1e8:
    // 0x2fe1e8: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2fe1e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2fe1ec:
    // 0x2fe1ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fe1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fe1f0:
    // 0x2fe1f0: 0x84700092  lh          $s0, 0x92($v1)
    ctx->pc = 0x2fe1f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_2fe1f4:
    // 0x2fe1f4: 0x8cc700ac  lw          $a3, 0xAC($a2)
    ctx->pc = 0x2fe1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2fe1f8:
    // 0x2fe1f8: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x2fe1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_2fe1fc:
    // 0x2fe1fc: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2fe1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2fe200:
    // 0x2fe200: 0xe0f809  jalr        $a3
label_2fe204:
    if (ctx->pc == 0x2FE204u) {
        ctx->pc = 0x2FE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE200u;
        // 0x2fe204: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE208u;
        goto label_2fe208;
    }
    ctx->pc = 0x2FE200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x2FE208u);
        ctx->pc = 0x2FE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE200u;
        // 0x2fe204: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE200u, 0x2FE208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FE208u;
label_2fe208:
    // 0x2fe208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fe208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fe20c:
    // 0x2fe20c: 0xc0cd780  jal         func_335E00
label_2fe210:
    if (ctx->pc == 0x2FE210u) {
        ctx->pc = 0x2FE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE20Cu;
        // 0x2fe210: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE214u;
        goto label_2fe214;
    }
    ctx->pc = 0x2FE20Cu;
    SET_GPR_U32(ctx, 31, 0x2FE214u);
    ctx->pc = 0x2FE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE20Cu;
    // 0x2fe210: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2FE20Cu, 0x2FE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE214u;
label_2fe214:
    // 0x2fe214: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2fe214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2fe218:
    // 0x2fe218: 0xc0bf742  jal         func_2FDD08
label_2fe21c:
    if (ctx->pc == 0x2FE21Cu) {
        ctx->pc = 0x2FE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE218u;
        // 0x2fe21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE220u;
        goto label_2fe220;
    }
    ctx->pc = 0x2FE218u;
    SET_GPR_U32(ctx, 31, 0x2FE220u);
    ctx->pc = 0x2FE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE218u;
    // 0x2fe21c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDD08u, 0x2FE218u, 0x2FE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE220u;
label_2fe220:
    // 0x2fe220: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fe224:
    if (ctx->pc == 0x2FE224u) {
        ctx->pc = 0x2FE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE220u;
        // 0x2fe224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE228u;
        goto label_2fe228;
    }
    ctx->pc = 0x2FE220u;
    {
        const bool branch_taken_0x2fe220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE220u;
        // 0x2fe224: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe220) {
            ctx->pc = 0x2FE230u;
            goto label_2fe230;
        }
    }
    ctx->pc = 0x2FE228u;
label_2fe228:
    // 0x2fe228: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fe228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fe22c:
    // 0x2fe22c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2fe22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fe230:
    // 0x2fe230: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2fe230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fe234:
    // 0x2fe234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fe238:
    // 0x2fe238: 0x3e00008  jr          $ra
label_2fe23c:
    if (ctx->pc == 0x2FE23Cu) {
        ctx->pc = 0x2FE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE238u;
        // 0x2fe23c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FE240u;
        goto label_2fe240;
    }
    ctx->pc = 0x2FE238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE238u;
        // 0x2fe23c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE240u;
label_2fe240:
    // 0x2fe240: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2fe240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2fe244:
    // 0x2fe244: 0x0  nop
    ctx->pc = 0x2fe244u;
    // NOP
    ctx->pc = 0x2fe248u;
}
