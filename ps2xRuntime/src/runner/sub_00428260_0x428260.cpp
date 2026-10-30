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

// Function: sub_00428260
// Address: 0x428260 - 0x428410
void sub_00428260_0x428260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428260_0x428260");
#endif

    switch (ctx->pc) {
        case 0x4282dcu: goto label_4282dc;
        case 0x4282f8u: goto label_4282f8;
        case 0x428304u: goto label_428304;
        case 0x428314u: goto label_428314;
        case 0x42832cu: goto label_42832c;
        case 0x42834cu: goto label_42834c;
        default: break;
    }

    ctx->pc = 0x428260u;

    // 0x428260: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x428260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x428264: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x428264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x428268: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x428268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x42826c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x42826cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x428270: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x428270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x428274: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x428274u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x428278: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x428278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x42827c: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x42827cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x428280: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x428280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x428284: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x428284u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428288: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x428288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x42828c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x42828cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428290: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x428290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x428294: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x428294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x428298: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x428298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x42829c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4282a0: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x4282a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x4282a4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4282a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x4282a8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x4282ac: 0x94530008  lhu         $s3, 0x8($v0)
    ctx->pc = 0x4282acu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)FAST_READ16(0x70AD20u));
    // 0x4282b0: 0x8cd10008  lw          $s1, 0x8($a2)
    ctx->pc = 0x4282b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4282b4: 0x8c825308  lw          $v0, 0x5308($a0)
    ctx->pc = 0x4282b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x515308u));
    // 0x4282b8: 0x16220006  bne         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4282B8u;
    {
        const bool branch_taken_0x4282b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4282BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282B8u;
        // 0x4282bc: 0x8c720004  lw          $s2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282b8) {
            ctx->pc = 0x4282D4u;
            goto label_4282d4;
        }
    }
    ctx->pc = 0x4282C0u;
    // 0x4282c0: 0x8e825304  lw          $v0, 0x5304($s4)
    ctx->pc = 0x4282c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 21252)));
    // 0x4282c4: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4282C4u;
    {
        const bool branch_taken_0x4282c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4282C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282C4u;
        // 0x4282c8: 0xdec25310  ld          $v0, 0x5310($s6) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 21264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282c4) {
            ctx->pc = 0x4282D4u;
            goto label_4282d4;
        }
    }
    ctx->pc = 0x4282CCu;
    // 0x4282cc: 0x12620022  beq         $s3, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4282CCu;
    {
        const bool branch_taken_0x4282cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x4282D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282CCu;
        // 0x4282d0: 0x3c150070  lui         $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282cc) {
            ctx->pc = 0x428358u;
            goto label_428358;
        }
    }
    ctx->pc = 0x4282D4u;
label_4282d4:
    // 0x4282d4: 0xc12104a  jal         func_484128
    ctx->pc = 0x4282D4u;
    SET_GPR_U32(ctx, 31, 0x4282DCu);
    ctx->pc = 0x4282D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4282D4u;
    // 0x4282d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4282D4u, 0x4282DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4282DCu;
label_4282dc:
    // 0x4282dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4282dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4282e0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x4282e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4282e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4282e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4282e8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4282E8u;
    {
        const bool branch_taken_0x4282e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4282ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4282E8u;
        // 0x4282ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4282e8) {
            ctx->pc = 0x42831Cu;
            goto label_42831c;
        }
    }
    ctx->pc = 0x4282F0u;
    // 0x4282f0: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x4282F0u;
    SET_GPR_U32(ctx, 31, 0x4282F8u);
    ctx->pc = 0x4282F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4282F0u;
    // 0x4282f4: 0x3c100070  lui         $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x4282F0u, 0x4282F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4282F8u;
label_4282f8:
    // 0x4282f8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x4282f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4282fc: 0xc12104a  jal         func_484128
    ctx->pc = 0x4282FCu;
    SET_GPR_U32(ctx, 31, 0x428304u);
    ctx->pc = 0x428300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4282FCu;
    // 0x428300: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x4282FCu, 0x428304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428304u;
label_428304:
    // 0x428304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x428304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x428308: 0x2604ebf0  addiu       $a0, $s0, -0x1410
    ctx->pc = 0x428308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962160));
    // 0x42830c: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x42830Cu;
    SET_GPR_U32(ctx, 31, 0x428314u);
    ctx->pc = 0x428310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42830Cu;
    // 0x428310: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x42830Cu, 0x428314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x428314u;
label_428314:
    // 0x428314: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x428314u;
    {
        const bool branch_taken_0x428314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x428318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428314u;
        // 0x428318: 0x26a4ebf0  addiu       $a0, $s5, -0x1410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428314) {
            ctx->pc = 0x428330u;
            goto label_428330;
        }
    }
    ctx->pc = 0x42831Cu;
label_42831c:
    // 0x42831c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x42831cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x428320: 0x2604ebf0  addiu       $a0, $s0, -0x1410
    ctx->pc = 0x428320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962160));
    // 0x428324: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x428324u;
    SET_GPR_U32(ctx, 31, 0x42832Cu);
    ctx->pc = 0x428328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428324u;
    // 0x428328: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x428324u, 0x42832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42832Cu;
label_42832c:
    // 0x42832c: 0x26a4ebf0  addiu       $a0, $s5, -0x1410
    ctx->pc = 0x42832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962160));
label_428330:
    // 0x428330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x428330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x428334: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x428334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x428338: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x428338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x42833c: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x42833Cu;
    {
        const bool branch_taken_0x42833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x42833c) {
            ctx->pc = 0x428340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42833Cu;
            // 0x428340: 0xafd15308  sw          $s1, 0x5308($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 21256), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x428350u;
            goto label_428350;
        }
    }
    ctx->pc = 0x428344u;
    // 0x428344: 0xc11f530  jal         func_47D4C0
    ctx->pc = 0x428344u;
    SET_GPR_U32(ctx, 31, 0x42834Cu);
    ctx->pc = 0x428348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x428344u;
    // 0x428348: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D4C0u, 0x428344u, 0x42834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42834Cu;
label_42834c:
    // 0x42834c: 0xafd15308  sw          $s1, 0x5308($fp)
    ctx->pc = 0x42834cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 21256), GPR_U32(ctx, 17));
label_428350:
    // 0x428350: 0xfed35310  sd          $s3, 0x5310($s6)
    ctx->pc = 0x428350u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 21264), GPR_U64(ctx, 19));
    // 0x428354: 0xae925304  sw          $s2, 0x5304($s4)
    ctx->pc = 0x428354u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 21252), GPR_U32(ctx, 18));
label_428358:
    // 0x428358: 0x26a6ebf0  addiu       $a2, $s5, -0x1410
    ctx->pc = 0x428358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294962160));
    // 0x42835c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x42835cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x428360: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x428360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x428364: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x428364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x428368: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x428368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x42836c: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x42836cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x428370: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x428370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x428374: 0xb2e30007  sdl         $v1, 0x7($s7)
    ctx->pc = 0x428374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428378: 0xb6e30000  sdr         $v1, 0x0($s7)
    ctx->pc = 0x428378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42837c: 0xb2e4000f  sdl         $a0, 0xF($s7)
    ctx->pc = 0x42837cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428380: 0xb6e40008  sdr         $a0, 0x8($s7)
    ctx->pc = 0x428380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428384: 0xb2e50017  sdl         $a1, 0x17($s7)
    ctx->pc = 0x428384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x428388: 0xb6e50010  sdr         $a1, 0x10($s7)
    ctx->pc = 0x428388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x42838c: 0x68c3001f  ldl         $v1, 0x1F($a2)
    ctx->pc = 0x42838cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x428390: 0x6cc30018  ldr         $v1, 0x18($a2)
    ctx->pc = 0x428390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x428394: 0x68c40027  ldl         $a0, 0x27($a2)
    ctx->pc = 0x428394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x428398: 0x6cc40020  ldr         $a0, 0x20($a2)
    ctx->pc = 0x428398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x42839c: 0x68c5002f  ldl         $a1, 0x2F($a2)
    ctx->pc = 0x42839cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4283a0: 0x6cc50028  ldr         $a1, 0x28($a2)
    ctx->pc = 0x4283a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4283a4: 0xb2e3001f  sdl         $v1, 0x1F($s7)
    ctx->pc = 0x4283a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283a8: 0xb6e30018  sdr         $v1, 0x18($s7)
    ctx->pc = 0x4283a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283ac: 0xb2e40027  sdl         $a0, 0x27($s7)
    ctx->pc = 0x4283acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283b0: 0xb6e40020  sdr         $a0, 0x20($s7)
    ctx->pc = 0x4283b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283b4: 0xb2e5002f  sdl         $a1, 0x2F($s7)
    ctx->pc = 0x4283b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283b8: 0xb6e50028  sdr         $a1, 0x28($s7)
    ctx->pc = 0x4283b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283bc: 0x68c30037  ldl         $v1, 0x37($a2)
    ctx->pc = 0x4283bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4283c0: 0x6cc30030  ldr         $v1, 0x30($a2)
    ctx->pc = 0x4283c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4283c4: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x4283c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x4283c8: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x4283c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4283cc: 0xb2e30037  sdl         $v1, 0x37($s7)
    ctx->pc = 0x4283ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283d0: 0xb6e30030  sdr         $v1, 0x30($s7)
    ctx->pc = 0x4283d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283d4: 0xb2e4003f  sdl         $a0, 0x3F($s7)
    ctx->pc = 0x4283d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283d8: 0xb6e40038  sdr         $a0, 0x38($s7)
    ctx->pc = 0x4283d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4283dc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4283dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4283e0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4283e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4283e4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4283e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4283e8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4283e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4283ec: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4283ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4283f0: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4283f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4283f4: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4283f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4283f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4283f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4283fc: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4283fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x428400: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x428400u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x428404: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x428404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x428408: 0x3e00008  jr          $ra
    ctx->pc = 0x428408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42840Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x428408u;
        // 0x42840c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x428408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x428410u;
}
