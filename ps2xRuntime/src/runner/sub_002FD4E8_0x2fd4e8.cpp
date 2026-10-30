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

// Function: sub_002FD4E8
// Address: 0x2fd4e8 - 0x2fda38
void sub_002FD4E8_0x2fd4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD4E8_0x2fd4e8");
#endif

    switch (ctx->pc) {
        case 0x2fd534u: goto label_2fd534;
        case 0x2fd558u: goto label_2fd558;
        case 0x2fd568u: goto label_2fd568;
        case 0x2fd5b8u: goto label_2fd5b8;
        case 0x2fd5c8u: goto label_2fd5c8;
        case 0x2fd640u: goto label_2fd640;
        case 0x2fd658u: goto label_2fd658;
        case 0x2fd6a0u: goto label_2fd6a0;
        case 0x2fd6b0u: goto label_2fd6b0;
        case 0x2fd6c0u: goto label_2fd6c0;
        case 0x2fd6d0u: goto label_2fd6d0;
        case 0x2fd6f0u: goto label_2fd6f0;
        case 0x2fd6f8u: goto label_2fd6f8;
        case 0x2fd758u: goto label_2fd758;
        case 0x2fd7a0u: goto label_2fd7a0;
        case 0x2fd7e4u: goto label_2fd7e4;
        case 0x2fd878u: goto label_2fd878;
        case 0x2fd888u: goto label_2fd888;
        case 0x2fd8a0u: goto label_2fd8a0;
        case 0x2fd978u: goto label_2fd978;
        case 0x2fd98cu: goto label_2fd98c;
        case 0x2fd99cu: goto label_2fd99c;
        case 0x2fd9b8u: goto label_2fd9b8;
        case 0x2fd9d0u: goto label_2fd9d0;
        default: break;
    }

    ctx->pc = 0x2fd4e8u;

    // 0x2fd4e8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2fd4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2fd4ec: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2fd4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2fd4f0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2fd4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2fd4f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd4f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd4f8: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2fd4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2fd4fc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2fd4fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd500: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2fd500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2fd504: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2fd504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2fd508: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2fd508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2fd50c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2fd50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2fd510: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2fd510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2fd514: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2fd514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2fd518: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2fd518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2fd51c: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x2fd51cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2fd520: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2fd520u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2fd524: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd528: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2fd528u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd52c: 0xc08a158  jal         func_228560
    ctx->pc = 0x2FD52Cu;
    SET_GPR_U32(ctx, 31, 0x2FD534u);
    ctx->pc = 0x2FD530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD52Cu;
    // 0x2fd530: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228560u, 0x2FD52Cu, 0x2FD534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD534u;
label_2fd534:
    // 0x2fd534: 0x105500fb  beq         $v0, $s5, . + 4 + (0xFB << 2)
    ctx->pc = 0x2FD534u;
    {
        const bool branch_taken_0x2fd534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2FD538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD534u;
        // 0x2fd538: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd534) {
            ctx->pc = 0x2FD924u;
            goto label_2fd924;
        }
    }
    ctx->pc = 0x2FD53Cu;
    // 0x2fd53c: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fd540: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2fd540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2fd544: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x2fd544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2fd548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd54c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2fd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2fd550: 0xc0a739c  jal         func_29CE70
    ctx->pc = 0x2FD550u;
    SET_GPR_U32(ctx, 31, 0x2FD558u);
    ctx->pc = 0x2FD554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD550u;
    // 0x2fd554: 0xa2b02b  sltu        $s6, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CE70u, 0x2FD550u, 0x2FD558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD558u;
label_2fd558:
    // 0x2fd558: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x2FD558u;
    {
        const bool branch_taken_0x2fd558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD558u;
        // 0x2fd55c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd558) {
            ctx->pc = 0x2FD9FCu;
            goto label_2fd9fc;
        }
    }
    ctx->pc = 0x2FD560u;
    // 0x2fd560: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FD560u;
    SET_GPR_U32(ctx, 31, 0x2FD568u);
    ctx->pc = 0x2FD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD560u;
    // 0x2fd564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FD560u, 0x2FD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD568u;
label_2fd568:
    // 0x2fd568: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x2fd568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x2fd56c: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2fd56cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fd570: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fd570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd574: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2fd574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2fd578: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2fd578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd57c: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x2fd57cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fd580: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2fd584: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fd584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fd588: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2fd588u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd58c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fd58cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd590: 0x26540090  addiu       $s4, $s2, 0x90
    ctx->pc = 0x2fd590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2fd594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd598: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fd598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd59c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2fd59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x2fd5a0: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x2fd5a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2fd5a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2fd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2fd5a8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2fd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2fd5ac: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2fd5acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd5b0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2FD5B0u;
    SET_GPR_U32(ctx, 31, 0x2FD5B8u);
    ctx->pc = 0x2FD5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5B0u;
    // 0x2fd5b4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2FD5B0u, 0x2FD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5B8u;
label_2fd5b8:
    // 0x2fd5b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fd5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd5bc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2fd5bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2fd5c0: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x2FD5C0u;
    SET_GPR_U32(ctx, 31, 0x2FD5C8u);
    ctx->pc = 0x2FD5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD5C0u;
    // 0x2fd5c4: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2FD5C0u, 0x2FD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD5C8u;
label_2fd5c8:
    // 0x2fd5c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2fd5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2fd5cc: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2FD5CCu;
    {
        const bool branch_taken_0x2fd5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd5cc) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD5D4u;
    // 0x2fd5d4: 0x16c00046  bnez        $s6, . + 4 + (0x46 << 2)
    ctx->pc = 0x2FD5D4u;
    {
        const bool branch_taken_0x2fd5d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd5d4) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD5DCu;
    // 0x2fd5dc: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2fd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd5e0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2fd5e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd5e4: 0x0  nop
    ctx->pc = 0x2fd5e4u;
    // NOP
    // 0x2fd5e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD5E8u;
    {
        const bool branch_taken_0x2fd5e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5E8u;
        // 0x2fd5ec: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5e8) {
            ctx->pc = 0x2FD5F8u;
            goto label_2fd5f8;
        }
    }
    ctx->pc = 0x2FD5F0u;
    // 0x2fd5f0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2FD5F0u;
    {
        const bool branch_taken_0x2fd5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD5F0u;
        // 0x2fd5f4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5f0) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD5F8u;
label_2fd5f8:
    // 0x2fd5f8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2fd5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd5fc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2fd5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd600: 0x0  nop
    ctx->pc = 0x2fd600u;
    // NOP
    // 0x2fd604: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x2FD604u;
    {
        const bool branch_taken_0x2fd604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD604u;
        // 0x2fd608: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd604) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD60Cu;
    // 0x2fd60c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fd60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd610: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2fd610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2fd614: 0xc4600140  lwc1        $f0, 0x140($v1)
    ctx->pc = 0x2fd614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd618: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2fd618u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd61c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2fd61cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd620: 0x0  nop
    ctx->pc = 0x2fd620u;
    // NOP
    // 0x2fd624: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x2FD624u;
    {
        const bool branch_taken_0x2fd624 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD624u;
        // 0x2fd628: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd624) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD62Cu;
    // 0x2fd62c: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x2fd630: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fd630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fd634: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2fd634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fd638: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2FD638u;
    SET_GPR_U32(ctx, 31, 0x2FD640u);
    ctx->pc = 0x2FD63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD638u;
    // 0x2fd63c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2FD638u, 0x2FD640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD640u;
label_2fd640:
    // 0x2fd640: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2fd640u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2fd644: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fd644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fd648: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fd648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fd64c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2fd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2fd650: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x2FD650u;
    SET_GPR_U32(ctx, 31, 0x2FD658u);
    ctx->pc = 0x2FD654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD650u;
    // 0x2fd654: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2FD650u, 0x2FD658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD658u;
label_2fd658:
    // 0x2fd658: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x2fd658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd65c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fd65cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd660: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2fd660u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2fd664: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2fd664u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fd668: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2fd668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fd66c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2fd66cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2fd670: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x2fd670u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2fd674: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x2fd674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x2fd678: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x2fd678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x2fd67c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd680: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2fd680u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd684: 0x0  nop
    ctx->pc = 0x2fd684u;
    // NOP
    // 0x2fd688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2fd688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd68c: 0x0  nop
    ctx->pc = 0x2fd68cu;
    // NOP
    // 0x2fd690: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x2FD690u;
    {
        const bool branch_taken_0x2fd690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd690) {
            ctx->pc = 0x2FD694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD690u;
            // 0x2fd694: 0x92250025  lbu         $a1, 0x25($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD6DCu;
            goto label_2fd6dc;
        }
    }
    ctx->pc = 0x2FD698u;
    // 0x2fd698: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2FD698u;
    SET_GPR_U32(ctx, 31, 0x2FD6A0u);
    ctx->pc = 0x2FD69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD698u;
    // 0x2fd69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2FD698u, 0x2FD6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6A0u;
label_2fd6a0:
    // 0x2fd6a0: 0x5055000e  beql        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2FD6A0u;
    {
        const bool branch_taken_0x2fd6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2fd6a0) {
            ctx->pc = 0x2FD6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD6A0u;
            // 0x2fd6a4: 0x92250025  lbu         $a1, 0x25($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD6DCu;
            goto label_2fd6dc;
        }
    }
    ctx->pc = 0x2FD6A8u;
    // 0x2fd6a8: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2FD6A8u;
    SET_GPR_U32(ctx, 31, 0x2FD6B0u);
    ctx->pc = 0x2FD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6A8u;
    // 0x2fd6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2FD6A8u, 0x2FD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6B0u;
label_2fd6b0:
    // 0x2fd6b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FD6B0u;
    {
        const bool branch_taken_0x2fd6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd6b0) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD6B8u;
    // 0x2fd6b8: 0xc089018  jal         func_224060
    ctx->pc = 0x2FD6B8u;
    SET_GPR_U32(ctx, 31, 0x2FD6C0u);
    ctx->pc = 0x2FD6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6B8u;
    // 0x2fd6bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2FD6B8u, 0x2FD6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6C0u;
label_2fd6c0:
    // 0x2fd6c0: 0x1455000b  bne         $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2FD6C0u;
    {
        const bool branch_taken_0x2fd6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2fd6c0) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD6C8u;
    // 0x2fd6c8: 0xc089018  jal         func_224060
    ctx->pc = 0x2FD6C8u;
    SET_GPR_U32(ctx, 31, 0x2FD6D0u);
    ctx->pc = 0x2FD6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6C8u;
    // 0x2fd6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224060u, 0x2FD6C8u, 0x2FD6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6D0u;
label_2fd6d0:
    // 0x2fd6d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD6D0u;
    {
        const bool branch_taken_0x2fd6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd6d0) {
            ctx->pc = 0x2FD6F0u;
            goto label_2fd6f0;
        }
    }
    ctx->pc = 0x2FD6D8u;
    // 0x2fd6d8: 0x92250025  lbu         $a1, 0x25($s1)
    ctx->pc = 0x2fd6d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_2fd6dc:
    // 0x2fd6dc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fd6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd6e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2fd6e4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2fd6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2fd6e8: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2FD6E8u;
    SET_GPR_U32(ctx, 31, 0x2FD6F0u);
    ctx->pc = 0x2FD6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6E8u;
    // 0x2fd6ec: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2FD6E8u, 0x2FD6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6F0u;
label_2fd6f0:
    // 0x2fd6f0: 0xc0bf456  jal         func_2FD158
    ctx->pc = 0x2FD6F0u;
    SET_GPR_U32(ctx, 31, 0x2FD6F8u);
    ctx->pc = 0x2FD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD6F0u;
    // 0x2fd6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD158u, 0x2FD6F0u, 0x2FD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD6F8u;
label_2fd6f8:
    // 0x2fd6f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fd6f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd6fc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2fd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fd700: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2FD700u;
    {
        const bool branch_taken_0x2fd700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd700) {
            ctx->pc = 0x2FD704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD700u;
            // 0x2fd704: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD73Cu;
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD708u;
    // 0x2fd708: 0x56c0000c  bnel        $s6, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2FD708u;
    {
        const bool branch_taken_0x2fd708 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd708) {
            ctx->pc = 0x2FD70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD708u;
            // 0x2fd70c: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD73Cu;
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD710u;
    // 0x2fd710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fd710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd714: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD714u;
    {
        const bool branch_taken_0x2fd714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FD718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD714u;
        // 0x2fd718: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd714) {
            ctx->pc = 0x2FD72Cu;
            goto label_2fd72c;
        }
    }
    ctx->pc = 0x2FD71Cu;
    // 0x2fd71c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD71Cu;
    {
        const bool branch_taken_0x2fd71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fd71c) {
            ctx->pc = 0x2FD720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD71Cu;
            // 0x2fd720: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD73Cu;
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD724u;
    // 0x2fd724: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD724u;
    {
        const bool branch_taken_0x2fd724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD724u;
        // 0x2fd728: 0x2402fff6  addiu       $v0, $zero, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd724) {
            ctx->pc = 0x2FD730u;
            goto label_2fd730;
        }
    }
    ctx->pc = 0x2FD72Cu;
label_2fd72c:
    // 0x2fd72c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2fd730:
    // 0x2fd730: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2fd730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2fd734: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2fd734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2fd738: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x2fd738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2fd73c:
    // 0x2fd73c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd740: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD740u;
    {
        const bool branch_taken_0x2fd740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD740u;
        // 0x2fd744: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd740) {
            ctx->pc = 0x2FD764u;
            goto label_2fd764;
        }
    }
    ctx->pc = 0x2FD748u;
    // 0x2fd748: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fd748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fd74c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fd74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd750: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FD750u;
    SET_GPR_U32(ctx, 31, 0x2FD758u);
    ctx->pc = 0x2FD754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD750u;
    // 0x2fd754: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FD750u, 0x2FD758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD758u;
label_2fd758:
    // 0x2fd758: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fd758u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd75c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD75Cu;
    {
        const bool branch_taken_0x2fd75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD75Cu;
        // 0x2fd760: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd75c) {
            ctx->pc = 0x2FD774u;
            goto label_2fd774;
        }
    }
    ctx->pc = 0x2FD764u;
label_2fd764:
    // 0x2fd764: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2fd764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2fd768: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2fd768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2fd76c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2fd76cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2fd770: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2fd770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2fd774:
    // 0x2fd774: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2fd774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2fd778: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FD778u;
    {
        const bool branch_taken_0x2fd778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd778) {
            ctx->pc = 0x2FD77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD778u;
            // 0x2fd77c: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD820u;
            goto label_2fd820;
        }
    }
    ctx->pc = 0x2FD780u;
    // 0x2fd780: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2FD780u;
    {
        const bool branch_taken_0x2fd780 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FD784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD780u;
        // 0x2fd784: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd780) {
            ctx->pc = 0x2FD7C0u;
            goto label_2fd7c0;
        }
    }
    ctx->pc = 0x2FD788u;
    // 0x2fd788: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2fd788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2fd78c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2fd78cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2fd790: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fd790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd794: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fd794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd798: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FD798u;
    SET_GPR_U32(ctx, 31, 0x2FD7A0u);
    ctx->pc = 0x2FD79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD798u;
    // 0x2fd79c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FD798u, 0x2FD7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7A0u;
label_2fd7a0:
    // 0x2fd7a0: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x2fd7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2fd7a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2fd7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fd7a8: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2fd7a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd7ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2fd7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2fd7b0: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x2fd7b0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x2fd7b4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2fd7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2fd7b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FD7B8u;
    {
        const bool branch_taken_0x2fd7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD7B8u;
        // 0x2fd7bc: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7b8) {
            ctx->pc = 0x2FD7F0u;
            goto label_2fd7f0;
        }
    }
    ctx->pc = 0x2FD7C0u;
label_2fd7c0:
    // 0x2fd7c0: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FD7C0u;
    {
        const bool branch_taken_0x2fd7c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2fd7c0) {
            ctx->pc = 0x2FD7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD7C0u;
            // 0x2fd7c4: 0x7ba20030  lq          $v0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD7F4u;
            goto label_2fd7f4;
        }
    }
    ctx->pc = 0x2FD7C8u;
    // 0x2fd7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2fd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2fd7cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fd7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd7d0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x2fd7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x2fd7d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fd7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd7d8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd7dc: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FD7DCu;
    SET_GPR_U32(ctx, 31, 0x2FD7E4u);
    ctx->pc = 0x2FD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD7DCu;
    // 0x2fd7e0: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FD7DCu, 0x2FD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD7E4u;
label_2fd7e4:
    // 0x2fd7e4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fd7e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd7e8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2fd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2fd7ec: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2fd7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2fd7f0:
    // 0x2fd7f0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2fd7f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fd7f4:
    // 0x2fd7f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fd7f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fd7f8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2fd7f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd7fc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fd7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd800: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fd800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd804: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fd804u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fd808: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd808u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fd80c: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2fd80cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fd810: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2fd810u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd814: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fd814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fd818: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2fd818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x2fd81c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2fd81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2fd820:
    // 0x2fd820: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2FD820u;
    {
        const bool branch_taken_0x2fd820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD820u;
        // 0x2fd824: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd820) {
            ctx->pc = 0x2FD8D0u;
            goto label_2fd8d0;
        }
    }
    ctx->pc = 0x2FD828u;
    // 0x2fd828: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd82c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fd830: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD830u;
    {
        const bool branch_taken_0x2fd830 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD830u;
        // 0x2fd834: 0x52900a  movz        $s2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd830) {
            ctx->pc = 0x2FD840u;
            goto label_2fd840;
        }
    }
    ctx->pc = 0x2FD838u;
    // 0x2fd838: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD838u;
    {
        const bool branch_taken_0x2fd838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD838u;
        // 0x2fd83c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd838) {
            ctx->pc = 0x2FD854u;
            goto label_2fd854;
        }
    }
    ctx->pc = 0x2FD840u;
label_2fd840:
    // 0x2fd840: 0x4630006  bgezl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD840u;
    {
        const bool branch_taken_0x2fd840 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2fd840) {
            ctx->pc = 0x2FD844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD840u;
            // 0x2fd844: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD85Cu;
            goto label_2fd85c;
        }
    }
    ctx->pc = 0x2FD848u;
    // 0x2fd848: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2fd848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2fd84c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fd84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fd850: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fd854:
    // 0x2fd854: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2fd854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2fd858: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2fd858u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_2fd85c:
    // 0x2fd85c: 0x27c24b00  addiu       $v0, $fp, 0x4B00
    ctx->pc = 0x2fd85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 19200));
    // 0x2fd860: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2fd860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd864: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fd864u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fd868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd86c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2fd86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fd870: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x2FD870u;
    SET_GPR_U32(ctx, 31, 0x2FD878u);
    ctx->pc = 0x2FD874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD870u;
    // 0x2fd874: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x2FD870u, 0x2FD878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD878u;
label_2fd878:
    // 0x2fd878: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fd878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fd87c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fd87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd880: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2FD880u;
    SET_GPR_U32(ctx, 31, 0x2FD888u);
    ctx->pc = 0x2FD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD880u;
    // 0x2fd884: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FD880u, 0x2FD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD888u;
label_2fd888:
    // 0x2fd888: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fd888u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fd88c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2fd88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fd890: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fd890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd894: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fd894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd898: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2FD898u;
    SET_GPR_U32(ctx, 31, 0x2FD8A0u);
    ctx->pc = 0x2FD89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD898u;
    // 0x2fd89c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2FD898u, 0x2FD8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD8A0u;
label_2fd8a0:
    // 0x2fd8a0: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2fd8a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fd8a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2fd8a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2fd8a8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2fd8a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd8ac: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2fd8acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd8b0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2fd8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2fd8b4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2fd8b4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2fd8b8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2fd8b8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2fd8bc: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2fd8bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fd8c0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2fd8c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd8c4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2fd8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x2fd8c8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2fd8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2fd8cc: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2fd8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2fd8d0:
    // 0x2fd8d0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2fd8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd8d4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2fd8d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd8d8: 0x0  nop
    ctx->pc = 0x2fd8d8u;
    // NOP
    // 0x2fd8dc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2FD8DCu;
    {
        const bool branch_taken_0x2fd8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8DCu;
        // 0x2fd8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8dc) {
            ctx->pc = 0x2FD92Cu;
            goto label_2fd92c;
        }
    }
    ctx->pc = 0x2FD8E4u;
    // 0x2fd8e4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2fd8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd8e8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2fd8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd8ec: 0x0  nop
    ctx->pc = 0x2fd8ecu;
    // NOP
    // 0x2fd8f0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2FD8F0u;
    {
        const bool branch_taken_0x2fd8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd8f0) {
            ctx->pc = 0x2FD92Cu;
            goto label_2fd92c;
        }
    }
    ctx->pc = 0x2FD8F8u;
    // 0x2fd8f8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2fd8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fd8fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FD8FCu;
    {
        const bool branch_taken_0x2fd8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD8FCu;
        // 0x2fd900: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8fc) {
            ctx->pc = 0x2FD92Cu;
            goto label_2fd92c;
        }
    }
    ctx->pc = 0x2FD904u;
    // 0x2fd904: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2fd904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2fd908: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2fd908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2fd90c: 0x4620001  bltzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FD90Cu;
    {
        const bool branch_taken_0x2fd90c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2fd90c) {
            ctx->pc = 0x2FD910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD90Cu;
            // 0x2fd910: 0x31823  negu        $v1, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD914u;
            goto label_2fd914;
        }
    }
    ctx->pc = 0x2FD914u;
label_2fd914:
    // 0x2fd914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2fd914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fd918: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2fd918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2fd91c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD91Cu;
    {
        const bool branch_taken_0x2fd91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD91Cu;
        // 0x2fd920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd91c) {
            ctx->pc = 0x2FD92Cu;
            goto label_2fd92c;
        }
    }
    ctx->pc = 0x2FD924u;
label_2fd924:
    // 0x2fd924: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2FD924u;
    {
        const bool branch_taken_0x2fd924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD924u;
        // 0x2fd928: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd924) {
            ctx->pc = 0x2FD9FCu;
            goto label_2fd9fc;
        }
    }
    ctx->pc = 0x2FD92Cu;
label_2fd92c:
    // 0x2fd92c: 0x56c20008  bnel        $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD92Cu;
    {
        const bool branch_taken_0x2fd92c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fd92c) {
            ctx->pc = 0x2FD930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD92Cu;
            // 0x2fd930: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD950u;
            goto label_2fd950;
        }
    }
    ctx->pc = 0x2FD934u;
    // 0x2fd934: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2fd934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fd938: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD938u;
    {
        const bool branch_taken_0x2fd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd938) {
            ctx->pc = 0x2FD93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD938u;
            // 0x2fd93c: 0x92230024  lbu         $v1, 0x24($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD950u;
            goto label_2fd950;
        }
    }
    ctx->pc = 0x2FD940u;
    // 0x2fd940: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2fd940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2fd944: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FD944u;
    {
        const bool branch_taken_0x2fd944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD944u;
        // 0x2fd948: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd944) {
            ctx->pc = 0x2FD9FCu;
            goto label_2fd9fc;
        }
    }
    ctx->pc = 0x2FD94Cu;
    // 0x2fd94c: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x2fd94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
label_2fd950:
    // 0x2fd950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd954: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD954u;
    {
        const bool branch_taken_0x2fd954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD954u;
        // 0x2fd958: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd954) {
            ctx->pc = 0x2FD968u;
            goto label_2fd968;
        }
    }
    ctx->pc = 0x2FD95Cu;
    // 0x2fd95c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fd95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd960: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD960u;
    {
        const bool branch_taken_0x2fd960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD960u;
        // 0x2fd964: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd960) {
            ctx->pc = 0x2FD984u;
            goto label_2fd984;
        }
    }
    ctx->pc = 0x2FD968u;
label_2fd968:
    // 0x2fd968: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2fd968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd96c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2fd96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd970: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FD970u;
    SET_GPR_U32(ctx, 31, 0x2FD978u);
    ctx->pc = 0x2FD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD970u;
    // 0x2fd974: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FD970u, 0x2FD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD978u;
label_2fd978:
    // 0x2fd978: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x2fd978u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd97c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2fd97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2fd980: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2fd980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2fd984:
    // 0x2fd984: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FD984u;
    SET_GPR_U32(ctx, 31, 0x2FD98Cu);
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FD984u, 0x2FD98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD98Cu;
label_2fd98c:
    // 0x2fd98c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2fd98cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2fd990: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd994: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x2FD994u;
    SET_GPR_U32(ctx, 31, 0x2FD99Cu);
    ctx->pc = 0x2FD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD994u;
    // 0x2fd998: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x2FD994u, 0x2FD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD99Cu;
label_2fd99c:
    // 0x2fd99c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd9a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fd9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd9a4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fd9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2fd9a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fd9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd9ac: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2fd9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd9b0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x2FD9B0u;
    SET_GPR_U32(ctx, 31, 0x2FD9B8u);
    ctx->pc = 0x2FD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9B0u;
    // 0x2fd9b4: 0xe4540110  swc1        $f20, 0x110($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x2FD9B0u, 0x2FD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9B8u;
label_2fd9b8:
    // 0x2fd9b8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2fd9b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd9bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fd9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fd9c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fd9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd9c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2fd9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2fd9c8: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x2FD9C8u;
    SET_GPR_U32(ctx, 31, 0x2FD9D0u);
    ctx->pc = 0x2FD9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9C8u;
    // 0x2fd9cc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x2FD9C8u, 0x2FD9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9D0u;
label_2fd9d0:
    // 0x2fd9d0: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2fd9d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd9d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd9dc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2fd9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2fd9e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd9e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fd9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd9e8: 0x7c830090  sq          $v1, 0x90($a0)
    ctx->pc = 0x2fd9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 3));
    // 0x2fd9ec: 0xe480009c  swc1        $f0, 0x9C($a0)
    ctx->pc = 0x2fd9ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2fd9f0: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x2fd9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x2fd9f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2fd9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd9f8: 0xa070011c  sb          $s0, 0x11C($v1)
    ctx->pc = 0x2fd9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 284), (uint8_t)GPR_U32(ctx, 16));
label_2fd9fc:
    // 0x2fd9fc: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2fd9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2fda00: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2fda00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2fda04: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2fda04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2fda08: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2fda08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2fda0c: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2fda0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fda10: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2fda10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fda14: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2fda14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fda18: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2fda18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2fda1c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2fda1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fda20: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2fda20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fda24: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x2fda24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fda28: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2fda28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fda2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FDA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FDA2Cu;
        // 0x2fda30: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FDA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FDA34u;
    // 0x2fda34: 0x0  nop
    ctx->pc = 0x2fda34u;
    // NOP
    ctx->pc = 0x2fda38u;
}
