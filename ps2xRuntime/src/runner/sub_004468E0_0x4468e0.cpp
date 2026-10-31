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

// Function: sub_004468E0
// Address: 0x4468e0 - 0x446b70
void sub_004468E0_0x4468e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004468E0_0x4468e0");
#endif

    switch (ctx->pc) {
        case 0x4469c8u: goto label_4469c8;
        case 0x4469d8u: goto label_4469d8;
        case 0x4469e0u: goto label_4469e0;
        case 0x446a24u: goto label_446a24;
        case 0x446a38u: goto label_446a38;
        case 0x446a5cu: goto label_446a5c;
        case 0x446aa0u: goto label_446aa0;
        case 0x446ab0u: goto label_446ab0;
        case 0x446ad8u: goto label_446ad8;
        default: break;
    }

    ctx->pc = 0x4468e0u;

    // 0x4468e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4468e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x4468e4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x4468e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x4468e8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4468e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4468ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4468ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4468f0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4468f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4468f4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4468f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4468f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4468f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4468fc: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4468fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x446900: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x446900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x446904: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x446904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x446908: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x446908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x44690c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x44690cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x446910: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x446910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x446914: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x446914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x446918: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x446918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x44691c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x44691cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x446920: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x446920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x446924: 0x8c8400ec  lw          $a0, 0xEC($a0)
    ctx->pc = 0x446924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 236)));
    // 0x446928: 0x8cc50184  lw          $a1, 0x184($a2)
    ctx->pc = 0x446928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 388)));
    // 0x44692c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x44692cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x446930: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x446930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x446934: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x446934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x446938: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x446938u;
    {
        const bool branch_taken_0x446938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446938u;
        // 0x44693c: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446938) {
            ctx->pc = 0x446954u;
            goto label_446954;
        }
    }
    ctx->pc = 0x446940u;
    // 0x446940: 0x8cc400f4  lw          $a0, 0xF4($a2)
    ctx->pc = 0x446940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 244)));
    // 0x446944: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x446944u;
    {
        const bool branch_taken_0x446944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x446948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446944u;
        // 0x446948: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446944) {
            ctx->pc = 0x44698Cu;
            goto label_44698c;
        }
    }
    ctx->pc = 0x44694Cu;
    // 0x44694c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44694Cu;
    {
        const bool branch_taken_0x44694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44694Cu;
        // 0x446950: 0x8ec20010  lw          $v0, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44694c) {
            ctx->pc = 0x446960u;
            goto label_446960;
        }
    }
    ctx->pc = 0x446954u;
label_446954:
    // 0x446954: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x446954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x446958: 0x8ce300f4  lw          $v1, 0xF4($a3)
    ctx->pc = 0x446958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 244)));
    // 0x44695c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x44695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_446960:
    // 0x446960: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x446960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x446964: 0x44a818  mult        $s5, $v0, $a0
    ctx->pc = 0x446964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x446968: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x446968u;
    {
        const bool branch_taken_0x446968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446968u;
        // 0x44696c: 0x15a103  sra         $s4, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446968) {
            ctx->pc = 0x44697Cu;
            goto label_44697c;
        }
    }
    ctx->pc = 0x446970u;
    // 0x446970: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x446970u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x446974: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x446974u;
    {
        const bool branch_taken_0x446974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446974u;
        // 0x446978: 0x44f018  mult        $fp, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x446974) {
            ctx->pc = 0x446980u;
            goto label_446980;
        }
    }
    ctx->pc = 0x44697Cu;
label_44697c:
    // 0x44697c: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x44697cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_446980:
    // 0x446980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x446984: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x446984u;
    {
        const bool branch_taken_0x446984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446984u;
        // 0x446988: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446984) {
            ctx->pc = 0x4469B4u;
            goto label_4469b4;
        }
    }
    ctx->pc = 0x44698Cu;
label_44698c:
    // 0x44698c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x44698cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x446990: 0x24050180  addiu       $a1, $zero, 0x180
    ctx->pc = 0x446990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x446994: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x446994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x446998: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x446998u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x44699c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x44699cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4469a0: 0x83f018  mult        $fp, $a0, $v1
    ctx->pc = 0x4469a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x4469a4: 0x7045a818  mult1       $s5, $v0, $a1
    ctx->pc = 0x4469a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x4469a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4469a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4469ac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4469acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4469b0: 0x15a103  sra         $s4, $s5, 4
    ctx->pc = 0x4469b0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 21), 4));
label_4469b4:
    // 0x4469b4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4469b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4469b8: 0x10c00061  beqz        $a2, . + 4 + (0x61 << 2)
    ctx->pc = 0x4469B8u;
    {
        const bool branch_taken_0x4469b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4469BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4469B8u;
        // 0x4469bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4469b8) {
            ctx->pc = 0x446B40u;
            goto label_446b40;
        }
    }
    ctx->pc = 0x4469C0u;
    // 0x4469c0: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x4469c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x4469c4: 0x0  nop
    ctx->pc = 0x4469c4u;
    // NOP
label_4469c8:
    // 0x4469c8: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x4469c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4469cc: 0x18c0004f  blez        $a2, . + 4 + (0x4F << 2)
    ctx->pc = 0x4469CCu;
    {
        const bool branch_taken_0x4469cc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4469D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4469CCu;
        // 0x4469d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4469cc) {
            ctx->pc = 0x446B0Cu;
            goto label_446b0c;
        }
    }
    ctx->pc = 0x4469D4u;
    // 0x4469d4: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x4469d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4469d8:
    // 0x4469d8: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4469D8u;
    SET_GPR_U32(ctx, 31, 0x4469E0u);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4469D8u, 0x4469E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4469E0u;
label_4469e0:
    // 0x4469e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4469e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4469e4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4469e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4469e8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x4469e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x4469ec: 0x34a5d410  ori         $a1, $a1, 0xD410
    ctx->pc = 0x4469ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54288);
    // 0x4469f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x4469f0u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x4469f4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4469f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4469f8: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x4469f8u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x4469fc: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x4469fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x446a00: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x446a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x446a04: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x446a04u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x446a08: 0x34a5d400  ori         $a1, $a1, 0xD400
    ctx->pc = 0x446a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54272);
    // 0x446a0c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x446a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x446a10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x446a10u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x446a14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x446A14u;
    {
        const bool branch_taken_0x446a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A14u;
        // 0x446a18: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446a14) {
            ctx->pc = 0x446A28u;
            goto label_446a28;
        }
    }
    ctx->pc = 0x446A1Cu;
    // 0x446a1c: 0xc110cc4  jal         func_443310
    ctx->pc = 0x446A1Cu;
    SET_GPR_U32(ctx, 31, 0x446A24u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x446A1Cu, 0x446A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446A24u;
label_446a24:
    // 0x446a24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x446a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_446a28:
    // 0x446a28: 0x2559821  addu        $s3, $s2, $s5
    ctx->pc = 0x446a28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x446a2c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x446a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x446a30: 0x23e9021  addu        $s2, $s1, $fp
    ctx->pc = 0x446a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x446a34: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x446a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_446a38:
    // 0x446a38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x446a38u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x446a3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x446a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x446a40: 0x0  nop
    ctx->pc = 0x446a40u;
    // NOP
    // 0x446a44: 0x0  nop
    ctx->pc = 0x446a44u;
    // NOP
    // 0x446a48: 0x0  nop
    ctx->pc = 0x446a48u;
    // NOP
    // 0x446a4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x446A4Cu;
    {
        const bool branch_taken_0x446a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446a4c) {
            ctx->pc = 0x446A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446a38;
        }
    }
    ctx->pc = 0x446A54u;
    // 0x446a54: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x446A54u;
    SET_GPR_U32(ctx, 31, 0x446A5Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x446A54u, 0x446A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446A5Cu;
label_446a5c:
    // 0x446a5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x446a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x446a60: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x446a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x446a64: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x446a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x446a68: 0x34a5d010  ori         $a1, $a1, 0xD010
    ctx->pc = 0x446a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53264);
    // 0x446a6c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x446a6cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x446a70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x446a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x446a74: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x446a74u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x446a78: 0x3484d020  ori         $a0, $a0, 0xD020
    ctx->pc = 0x446a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53280);
    // 0x446a7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x446a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x446a80: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x446a80u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x446a84: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x446a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x446a88: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x446a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x446a8c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x446a8cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x446a90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x446A90u;
    {
        const bool branch_taken_0x446a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x446A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446A90u;
        // 0x446a94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446a90) {
            ctx->pc = 0x446AA4u;
            goto label_446aa4;
        }
    }
    ctx->pc = 0x446A98u;
    // 0x446a98: 0xc110cc4  jal         func_443310
    ctx->pc = 0x446A98u;
    SET_GPR_U32(ctx, 31, 0x446AA0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x446A98u, 0x446AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x446AA0u;
label_446aa0:
    // 0x446aa0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x446aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_446aa4:
    // 0x446aa4: 0x8ec6000c  lw          $a2, 0xC($s6)
    ctx->pc = 0x446aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x446aa8: 0x3463d000  ori         $v1, $v1, 0xD000
    ctx->pc = 0x446aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53248);
    // 0x446aac: 0x0  nop
    ctx->pc = 0x446aacu;
    // NOP
label_446ab0:
    // 0x446ab0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x446ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x446ab4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x446ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x446ab8: 0x0  nop
    ctx->pc = 0x446ab8u;
    // NOP
    // 0x446abc: 0x0  nop
    ctx->pc = 0x446abcu;
    // NOP
    // 0x446ac0: 0x0  nop
    ctx->pc = 0x446ac0u;
    // NOP
    // 0x446ac4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x446AC4u;
    {
        const bool branch_taken_0x446ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446ac4) {
            ctx->pc = 0x446AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446ab0;
        }
    }
    ctx->pc = 0x446ACCu;
    // 0x446acc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x446accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x446ad0: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x446ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x446ad4: 0x0  nop
    ctx->pc = 0x446ad4u;
    // NOP
label_446ad8:
    // 0x446ad8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x446ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x446adc: 0x0  nop
    ctx->pc = 0x446adcu;
    // NOP
    // 0x446ae0: 0x0  nop
    ctx->pc = 0x446ae0u;
    // NOP
    // 0x446ae4: 0x0  nop
    ctx->pc = 0x446ae4u;
    // NOP
    // 0x446ae8: 0x0  nop
    ctx->pc = 0x446ae8u;
    // NOP
    // 0x446aec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x446AECu;
    {
        const bool branch_taken_0x446aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x446aec) {
            ctx->pc = 0x446AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_446ad8;
        }
    }
    ctx->pc = 0x446AF4u;
    // 0x446af4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x446af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446af8: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x446af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x446afc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x446AFCu;
    {
        const bool branch_taken_0x446afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x446B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446AFCu;
        // 0x446b00: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446afc) {
            ctx->pc = 0x4469D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4469d8;
        }
    }
    ctx->pc = 0x446B04u;
    // 0x446b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x446B04u;
    {
        const bool branch_taken_0x446b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x446B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B04u;
        // 0x446b08: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b04) {
            ctx->pc = 0x446B14u;
            goto label_446b14;
        }
    }
    ctx->pc = 0x446B0Cu;
label_446b0c:
    // 0x446b0c: 0x24b70001  addiu       $s7, $a1, 0x1
    ctx->pc = 0x446b0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x446b10: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x446b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_446b14:
    // 0x446b14: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x446b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x446b18: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x446b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x446b1c: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x446b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x446b20: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x446b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x446b24: 0xa7202a  slt         $a0, $a1, $a3
    ctx->pc = 0x446b24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x446b28: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x446b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x446b2c: 0xe00013  mtlo        $a3
    ctx->pc = 0x446b2cu;
    ctx->lo = GPR_U64(ctx, 7);
    // 0x446b30: 0x70430000  madd        $zero, $v0, $v1
    ctx->pc = 0x446b30u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x446b34: 0x3812  mflo        $a3
    ctx->pc = 0x446b34u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x446b38: 0x1480ffa3  bnez        $a0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x446B38u;
    {
        const bool branch_taken_0x446b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x446B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B38u;
        // 0x446b3c: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446b38) {
            ctx->pc = 0x4469C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4469c8;
        }
    }
    ctx->pc = 0x446B40u;
label_446b40:
    // 0x446b40: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x446b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x446b44: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x446b44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x446b48: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x446b48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x446b4c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x446b4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x446b50: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x446b50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x446b54: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x446b54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x446b58: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x446b58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x446b5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x446b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x446b60: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x446b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x446b64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x446b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x446b68: 0x3e00008  jr          $ra
    ctx->pc = 0x446B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x446B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446B68u;
        // 0x446b6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x446B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x446B70u;
}
