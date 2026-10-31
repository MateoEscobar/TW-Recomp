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

// Function: sub_003A0400
// Address: 0x3a0400 - 0x3a05a8
void sub_003A0400_0x3a0400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0400_0x3a0400");
#endif

    switch (ctx->pc) {
        case 0x3a0494u: goto label_3a0494;
        case 0x3a0564u: goto label_3a0564;
        default: break;
    }

    ctx->pc = 0x3a0400u;

    // 0x3a0400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0404: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a0404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0408: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a0408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a040c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a0410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a0414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a0418: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x3a0418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a041c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a041cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0420: 0x8ca60080  lw          $a2, 0x80($a1)
    ctx->pc = 0x3a0420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3a0424: 0x30c20004  andi        $v0, $a2, 0x4
    ctx->pc = 0x3a0424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x3a0428: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3A0428u;
    {
        const bool branch_taken_0x3a0428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0428u;
        // 0x3a042c: 0x84710030  lh          $s1, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0428) {
            ctx->pc = 0x3A050Cu;
            goto label_3a050c;
        }
    }
    ctx->pc = 0x3A0430u;
    // 0x3a0430: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x3a0430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x3a0434: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x3A0434u;
    {
        const bool branch_taken_0x3a0434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0434u;
        // 0x3a0438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0434) {
            ctx->pc = 0x3A0594u;
            goto label_3a0594;
        }
    }
    ctx->pc = 0x3A043Cu;
    // 0x3a043c: 0x620001e  bltz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A043Cu;
    {
        const bool branch_taken_0x3a043c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3A0440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A043Cu;
        // 0x3a0440: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a043c) {
            ctx->pc = 0x3A04B8u;
            goto label_3a04b8;
        }
    }
    ctx->pc = 0x3A0444u;
    // 0x3a0444: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A0444u;
    {
        const bool branch_taken_0x3a0444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0444) {
            ctx->pc = 0x3A0448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0444u;
            // 0x3a0448: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A04BCu;
            goto label_3a04bc;
        }
    }
    ctx->pc = 0x3A044Cu;
    // 0x3a044c: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x3a044cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x3a0450: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a0450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a0454: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0458: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3a0458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3a045c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a045cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a0460: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a0460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0464: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x3a0464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a0468: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x3a0468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a046c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3a046cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a0470: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a0470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0474: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a0474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a0478: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a0478u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a047c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a047cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a0480: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a0480u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a0484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0488: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x3a0488u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a048c: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A048Cu;
    SET_GPR_U32(ctx, 31, 0x3A0494u);
    ctx->pc = 0x3A0490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A048Cu;
    // 0x3a0490: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A048Cu, 0x3A0494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0494u;
label_3a0494:
    // 0x3a0494: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x3a0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0498: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3a0498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3a049c: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x3a049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a04a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a04a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a04a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3a04a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a04a8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x3a04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3a04ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a04acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a04b0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A04B0u;
    {
        const bool branch_taken_0x3a04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04B0u;
        // 0x3a04b4: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04b0) {
            ctx->pc = 0x3A04F8u;
            goto label_3a04f8;
        }
    }
    ctx->pc = 0x3A04B8u;
label_3a04b8:
    // 0x3a04b8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3a04b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3a04bc:
    // 0x3a04bc: 0x8e0400a4  lw          $a0, 0xA4($s0)
    ctx->pc = 0x3a04bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a04c0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x3a04c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a04c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a04c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a04c8: 0x8c4300a8  lw          $v1, 0xA8($v0)
    ctx->pc = 0x3a04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x3a04cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a04ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a04d0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3a04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3a04d4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x3a04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a04d8: 0x90620081  lbu         $v0, 0x81($v1)
    ctx->pc = 0x3a04d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
    // 0x3a04dc: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x3a04dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x3a04e0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A04E0u;
    {
        const bool branch_taken_0x3a04e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a04e0) {
            ctx->pc = 0x3A04E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A04E0u;
            // 0x3a04e4: 0x960200f4  lhu         $v0, 0xF4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A04FCu;
            goto label_3a04fc;
        }
    }
    ctx->pc = 0x3A04E8u;
    // 0x3a04e8: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x3a04e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a04ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x3a04f0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3a04f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3a04f4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x3a04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_3a04f8:
    // 0x3a04f8: 0x960200f4  lhu         $v0, 0xF4($s0)
    ctx->pc = 0x3a04f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
label_3a04fc:
    // 0x3a04fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a04fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a0500: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x3a0500u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a0504: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3A0504u;
    {
        const bool branch_taken_0x3a0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0504u;
        // 0x3a0508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0504) {
            ctx->pc = 0x3A0594u;
            goto label_3a0594;
        }
    }
    ctx->pc = 0x3A050Cu;
label_3a050c:
    // 0x3a050c: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x3a050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x3a0510: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3A0510u;
    {
        const bool branch_taken_0x3a0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0510u;
        // 0x3a0514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0510) {
            ctx->pc = 0x3A0594u;
            goto label_3a0594;
        }
    }
    ctx->pc = 0x3A0518u;
    // 0x3a0518: 0x620001e  bltz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A0518u;
    {
        const bool branch_taken_0x3a0518 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3A051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0518u;
        // 0x3a051c: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0518) {
            ctx->pc = 0x3A0594u;
            goto label_3a0594;
        }
    }
    ctx->pc = 0x3A0520u;
    // 0x3a0520: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3a0520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3a0524: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a0524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a0528: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3a0528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3a052c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a052cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a0530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a0530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a0534: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x3a0534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a0538: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x3a0538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3a053c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3a053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a0540: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3a0540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a0544: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3a0544u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a0548: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a0548u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a054c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a054cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3a0550: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a0550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a0554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a0554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a0558: 0xa4a30008  sh          $v1, 0x8($a1)
    ctx->pc = 0x3a0558u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x3a055c: 0xc0d4be8  jal         func_352FA0
    ctx->pc = 0x3A055Cu;
    SET_GPR_U32(ctx, 31, 0x3A0564u);
    ctx->pc = 0x3A0560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A055Cu;
    // 0x3a0560: 0x8e0400a4  lw          $a0, 0xA4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352FA0u, 0x3A055Cu, 0x3A0564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0564u;
label_3a0564:
    // 0x3a0564: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x3a0564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x3a0568: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3a0568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3a056c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x3a056cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x3a0570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0574: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3a0574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3a0578: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3a0578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3a057c: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x3a057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x3a0580: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3a0580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a0584: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3a0584u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3a0588: 0x960300f4  lhu         $v1, 0xF4($s0)
    ctx->pc = 0x3a0588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x3a058c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a0590: 0xa60300f4  sh          $v1, 0xF4($s0)
    ctx->pc = 0x3a0590u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 3));
label_3a0594:
    // 0x3a0594: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a0594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a0598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a059c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a05a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A05A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A05A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A05A0u;
        // 0x3a05a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A05A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A05A8u;
}
