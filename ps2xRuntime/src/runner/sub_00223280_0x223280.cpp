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

// Function: sub_00223280
// Address: 0x223280 - 0x223348
void sub_00223280_0x223280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223280_0x223280");
#endif

    switch (ctx->pc) {
        case 0x2232a4u: goto label_2232a4;
        case 0x2232b8u: goto label_2232b8;
        case 0x2232d0u: goto label_2232d0;
        case 0x2232e8u: goto label_2232e8;
        case 0x22331cu: goto label_22331c;
        default: break;
    }

    ctx->pc = 0x223280u;

    // 0x223280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223284: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x223284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x223288: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22328c: 0x8c6202a8  lw          $v0, 0x2A8($v1)
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5102A8u));
    // 0x223290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223294: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x223294u;
    {
        const bool branch_taken_0x223294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223294u;
        // 0x223298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223294) {
            ctx->pc = 0x2232B0u;
            goto label_2232b0;
        }
    }
    ctx->pc = 0x22329Cu;
    // 0x22329c: 0xc087502  jal         func_21D408
    ctx->pc = 0x22329Cu;
    SET_GPR_U32(ctx, 31, 0x2232A4u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22329Cu, 0x2232A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232A4u;
label_2232a4:
    // 0x2232a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2232a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2232a8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2232A8u;
    {
        const bool branch_taken_0x2232a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2232a8) {
            ctx->pc = 0x223324u;
            goto label_223324;
        }
    }
    ctx->pc = 0x2232B0u;
label_2232b0:
    // 0x2232b0: 0xc088eb4  jal         func_223AD0
    ctx->pc = 0x2232B0u;
    SET_GPR_U32(ctx, 31, 0x2232B8u);
    ctx->pc = 0x2232B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232B0u;
    // 0x2232b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223AD0u, 0x2232B0u, 0x2232B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232B8u;
label_2232b8:
    // 0x2232b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2232B8u;
    {
        const bool branch_taken_0x2232b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232B8u;
        // 0x2232bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232b8) {
            ctx->pc = 0x2232C8u;
            goto label_2232c8;
        }
    }
    ctx->pc = 0x2232C0u;
    // 0x2232c0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2232C0u;
    {
        const bool branch_taken_0x2232c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232C0u;
        // 0x2232c4: 0xc44001e4  lwc1        $f0, 0x1E4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232c0) {
            ctx->pc = 0x223334u;
            goto label_223334;
        }
    }
    ctx->pc = 0x2232C8u;
label_2232c8:
    // 0x2232c8: 0xc088e40  jal         func_223900
    ctx->pc = 0x2232C8u;
    SET_GPR_U32(ctx, 31, 0x2232D0u);
    ctx->pc = 0x2232CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232C8u;
    // 0x2232cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x2232C8u, 0x2232D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232D0u;
label_2232d0:
    // 0x2232d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2232D0u;
    {
        const bool branch_taken_0x2232d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232D0u;
        // 0x2232d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d0) {
            ctx->pc = 0x2232E0u;
            goto label_2232e0;
        }
    }
    ctx->pc = 0x2232D8u;
    // 0x2232d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2232D8u;
    {
        const bool branch_taken_0x2232d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2232D8u;
        // 0x2232dc: 0xc44001ec  lwc1        $f0, 0x1EC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2232d8) {
            ctx->pc = 0x223334u;
            goto label_223334;
        }
    }
    ctx->pc = 0x2232E0u;
label_2232e0:
    // 0x2232e0: 0xc088e60  jal         func_223980
    ctx->pc = 0x2232E0u;
    SET_GPR_U32(ctx, 31, 0x2232E8u);
    ctx->pc = 0x2232E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2232E0u;
    // 0x2232e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2232E0u, 0x2232E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2232E8u;
label_2232e8:
    // 0x2232e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2232E8u;
    {
        const bool branch_taken_0x2232e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2232e8) {
            ctx->pc = 0x223314u;
            goto label_223314;
        }
    }
    ctx->pc = 0x2232F0u;
    // 0x2232f0: 0xc60101ac  lwc1        $f1, 0x1AC($s0)
    ctx->pc = 0x2232f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2232f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2232f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2232f8: 0x0  nop
    ctx->pc = 0x2232f8u;
    // NOP
    // 0x2232fc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2232fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223300: 0x0  nop
    ctx->pc = 0x223300u;
    // NOP
    // 0x223304: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x223304u;
    {
        const bool branch_taken_0x223304 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223304u;
        // 0x223308: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223304) {
            ctx->pc = 0x223314u;
            goto label_223314;
        }
    }
    ctx->pc = 0x22330Cu;
    // 0x22330c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22330Cu;
    {
        const bool branch_taken_0x22330c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22330Cu;
        // 0x223310: 0xc44001f0  lwc1        $f0, 0x1F0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22330c) {
            ctx->pc = 0x223334u;
            goto label_223334;
        }
    }
    ctx->pc = 0x223314u;
label_223314:
    // 0x223314: 0xc088e60  jal         func_223980
    ctx->pc = 0x223314u;
    SET_GPR_U32(ctx, 31, 0x22331Cu);
    ctx->pc = 0x223318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223314u;
    // 0x223318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x223314u, 0x22331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22331Cu;
label_22331c:
    // 0x22331c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22331Cu;
    {
        const bool branch_taken_0x22331c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22331Cu;
        // 0x223320: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22331c) {
            ctx->pc = 0x223330u;
            goto label_223330;
        }
    }
    ctx->pc = 0x223324u;
label_223324:
    // 0x223324: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223324u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223328u;
    {
        const bool branch_taken_0x223328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223328u;
        // 0x22332c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223328) {
            ctx->pc = 0x223338u;
            goto label_223338;
        }
    }
    ctx->pc = 0x223330u;
label_223330:
    // 0x223330: 0xc44001e8  lwc1        $f0, 0x1E8($v0)
    ctx->pc = 0x223330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223334:
    // 0x223334: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_223338:
    // 0x223338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22333c: 0x3e00008  jr          $ra
    ctx->pc = 0x22333Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22333Cu;
        // 0x223340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22333Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223344u;
    // 0x223344: 0x0  nop
    ctx->pc = 0x223344u;
    // NOP
    ctx->pc = 0x223348u;
}
