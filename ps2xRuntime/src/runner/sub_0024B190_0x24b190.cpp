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

// Function: sub_0024B190
// Address: 0x24b190 - 0x24b2a8
void sub_0024B190_0x24b190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B190_0x24b190");
#endif

    switch (ctx->pc) {
        case 0x24b1b8u: goto label_24b1b8;
        default: break;
    }

    ctx->pc = 0x24b190u;

    // 0x24b190: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x24b190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x24b194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24b194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b198: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
    ctx->pc = 0x24B198u;
    {
        const bool branch_taken_0x24b198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B198u;
        // 0x24b19c: 0x3c0c0051  lui         $t4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b198) {
            ctx->pc = 0x24B27Cu;
            goto label_24b27c;
        }
    }
    ctx->pc = 0x24B1A0u;
    // 0x24b1a0: 0x3c013f02  lui         $at, 0x3F02
    ctx->pc = 0x24b1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16130 << 16));
    // 0x24b1a4: 0x34218f5d  ori         $at, $at, 0x8F5D
    ctx->pc = 0x24b1a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36701);
    // 0x24b1a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b1a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b1ac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x24b1acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1b0: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x24b1b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b1b4: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x24b1b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24b1b8:
    // 0x24b1b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x24b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24b1bc: 0x14c2002c  bne         $a2, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x24B1BCu;
    {
        const bool branch_taken_0x24b1bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1BCu;
        // 0x24b1c0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1bc) {
            ctx->pc = 0x24B270u;
            goto label_24b270;
        }
    }
    ctx->pc = 0x24B1C4u;
    // 0x24b1c4: 0x8d43b734  lw          $v1, -0x48CC($t2)
    ctx->pc = 0x24b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294948660)));
    // 0x24b1c8: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x24b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24b1cc: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x24b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x24b1d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x24b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24b1d4: 0x2c4301f5  sltiu       $v1, $v0, 0x1F5
    ctx->pc = 0x24b1d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)501) ? 1 : 0);
    // 0x24b1d8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B1D8u;
    {
        const bool branch_taken_0x24b1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b1d8) {
            ctx->pc = 0x24B1FCu;
            goto label_24b1fc;
        }
    }
    ctx->pc = 0x24B1E0u;
    // 0x24b1e0: 0xa0eb0000  sb          $t3, 0x0($a3)
    ctx->pc = 0x24b1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 11));
    // 0x24b1e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b1e8: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x24b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24b1ec: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x24b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x24b1f0: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x24b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x24b1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1F4u;
        // 0x24b1f8: 0xad040008  sw          $a0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B1FCu;
label_24b1fc:
    // 0x24b1fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B1FCu;
    {
        const bool branch_taken_0x24b1fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B1FCu;
        // 0x24b200: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b1fc) {
            ctx->pc = 0x24B218u;
            goto label_24b218;
        }
    }
    ctx->pc = 0x24B204u;
    // 0x24b204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b208: 0x0  nop
    ctx->pc = 0x24b208u;
    // NOP
    // 0x24b20c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b20cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b210: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24B210u;
    {
        const bool branch_taken_0x24b210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B210u;
        // 0x24b214: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b210) {
            ctx->pc = 0x24B234u;
            goto label_24b234;
        }
    }
    ctx->pc = 0x24B218u;
label_24b218:
    // 0x24b218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b21c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24b220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b224: 0x0  nop
    ctx->pc = 0x24b224u;
    // NOP
    // 0x24b228: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24b228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24b22c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x24b22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24b230: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x24b230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_24b234:
    // 0x24b234: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24b234u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x24b238: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x24b238u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x24b23c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24b23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b240: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x24b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x24b244: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B244u;
    {
        const bool branch_taken_0x24b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B244u;
        // 0x24b248: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b244) {
            ctx->pc = 0x24B250u;
            goto label_24b250;
        }
    }
    ctx->pc = 0x24B24Cu;
    // 0x24b24c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b250:
    // 0x24b250: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x24b250u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x24b254: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b258: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x24b258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x24b25c: 0x8d45b734  lw          $a1, -0x48CC($t2)
    ctx->pc = 0x24b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294948660)));
    // 0x24b260: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x24b260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x24b264: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x24b264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x24b268: 0x3e00008  jr          $ra
    ctx->pc = 0x24B268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B268u;
        // 0x24b26c: 0xad040008  sw          $a0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B270u;
label_24b270:
    // 0x24b270: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x24b270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24b274: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x24B274u;
    {
        const bool branch_taken_0x24b274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B274u;
        // 0x24b278: 0x2529000c  addiu       $t1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b274) {
            ctx->pc = 0x24B1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b1b8;
        }
    }
    ctx->pc = 0x24B27Cu;
label_24b27c:
    // 0x24b27c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x24b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b280: 0x8d82b734  lw          $v0, -0x48CC($t4)
    ctx->pc = 0x24b280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294948660)));
    // 0x24b284: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x24b284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x24b288: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x24b288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x24b28c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x24b28cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24b290: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24B290u;
    {
        const bool branch_taken_0x24b290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B290u;
        // 0x24b294: 0xad040004  sw          $a0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b290) {
            ctx->pc = 0x24B29Cu;
            goto label_24b29c;
        }
    }
    ctx->pc = 0x24B298u;
    // 0x24b298: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x24b298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_24b29c:
    // 0x24b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x24B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B29Cu;
        // 0x24b2a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B2A4u;
    // 0x24b2a4: 0x0  nop
    ctx->pc = 0x24b2a4u;
    // NOP
    ctx->pc = 0x24b2a8u;
}
