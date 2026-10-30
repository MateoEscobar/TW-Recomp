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

// Function: sub_004E51A8
// Address: 0x4e51a8 - 0x4e52f0
void sub_004E51A8_0x4e51a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E51A8_0x4e51a8");
#endif

    switch (ctx->pc) {
        case 0x4e5200u: goto label_4e5200;
        case 0x4e5224u: goto label_4e5224;
        case 0x4e5234u: goto label_4e5234;
        case 0x4e52b8u: goto label_4e52b8;
        default: break;
    }

    ctx->pc = 0x4e51a8u;

    // 0x4e51a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4e51a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4e51ac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4e51acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4e51b0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4e51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x4e51b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e51b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51b8: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x4e51b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4e51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x4e51c0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4e51c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x4e51c4: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x4e51c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x4e51c8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4e51cc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4e51ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51d0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x4e51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x4e51d4: 0x24720002  addiu       $s2, $v1, 0x2
    ctx->pc = 0x4e51d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4e51d8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4e51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4e51dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e51dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4e51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4e51e4: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4e51e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e51e8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4e51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x4e51ec: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x4e51ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4e51f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e51f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e51f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4E51F4u;
    {
        const bool branch_taken_0x4e51f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E51F4u;
        // 0x4e51f8: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e51f4) {
            ctx->pc = 0x4E527Cu;
            goto label_4e527c;
        }
    }
    ctx->pc = 0x4E51FCu;
    // 0x4e51fc: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x4e51fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_4e5200:
    // 0x4e5200: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5204: 0x8ef0489c  lw          $s0, 0x489C($s7)
    ctx->pc = 0x4e5204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
    // 0x4e5208: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e5208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e520c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5210: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5214: 0x8c51fffc  lw          $s1, -0x4($v0)
    ctx->pc = 0x4e5214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4e5218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e521c: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E521Cu;
    SET_GPR_U32(ctx, 31, 0x4E5224u);
    ctx->pc = 0x4E5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E521Cu;
    // 0x4e5220: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E521Cu, 0x4E5224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5224u;
label_4e5224:
    // 0x4e5224: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e522c: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E522Cu;
    SET_GPR_U32(ctx, 31, 0x4E5234u);
    ctx->pc = 0x4E5230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E522Cu;
    // 0x4e5230: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E522Cu, 0x4E5234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5234u;
label_4e5234:
    // 0x4e5234: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5238: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e523c: 0x0  nop
    ctx->pc = 0x4e523cu;
    // NOP
    // 0x4e5240: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E5240u;
    {
        const bool branch_taken_0x4e5240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5240u;
        // 0x4e5244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5240) {
            ctx->pc = 0x4E524Cu;
            goto label_4e524c;
        }
    }
    ctx->pc = 0x4E5248u;
    // 0x4e5248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e524c:
    // 0x4e524c: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x4e524cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4e5250: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4e5250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4e5254: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5258: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x4e5258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e525c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5260: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x4e5260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4e5264: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5268: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4e5268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4e526c: 0x49040  sll         $s2, $a0, 1
    ctx->pc = 0x4e526cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4e5270: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x4e5270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x4e5274: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x4E5274u;
    {
        const bool branch_taken_0x4e5274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5274u;
        // 0x4e5278: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5274) {
            ctx->pc = 0x4E5200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e5200;
        }
    }
    ctx->pc = 0x4E527Cu;
label_4e527c:
    // 0x4e527c: 0x16550009  bne         $s2, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E527Cu;
    {
        const bool branch_taken_0x4e527c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x4E5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E527Cu;
        // 0x4e5280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e527c) {
            ctx->pc = 0x4E52A4u;
            goto label_4e52a4;
        }
    }
    ctx->pc = 0x4E5284u;
    // 0x4e5284: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4e5284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4e5288: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x4e5288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x4e528c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x4e528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x4e5290: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x4e5290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x4e5294: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x4e5294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4e5298: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x4e5298u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x4e529c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4e529cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4e52a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e52a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e52a4:
    // 0x4e52a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e52a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e52a8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e52a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e52ac: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x4e52acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e52b0: 0xc139426  jal         func_4E5098
    ctx->pc = 0x4E52B0u;
    SET_GPR_U32(ctx, 31, 0x4E52B8u);
    ctx->pc = 0x4E52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E52B0u;
    // 0x4e52b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5098u, 0x4E52B0u, 0x4E52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E52B8u;
label_4e52b8:
    // 0x4e52b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4e52b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4e52bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4e52bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4e52c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4e52c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e52c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4e52c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e52c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e52c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e52cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4e52ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e52d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4e52d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e52d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4e52d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e52d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x4e52d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e52dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e52dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e52e0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x4e52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e52e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E52E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E52E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E52E4u;
        // 0x4e52e8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E52E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E52ECu;
    // 0x4e52ec: 0x0  nop
    ctx->pc = 0x4e52ecu;
    // NOP
    ctx->pc = 0x4e52f0u;
}
