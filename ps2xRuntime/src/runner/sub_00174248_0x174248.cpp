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

// Function: sub_00174248
// Address: 0x174248 - 0x174320
void sub_00174248_0x174248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174248_0x174248");
#endif

    switch (ctx->pc) {
        case 0x17425cu: goto label_17425c;
        case 0x174294u: goto label_174294;
        case 0x1742a8u: goto label_1742a8;
        case 0x174308u: goto label_174308;
        default: break;
    }

    ctx->pc = 0x174248u;

    // 0x174248: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x174248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17424c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x174250: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174254: 0xc11a45e  jal         func_469178
    ctx->pc = 0x174254u;
    SET_GPR_U32(ctx, 31, 0x17425Cu);
    ctx->pc = 0x174258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174254u;
    // 0x174258: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x174254u, 0x17425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17425Cu;
label_17425c:
    // 0x17425c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x174260: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x174260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x174264: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x174264u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5147C4u));
    // 0x174268: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x174268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17426c: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17426cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x174270: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x174274: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x174274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x174278: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x174278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17427c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x174280: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x174280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x174284: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x174284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x174288: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x174288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17428c: 0xc05e9a0  jal         func_17A680
    ctx->pc = 0x17428Cu;
    SET_GPR_U32(ctx, 31, 0x174294u);
    ctx->pc = 0x174290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17428Cu;
    // 0x174290: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A680u, 0x17428Cu, 0x174294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174294u;
label_174294:
    // 0x174294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x174294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174298: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x174298u;
    {
        const bool branch_taken_0x174298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174298u;
        // 0x17429c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174298) {
            ctx->pc = 0x17430Cu;
            goto label_17430c;
        }
    }
    ctx->pc = 0x1742A0u;
    // 0x1742a0: 0xc064a1c  jal         func_192870
    ctx->pc = 0x1742A0u;
    SET_GPR_U32(ctx, 31, 0x1742A8u);
    ctx->pc = 0x1742A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1742A0u;
    // 0x1742a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192870u, 0x1742A0u, 0x1742A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1742A8u;
label_1742a8:
    // 0x1742a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1742a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742ac: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1742acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1742b0: 0x8ce402b8  lw          $a0, 0x2B8($a3)
    ctx->pc = 0x1742b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 696)));
    // 0x1742b4: 0xc461cc60  lwc1        $f1, -0x33A0($v1)
    ctx->pc = 0x1742b4u;
    { uint32_t bits = FAST_READ32(0x50CC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1742b8: 0xc4800334  lwc1        $f0, 0x334($a0)
    ctx->pc = 0x1742b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1742bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1742bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1742c0: 0x0  nop
    ctx->pc = 0x1742c0u;
    // NOP
    // 0x1742c4: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x1742C4u;
    {
        const bool branch_taken_0x1742c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1742C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742C4u;
        // 0x1742c8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742c4) {
            ctx->pc = 0x174308u;
            goto label_174308;
        }
    }
    ctx->pc = 0x1742CCu;
    // 0x1742cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1742ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1742d0: 0x8c43cd4c  lw          $v1, -0x32B4($v0)
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1742d4: 0x24640c74  addiu       $a0, $v1, 0xC74
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3188));
    // 0x1742d8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1742d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1742dc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1742dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1742e0: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1742E0u;
    {
        const bool branch_taken_0x1742e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1742E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742E0u;
        // 0x1742e4: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742e0) {
            ctx->pc = 0x174300u;
            goto label_174300;
        }
    }
    ctx->pc = 0x1742E8u;
    // 0x1742e8: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1742E8u;
    {
        const bool branch_taken_0x1742e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1742e8) {
            ctx->pc = 0x1742ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1742E8u;
            // 0x1742ec: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1742F0u;
            goto label_1742f0;
        }
    }
    ctx->pc = 0x1742F0u;
label_1742f0:
    // 0x1742f0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1742f4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1742f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1742F8u;
    {
        const bool branch_taken_0x1742f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1742FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1742F8u;
        // 0x1742fc: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742f8) {
            ctx->pc = 0x174308u;
            goto label_174308;
        }
    }
    ctx->pc = 0x174300u;
label_174300:
    // 0x174300: 0xc137a92  jal         func_4DEA48
    ctx->pc = 0x174300u;
    SET_GPR_U32(ctx, 31, 0x174308u);
    ctx->pc = 0x4DEA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEA48u, 0x174300u, 0x174308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174308u;
label_174308:
    // 0x174308: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x174308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17430c:
    // 0x17430c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17430cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174310: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174314: 0x3e00008  jr          $ra
    ctx->pc = 0x174314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174314u;
        // 0x174318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17431Cu;
    // 0x17431c: 0x0  nop
    ctx->pc = 0x17431cu;
    // NOP
    ctx->pc = 0x174320u;
}
