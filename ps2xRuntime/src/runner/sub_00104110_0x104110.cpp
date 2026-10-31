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

// Function: sub_00104110
// Address: 0x104110 - 0x1041f8
void sub_00104110_0x104110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104110_0x104110");
#endif

    switch (ctx->pc) {
        case 0x104140u: goto label_104140;
        case 0x104178u: goto label_104178;
        case 0x1041e8u: goto label_1041e8;
        default: break;
    }

    ctx->pc = 0x104110u;

    // 0x104110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104114: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x104114u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10411c: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x10411cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104120: 0x9542001c  lhu         $v0, 0x1C($t2)
    ctx->pc = 0x104120u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x104124: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x104124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x104128: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x104128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10412c: 0xa542001c  sh          $v0, 0x1C($t2)
    ctx->pc = 0x10412cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x104130: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x104130u;
    {
        const bool branch_taken_0x104130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x104134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104130u;
        // 0x104134: 0xe5400018  swc1        $f0, 0x18($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104130) {
            ctx->pc = 0x1041D4u;
            goto label_1041d4;
        }
    }
    ctx->pc = 0x104138u;
    // 0x104138: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x104138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x10413c: 0x0  nop
    ctx->pc = 0x10413cu;
    // NOP
label_104140:
    // 0x104140: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x104140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x104144: 0x25470024  addiu       $a3, $t2, 0x24
    ctx->pc = 0x104144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
    // 0x104148: 0x254900d8  addiu       $t1, $t2, 0xD8
    ctx->pc = 0x104148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 216));
    // 0x10414c: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x10414cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x104150: 0x94640018  lhu         $a0, 0x18($v1)
    ctx->pc = 0x104150u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x104154: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x104154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x104158: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x104158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x10415c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x104160: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x104160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x104164: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x104164u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x104168: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x104168u;
    {
        const bool branch_taken_0x104168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104168u;
        // 0x10416c: 0x254600b4  addiu       $a2, $t2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104168) {
            ctx->pc = 0x1041CCu;
            goto label_1041cc;
        }
    }
    ctx->pc = 0x104170u;
    // 0x104170: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x104170u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104174: 0x0  nop
    ctx->pc = 0x104174u;
    // NOP
label_104178:
    // 0x104178: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x104178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10417c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10417Cu;
    {
        const bool branch_taken_0x10417c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10417Cu;
        // 0x104180: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10417c) {
            ctx->pc = 0x1041B8u;
            goto label_1041b8;
        }
    }
    ctx->pc = 0x104184u;
    // 0x104184: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x104184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x104188: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x104188u;
    {
        const bool branch_taken_0x104188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10418Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104188u;
        // 0x10418c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104188) {
            ctx->pc = 0x1041B8u;
            goto label_1041b8;
        }
    }
    ctx->pc = 0x104190u;
    // 0x104190: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x104190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x104194: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x104194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x104198: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x104198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x10419c: 0x90640008  lbu         $a0, 0x8($v1)
    ctx->pc = 0x10419cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1041a0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x1041a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1041a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1041a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1041a8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x1041a8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1041ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1041acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1041b0: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x1041b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1041b4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1041b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1041b8:
    // 0x1041b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1041b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1041bc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1041bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1041c0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1041c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1041c4: 0x1500ffec  bnez        $t0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1041C4u;
    {
        const bool branch_taken_0x1041c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1041C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041C4u;
        // 0x1041c8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041c4) {
            ctx->pc = 0x104178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104178;
        }
    }
    ctx->pc = 0x1041CCu;
label_1041cc:
    // 0x1041cc: 0x54a0ffdc  bnel        $a1, $zero, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1041CCu;
    {
        const bool branch_taken_0x1041cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1041cc) {
            ctx->pc = 0x1041D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1041CCu;
            // 0x1041d0: 0x8d430004  lw          $v1, 0x4($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104140;
        }
    }
    ctx->pc = 0x1041D4u;
label_1041d4:
    // 0x1041d4: 0x8d420120  lw          $v0, 0x120($t2)
    ctx->pc = 0x1041d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 288)));
    // 0x1041d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1041D8u;
    {
        const bool branch_taken_0x1041d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1041DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041D8u;
        // 0x1041dc: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041d8) {
            ctx->pc = 0x1041E8u;
            goto label_1041e8;
        }
    }
    ctx->pc = 0x1041E0u;
    // 0x1041e0: 0xc040776  jal         func_101DD8
    ctx->pc = 0x1041E0u;
    SET_GPR_U32(ctx, 31, 0x1041E8u);
    ctx->pc = 0x1041E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1041E0u;
    // 0x1041e4: 0x9485001c  lhu         $a1, 0x1C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101DD8u, 0x1041E0u, 0x1041E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1041E8u;
label_1041e8:
    // 0x1041e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1041e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1041ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1041ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1041F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041ECu;
        // 0x1041f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1041ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1041F4u;
    // 0x1041f4: 0x0  nop
    ctx->pc = 0x1041f4u;
    // NOP
    ctx->pc = 0x1041f8u;
}
