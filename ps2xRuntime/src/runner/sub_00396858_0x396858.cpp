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

// Function: sub_00396858
// Address: 0x396858 - 0x396a08
void sub_00396858_0x396858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396858_0x396858");
#endif

    switch (ctx->pc) {
        case 0x3968b8u: goto label_3968b8;
        case 0x3968d0u: goto label_3968d0;
        case 0x3968ecu: goto label_3968ec;
        case 0x396914u: goto label_396914;
        case 0x396930u: goto label_396930;
        case 0x3969d0u: goto label_3969d0;
        default: break;
    }

    ctx->pc = 0x396858u;

    // 0x396858: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x396858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x39685c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x39685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x396860: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x396860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396864: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x396864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x396868: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x396868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x39686c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39686cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396870: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x396870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x396874: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x396874u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396878: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x396878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x39687c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39687cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x396880: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x396880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x396884: 0x24a51010  addiu       $a1, $a1, 0x1010
    ctx->pc = 0x396884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    // 0x396888: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x396888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x39688c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x39688cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396890: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x396890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x396894: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x396894u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396898: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x396898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x39689c: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x39689cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3968a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3968a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3968a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968a8: 0xafab0040  sw          $t3, 0x40($sp)
    ctx->pc = 0x3968a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 11));
    // 0x3968ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3968acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968b0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x3968B0u;
    SET_GPR_U32(ctx, 31, 0x3968B8u);
    ctx->pc = 0x3968B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968B0u;
    // 0x3968b4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x3968B0u, 0x3968B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968B8u;
label_3968b8:
    // 0x3968b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3968B8u;
    {
        const bool branch_taken_0x3968b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3968BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968B8u;
        // 0x3968bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968b8) {
            ctx->pc = 0x3968C8u;
            goto label_3968c8;
        }
    }
    ctx->pc = 0x3968C0u;
    // 0x3968c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3968C0u;
    {
        const bool branch_taken_0x3968c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3968C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968C0u;
        // 0x3968c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968c0) {
            ctx->pc = 0x3968F0u;
            goto label_3968f0;
        }
    }
    ctx->pc = 0x3968C8u;
label_3968c8:
    // 0x3968c8: 0xc107458  jal         func_41D160
    ctx->pc = 0x3968C8u;
    SET_GPR_U32(ctx, 31, 0x3968D0u);
    ctx->pc = 0x3968CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968C8u;
    // 0x3968cc: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x3968C8u, 0x3968D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968D0u;
label_3968d0:
    // 0x3968d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3968D0u;
    {
        const bool branch_taken_0x3968d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3968D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968D0u;
        // 0x3968d4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968d0) {
            ctx->pc = 0x3968F4u;
            goto label_3968f4;
        }
    }
    ctx->pc = 0x3968D8u;
    // 0x3968d8: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3968d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3968dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3968dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968e0: 0x24a51018  addiu       $a1, $a1, 0x1018
    ctx->pc = 0x3968e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4120));
    // 0x3968e4: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x3968E4u;
    SET_GPR_U32(ctx, 31, 0x3968ECu);
    ctx->pc = 0x3968E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3968E4u;
    // 0x3968e8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x3968E4u, 0x3968ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3968ECu;
label_3968ec:
    // 0x3968ec: 0x2c530001  sltiu       $s3, $v0, 0x1
    ctx->pc = 0x3968ecu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3968f0:
    // 0x3968f0: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x3968f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_3968f4:
    // 0x3968f4: 0x8c43e998  lw          $v1, -0x1668($v0)
    ctx->pc = 0x3968f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961560)));
    // 0x3968f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3968f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3968fc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3968FCu;
    {
        const bool branch_taken_0x3968fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x396900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3968FCu;
        // 0x396900: 0x2444e998  addiu       $a0, $v0, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3968fc) {
            ctx->pc = 0x396940u;
            goto label_396940;
        }
    }
    ctx->pc = 0x396904u;
    // 0x396904: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x396904u;
    {
        const bool branch_taken_0x396904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x396908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396904u;
        // 0x396908: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396904) {
            ctx->pc = 0x39691Cu;
            goto label_39691c;
        }
    }
    ctx->pc = 0x39690Cu;
    // 0x39690c: 0xc10904c  jal         func_424130
    ctx->pc = 0x39690Cu;
    SET_GPR_U32(ctx, 31, 0x396914u);
    ctx->pc = 0x396910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39690Cu;
    // 0x396910: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x39690Cu, 0x396914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396914u;
label_396914:
    // 0x396914: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x396914u;
    {
        const bool branch_taken_0x396914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x396918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396914u;
        // 0x396918: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396914) {
            ctx->pc = 0x396950u;
            goto label_396950;
        }
    }
    ctx->pc = 0x39691Cu;
label_39691c:
    // 0x39691c: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x39691Cu;
    {
        const bool branch_taken_0x39691c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x396920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39691Cu;
        // 0x396920: 0x26a4e998  addiu       $a0, $s5, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39691c) {
            ctx->pc = 0x396958u;
            goto label_396958;
        }
    }
    ctx->pc = 0x396924u;
    // 0x396924: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x396924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x396928: 0xc10904c  jal         func_424130
    ctx->pc = 0x396928u;
    SET_GPR_U32(ctx, 31, 0x396930u);
    ctx->pc = 0x39692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396928u;
    // 0x39692c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x396928u, 0x396930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396930u;
label_396930:
    // 0x396930: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x396930u;
    {
        const bool branch_taken_0x396930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x396930) {
            ctx->pc = 0x396934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396930u;
            // 0x396934: 0xc6450008  lwc1        $f5, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x39695Cu;
            goto label_39695c;
        }
    }
    ctx->pc = 0x396938u;
    // 0x396938: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x396938u;
    {
        const bool branch_taken_0x396938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396938u;
        // 0x39693c: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396938) {
            ctx->pc = 0x396950u;
            goto label_396950;
        }
    }
    ctx->pc = 0x396940u;
label_396940:
    // 0x396940: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396940u;
    {
        const bool branch_taken_0x396940 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x396944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396940u;
        // 0x396944: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396940) {
            ctx->pc = 0x396950u;
            goto label_396950;
        }
    }
    ctx->pc = 0x396948u;
    // 0x396948: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x396948u;
    {
        const bool branch_taken_0x396948 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x396948) {
            ctx->pc = 0x39694Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396948u;
            // 0x39694c: 0xc6450008  lwc1        $f5, 0x8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x39695Cu;
            goto label_39695c;
        }
    }
    ctx->pc = 0x396950u;
label_396950:
    // 0x396950: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x396950u;
    {
        const bool branch_taken_0x396950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396950u;
        // 0x396954: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396950) {
            ctx->pc = 0x3969D0u;
            goto label_3969d0;
        }
    }
    ctx->pc = 0x396958u;
label_396958:
    // 0x396958: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x396958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_39695c:
    // 0x39695c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x39695cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x396960: 0xc606000c  lwc1        $f6, 0xC($s0)
    ctx->pc = 0x396960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x396964: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x396964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x396968: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x396968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x39696c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x39696cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396970: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x396970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x396974: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x396974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396978: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x396978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x39697c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x39697cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396980: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x396980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x396984: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x396984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x396988: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x396988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x39698c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x39698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x396990: 0x8c822c7c  lw          $v0, 0x2C7C($a0)
    ctx->pc = 0x396990u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x396994: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x396994u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x396998: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x396998u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x39699c: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x39699cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3969a0: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x3969a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3969a4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3969a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3969a8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3969a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3969ac: 0xe7a6003c  swc1        $f6, 0x3C($sp)
    ctx->pc = 0x3969acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3969b0: 0x8c69bd30  lw          $t1, -0x42D0($v1)
    ctx->pc = 0x3969b0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x3969b4: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x3969b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x3969b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x3969b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3969bc: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x3969bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3969c0: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x3969c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x3969c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3969c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3969c8: 0xc0e6250  jal         func_398940
    ctx->pc = 0x3969C8u;
    SET_GPR_U32(ctx, 31, 0x3969D0u);
    ctx->pc = 0x3969CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3969C8u;
    // 0x3969cc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x3969C8u, 0x3969D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3969D0u;
label_3969d0:
    // 0x3969d0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3969d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3969d4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3969d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3969d8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3969d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3969dc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3969dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3969e0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3969e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3969e4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3969e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3969e8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3969e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3969ec: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3969ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3969f0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3969f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3969f4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3969f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3969f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3969F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3969FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969F8u;
        // 0x3969fc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3969F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396A00u;
    // 0x396a00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x396a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x396a04: 0x0  nop
    ctx->pc = 0x396a04u;
    // NOP
    ctx->pc = 0x396a08u;
}
