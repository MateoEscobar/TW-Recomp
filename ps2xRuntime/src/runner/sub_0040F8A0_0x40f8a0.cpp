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

// Function: sub_0040F8A0
// Address: 0x40f8a0 - 0x4101f0
void sub_0040F8A0_0x40f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040F8A0_0x40f8a0");
#endif

    switch (ctx->pc) {
        case 0x40f90cu: goto label_40f90c;
        case 0x40f934u: goto label_40f934;
        case 0x40f944u: goto label_40f944;
        case 0x40f978u: goto label_40f978;
        case 0x40f998u: goto label_40f998;
        case 0x40f9b0u: goto label_40f9b0;
        case 0x40f9e4u: goto label_40f9e4;
        case 0x40f9f4u: goto label_40f9f4;
        case 0x40fa0cu: goto label_40fa0c;
        case 0x40fa38u: goto label_40fa38;
        case 0x40fa58u: goto label_40fa58;
        case 0x40fa90u: goto label_40fa90;
        case 0x40fae8u: goto label_40fae8;
        case 0x40fb34u: goto label_40fb34;
        case 0x40fb88u: goto label_40fb88;
        case 0x40fb98u: goto label_40fb98;
        case 0x40fbd0u: goto label_40fbd0;
        case 0x40fbdcu: goto label_40fbdc;
        case 0x40fc14u: goto label_40fc14;
        case 0x40fc64u: goto label_40fc64;
        case 0x40fc90u: goto label_40fc90;
        case 0x40fc9cu: goto label_40fc9c;
        case 0x40fcd0u: goto label_40fcd0;
        case 0x40fcf0u: goto label_40fcf0;
        case 0x40fd50u: goto label_40fd50;
        case 0x40fd68u: goto label_40fd68;
        case 0x40fd84u: goto label_40fd84;
        case 0x40fdc0u: goto label_40fdc0;
        case 0x40fde4u: goto label_40fde4;
        case 0x40fdf8u: goto label_40fdf8;
        case 0x40fe14u: goto label_40fe14;
        case 0x40fe58u: goto label_40fe58;
        case 0x40fed4u: goto label_40fed4;
        case 0x40ff2cu: goto label_40ff2c;
        case 0x40ff7cu: goto label_40ff7c;
        case 0x40ffd4u: goto label_40ffd4;
        case 0x410040u: goto label_410040;
        case 0x4100c4u: goto label_4100c4;
        case 0x4100f0u: goto label_4100f0;
        case 0x410120u: goto label_410120;
        case 0x41015cu: goto label_41015c;
        case 0x41018cu: goto label_41018c;
        default: break;
    }

    ctx->pc = 0x40f8a0u;

    // 0x40f8a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x40f8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x40f8a4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x40f8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
    // 0x40f8a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x40f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x40f8ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x40f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x40f8b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x40f8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x40f8b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40f8b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f8b8: 0x8cc239fc  lw          $v0, 0x39FC($a2)
    ctx->pc = 0x40f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F39FCu));
    // 0x40f8bc: 0x3c160051  lui         $s6, 0x51
    ctx->pc = 0x40f8bcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)81 << 16));
    // 0x40f8c0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x40f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x40f8c4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x40f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x40f8c8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x40f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x40f8cc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x40f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x40f8d0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x40f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x40f8d4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x40f8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x40f8d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x40f8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x40f8dc: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x40f8dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x40f8e0: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x40f8e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x40f8e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F8E4u;
    {
        const bool branch_taken_0x40f8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F8E4u;
        // 0x40f8e8: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f8e4) {
            ctx->pc = 0x40F8FCu;
            goto label_40f8fc;
        }
    }
    ctx->pc = 0x40F8ECu;
    // 0x40f8ec: 0x8ec347c8  lw          $v1, 0x47C8($s6)
    ctx->pc = 0x40f8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18376)));
    // 0x40f8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40f8f4: 0xacc239fc  sw          $v0, 0x39FC($a2)
    ctx->pc = 0x40f8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 14844), GPR_U32(ctx, 2));
    // 0x40f8f8: 0xaca339f8  sw          $v1, 0x39F8($a1)
    ctx->pc = 0x40f8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14840), GPR_U32(ctx, 3));
label_40f8fc:
    // 0x40f8fc: 0x8ec247c8  lw          $v0, 0x47C8($s6)
    ctx->pc = 0x40f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18376)));
    // 0x40f900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40f900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f904: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40F904u;
    SET_GPR_U32(ctx, 31, 0x40F90Cu);
    ctx->pc = 0x40F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F904u;
    // 0x40f908: 0xaca239f8  sw          $v0, 0x39F8($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 14840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40F904u, 0x40F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F90Cu;
label_40f90c:
    // 0x40f90c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x40f90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x40f910: 0x4630008  bgezl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x40F910u;
    {
        const bool branch_taken_0x40f910 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x40f910) {
            ctx->pc = 0x40F914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F910u;
            // 0x40f914: 0xaec047c8  sw          $zero, 0x47C8($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F934u;
            goto label_40f934;
        }
    }
    ctx->pc = 0x40F918u;
    // 0x40f918: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x40f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x40f91c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40F91Cu;
    {
        const bool branch_taken_0x40f91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f91c) {
            ctx->pc = 0x40F93Cu;
            goto label_40f93c;
        }
    }
    ctx->pc = 0x40F924u;
    // 0x40f924: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x40f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x40f928: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40F928u;
    {
        const bool branch_taken_0x40f928 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x40f928) {
            ctx->pc = 0x40F93Cu;
            goto label_40f93c;
        }
    }
    ctx->pc = 0x40F930u;
    // 0x40f930: 0xaec047c8  sw          $zero, 0x47C8($s6)
    ctx->pc = 0x40f930u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
label_40f934:
    // 0x40f934: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x40F934u;
    {
        const bool branch_taken_0x40f934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F934u;
        // 0x40f938: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f934) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40F93Cu;
label_40f93c:
    // 0x40f93c: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40F93Cu;
    SET_GPR_U32(ctx, 31, 0x40F944u);
    ctx->pc = 0x40F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F93Cu;
    // 0x40f940: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40F93Cu, 0x40F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F944u;
label_40f944:
    // 0x40f944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x40f944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40f948: 0x4610218  bgez        $v1, . + 4 + (0x218 << 2)
    ctx->pc = 0x40F948u;
    {
        const bool branch_taken_0x40f948 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x40F94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F948u;
        // 0x40f94c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f948) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40F950u;
    // 0x40f950: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x40f950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x40f954: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F954u;
    {
        const bool branch_taken_0x40f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f954) {
            ctx->pc = 0x40F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F954u;
            // 0x40f958: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40F96Cu;
            goto label_40f96c;
        }
    }
    ctx->pc = 0x40F95Cu;
    // 0x40f95c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x40f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40f960: 0x4410212  bgez        $v0, . + 4 + (0x212 << 2)
    ctx->pc = 0x40F960u;
    {
        const bool branch_taken_0x40f960 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x40F964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F960u;
        // 0x40f964: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f960) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40F968u;
    // 0x40f968: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x40f968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_40f96c:
    // 0x40f96c: 0x8c445340  lw          $a0, 0x5340($v0)
    ctx->pc = 0x40f96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    // 0x40f970: 0xc05529a  jal         func_154A68
    ctx->pc = 0x40F970u;
    SET_GPR_U32(ctx, 31, 0x40F978u);
    ctx->pc = 0x40F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F970u;
    // 0x40f974: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A68u, 0x40F970u, 0x40F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F978u;
label_40f978:
    // 0x40f978: 0x1440020c  bnez        $v0, . + 4 + (0x20C << 2)
    ctx->pc = 0x40F978u;
    {
        const bool branch_taken_0x40f978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F978u;
        // 0x40f97c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f978) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40F980u;
    // 0x40f980: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40f980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40f984: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x40f984u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x40f988: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x40f988u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x40f98c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x40f98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f990: 0xc0621ee  jal         func_1887B8
    ctx->pc = 0x40F990u;
    SET_GPR_U32(ctx, 31, 0x40F998u);
    ctx->pc = 0x40F994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F990u;
    // 0x40f994: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B8u, 0x40F990u, 0x40F998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F998u;
label_40f998:
    // 0x40f998: 0xc6168c78  lwc1        $f22, -0x7388($s0)
    ctx->pc = 0x40f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x40f99c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40f9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9a4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x40f9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x40f9a8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x40F9A8u;
    SET_GPR_U32(ctx, 31, 0x40F9B0u);
    ctx->pc = 0x40F9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F9A8u;
    // 0x40f9ac: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x40F9A8u, 0x40F9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F9B0u;
label_40f9b0:
    // 0x40f9b0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x40f9b4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x40f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x40f9b8: 0x24478c60  addiu       $a3, $v0, -0x73A0
    ctx->pc = 0x40f9b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937696));
    // 0x40f9bc: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x40f9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x40f9c0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x40f9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x40f9c4: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x40f9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f9c8: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x40f9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40f9cc: 0x146000f7  bnez        $v1, . + 4 + (0xF7 << 2)
    ctx->pc = 0x40F9CCu;
    {
        const bool branch_taken_0x40f9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F9CCu;
        // 0x40f9d0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f9cc) {
            ctx->pc = 0x40FDACu;
            goto label_40fdac;
        }
    }
    ctx->pc = 0x40F9D4u;
    // 0x40f9d4: 0x528000f6  beql        $s4, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x40F9D4u;
    {
        const bool branch_taken_0x40f9d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x40f9d4) {
            ctx->pc = 0x40F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40F9D4u;
            // 0x40f9d8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40FDB0u;
            goto label_40fdb0;
        }
    }
    ctx->pc = 0x40F9DCu;
    // 0x40f9dc: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40F9DCu;
    SET_GPR_U32(ctx, 31, 0x40F9E4u);
    ctx->pc = 0x40F9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F9DCu;
    // 0x40f9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40F9DCu, 0x40F9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F9E4u;
label_40f9e4:
    // 0x40f9e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40f9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40f9e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40f9ec: 0xc1047ac  jal         func_411EB0
    ctx->pc = 0x40F9ECu;
    SET_GPR_U32(ctx, 31, 0x40F9F4u);
    ctx->pc = 0x40F9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40F9ECu;
    // 0x40f9f0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411EB0u, 0x40F9ECu, 0x40F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40F9F4u;
label_40f9f4:
    // 0x40f9f4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x40f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x40f9f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40F9F8u;
    {
        const bool branch_taken_0x40f9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40F9F8u;
        // 0x40f9fc: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40f9f8) {
            ctx->pc = 0x40FA10u;
            goto label_40fa10;
        }
    }
    ctx->pc = 0x40FA00u;
    // 0x40fa00: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x40fa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x40fa04: 0xc1047ac  jal         func_411EB0
    ctx->pc = 0x40FA04u;
    SET_GPR_U32(ctx, 31, 0x40FA0Cu);
    ctx->pc = 0x40FA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA04u;
    // 0x40fa08: 0x27a60014  addiu       $a2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411EB0u, 0x40FA04u, 0x40FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA0Cu;
label_40fa0c:
    // 0x40fa0c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x40fa0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_40fa10:
    // 0x40fa10: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x40fa10u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40fa14: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x40fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fa18: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40FA18u;
    {
        const bool branch_taken_0x40fa18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA18u;
        // 0x40fa1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa18) {
            ctx->pc = 0x40FA28u;
            goto label_40fa28;
        }
    }
    ctx->pc = 0x40FA20u;
    // 0x40fa20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x40fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x40fa24: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x40fa24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_40fa28:
    // 0x40fa28: 0x8e64cd4c  lw          $a0, -0x32B4($s3)
    ctx->pc = 0x40fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x40fa2c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x40fa2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x40fa30: 0xc0625d4  jal         func_189750
    ctx->pc = 0x40FA30u;
    SET_GPR_U32(ctx, 31, 0x40FA38u);
    ctx->pc = 0x40FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA30u;
    // 0x40fa34: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189750u, 0x40FA30u, 0x40FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA38u;
label_40fa38:
    // 0x40fa38: 0xc6218c78  lwc1        $f1, -0x7388($s1)
    ctx->pc = 0x40fa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fa3c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x40fa3cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fa40: 0x0  nop
    ctx->pc = 0x40fa40u;
    // NOP
    // 0x40fa44: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x40FA44u;
    {
        const bool branch_taken_0x40fa44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fa44) {
            ctx->pc = 0x40FA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40FA44u;
            // 0x40fa48: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40FA4Cu;
            goto label_40fa4c;
        }
    }
    ctx->pc = 0x40FA4Cu;
label_40fa4c:
    // 0x40fa4c: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x40fa4cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40fa50: 0xc0625d4  jal         func_189750
    ctx->pc = 0x40FA50u;
    SET_GPR_U32(ctx, 31, 0x40FA58u);
    ctx->pc = 0x40FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FA50u;
    // 0x40fa54: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189750u, 0x40FA50u, 0x40FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA58u;
label_40fa58:
    // 0x40fa58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40fa5c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x40fa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fa60: 0xc44147cc  lwc1        $f1, 0x47CC($v0)
    ctx->pc = 0x40fa60u;
    { uint32_t bits = FAST_READ32(0x5147CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fa64: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x40fa64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fa68: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fa6c: 0x46000d42  mul.s       $f21, $f1, $f0
    ctx->pc = 0x40fa6cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x40fa70: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x40fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fa74: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FA74u;
    {
        const bool branch_taken_0x40fa74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA74u;
        // 0x40fa78: 0x46001529  min.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = std::min(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa74) {
            ctx->pc = 0x40FAA8u;
            goto label_40faa8;
        }
    }
    ctx->pc = 0x40FA7Cu;
    // 0x40fa7c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fa80: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40FA80u;
    {
        const bool branch_taken_0x40fa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA80u;
        // 0x40fa84: 0xc6208c78  lwc1        $f0, -0x7388($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa80) {
            ctx->pc = 0x40FAACu;
            goto label_40faac;
        }
    }
    ctx->pc = 0x40FA88u;
    // 0x40fa88: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FA88u;
    SET_GPR_U32(ctx, 31, 0x40FA90u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FA88u, 0x40FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FA90u;
label_40fa90:
    // 0x40fa90: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40fa90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fa94: 0x0  nop
    ctx->pc = 0x40fa94u;
    // NOP
    // 0x40fa98: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x40FA98u;
    {
        const bool branch_taken_0x40fa98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FA98u;
        // 0x40fa9c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fa98) {
            ctx->pc = 0x40FABCu;
            goto label_40fabc;
        }
    }
    ctx->pc = 0x40FAA0u;
    // 0x40faa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40FAA0u;
    {
        const bool branch_taken_0x40faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FAA0u;
        // 0x40faa4: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40faa0) {
            ctx->pc = 0x40FACCu;
            goto label_40facc;
        }
    }
    ctx->pc = 0x40FAA8u;
label_40faa8:
    // 0x40faa8: 0xc6208c78  lwc1        $f0, -0x7388($s1)
    ctx->pc = 0x40faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40faac:
    // 0x40faac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40faacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fab0: 0x0  nop
    ctx->pc = 0x40fab0u;
    // NOP
    // 0x40fab4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x40FAB4u;
    {
        const bool branch_taken_0x40fab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FAB4u;
        // 0x40fab8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fab4) {
            ctx->pc = 0x40FAC8u;
            goto label_40fac8;
        }
    }
    ctx->pc = 0x40FABCu;
label_40fabc:
    // 0x40fabc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x40fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40FAC0u;
    {
        const bool branch_taken_0x40fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FAC0u;
        // 0x40fac4: 0x46010029  min.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fac0) {
            ctx->pc = 0x40FAE8u;
            goto label_40fae8;
        }
    }
    ctx->pc = 0x40FAC8u;
label_40fac8:
    // 0x40fac8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40fac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_40facc:
    // 0x40facc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FACCu;
    {
        const bool branch_taken_0x40facc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FACCu;
        // 0x40fad0: 0xc6208c78  lwc1        $f0, -0x7388($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40facc) {
            ctx->pc = 0x40FB00u;
            goto label_40fb00;
        }
    }
    ctx->pc = 0x40FAD4u;
    // 0x40fad4: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fad8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40FAD8u;
    {
        const bool branch_taken_0x40fad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40fad8) {
            ctx->pc = 0x40FB00u;
            goto label_40fb00;
        }
    }
    ctx->pc = 0x40FAE0u;
    // 0x40fae0: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FAE0u;
    SET_GPR_U32(ctx, 31, 0x40FAE8u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FAE0u, 0x40FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FAE8u;
label_40fae8:
    // 0x40fae8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x40fae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40faec: 0x0  nop
    ctx->pc = 0x40faecu;
    // NOP
    // 0x40faf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x40FAF0u;
    {
        const bool branch_taken_0x40faf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FAF0u;
        // 0x40faf4: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40faf0) {
            ctx->pc = 0x40FB10u;
            goto label_40fb10;
        }
    }
    ctx->pc = 0x40FAF8u;
    // 0x40faf8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x40FAF8u;
    {
        const bool branch_taken_0x40faf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40faf8) {
            ctx->pc = 0x40FB90u;
            goto label_40fb90;
        }
    }
    ctx->pc = 0x40FB00u;
label_40fb00:
    // 0x40fb00: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x40fb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fb04: 0x0  nop
    ctx->pc = 0x40fb04u;
    // NOP
    // 0x40fb08: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x40FB08u;
    {
        const bool branch_taken_0x40fb08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB08u;
        // 0x40fb0c: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb08) {
            ctx->pc = 0x40FB90u;
            goto label_40fb90;
        }
    }
    ctx->pc = 0x40FB10u;
label_40fb10:
    // 0x40fb10: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x40fb10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fb14: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fb18: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FB18u;
    {
        const bool branch_taken_0x40fb18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB18u;
        // 0x40fb1c: 0x46000d29  min.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb18) {
            ctx->pc = 0x40FB4Cu;
            goto label_40fb4c;
        }
    }
    ctx->pc = 0x40FB20u;
    // 0x40fb20: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fb24: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40FB24u;
    {
        const bool branch_taken_0x40fb24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB24u;
        // 0x40fb28: 0xc6208c78  lwc1        $f0, -0x7388($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb24) {
            ctx->pc = 0x40FB50u;
            goto label_40fb50;
        }
    }
    ctx->pc = 0x40FB2Cu;
    // 0x40fb2c: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FB2Cu;
    SET_GPR_U32(ctx, 31, 0x40FB34u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FB2Cu, 0x40FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FB34u;
label_40fb34:
    // 0x40fb34: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40fb34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fb38: 0x0  nop
    ctx->pc = 0x40fb38u;
    // NOP
    // 0x40fb3c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x40FB3Cu;
    {
        const bool branch_taken_0x40fb3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB3Cu;
        // 0x40fb40: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb3c) {
            ctx->pc = 0x40FB60u;
            goto label_40fb60;
        }
    }
    ctx->pc = 0x40FB44u;
    // 0x40fb44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x40FB44u;
    {
        const bool branch_taken_0x40fb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB44u;
        // 0x40fb48: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb44) {
            ctx->pc = 0x40FB6Cu;
            goto label_40fb6c;
        }
    }
    ctx->pc = 0x40FB4Cu;
label_40fb4c:
    // 0x40fb4c: 0xc6208c78  lwc1        $f0, -0x7388($s1)
    ctx->pc = 0x40fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fb50:
    // 0x40fb50: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40fb50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fb54: 0x0  nop
    ctx->pc = 0x40fb54u;
    // NOP
    // 0x40fb58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x40FB58u;
    {
        const bool branch_taken_0x40fb58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB58u;
        // 0x40fb5c: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb58) {
            ctx->pc = 0x40FB6Cu;
            goto label_40fb6c;
        }
    }
    ctx->pc = 0x40FB60u;
label_40fb60:
    // 0x40fb60: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x40fb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fb64: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x40FB64u;
    {
        const bool branch_taken_0x40fb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB64u;
        // 0x40fb68: 0x46000da9  min.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb64) {
            ctx->pc = 0x40FBA0u;
            goto label_40fba0;
        }
    }
    ctx->pc = 0x40FB6Cu;
label_40fb6c:
    // 0x40fb6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FB6Cu;
    {
        const bool branch_taken_0x40fb6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB6Cu;
        // 0x40fb70: 0xc6368c78  lwc1        $f22, -0x7388($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294937720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb6c) {
            ctx->pc = 0x40FBA0u;
            goto label_40fba0;
        }
    }
    ctx->pc = 0x40FB74u;
    // 0x40fb74: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fb78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40FB78u;
    {
        const bool branch_taken_0x40fb78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40fb78) {
            ctx->pc = 0x40FBA0u;
            goto label_40fba0;
        }
    }
    ctx->pc = 0x40FB80u;
    // 0x40fb80: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FB80u;
    SET_GPR_U32(ctx, 31, 0x40FB88u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FB80u, 0x40FB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FB88u;
label_40fb88:
    // 0x40fb88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40FB88u;
    {
        const bool branch_taken_0x40fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FB88u;
        // 0x40fb8c: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fb88) {
            ctx->pc = 0x40FBA0u;
            goto label_40fba0;
        }
    }
    ctx->pc = 0x40FB90u;
label_40fb90:
    // 0x40fb90: 0xc0625d4  jal         func_189750
    ctx->pc = 0x40FB90u;
    SET_GPR_U32(ctx, 31, 0x40FB98u);
    ctx->pc = 0x40FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FB90u;
    // 0x40fb94: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189750u, 0x40FB90u, 0x40FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FB98u;
label_40fb98:
    // 0x40fb98: 0xc6a147cc  lwc1        $f1, 0x47CC($s5)
    ctx->pc = 0x40fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 18380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fb9c: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x40fb9cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40fba0:
    // 0x40fba0: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x40fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x40fba4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40fba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40fba8: 0x0  nop
    ctx->pc = 0x40fba8u;
    // NOP
    // 0x40fbac: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x40fbacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fbb0: 0x0  nop
    ctx->pc = 0x40fbb0u;
    // NOP
    // 0x40fbb4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x40FBB4u;
    {
        const bool branch_taken_0x40fbb4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FBB4u;
        // 0x40fbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fbb4) {
            ctx->pc = 0x40FBC0u;
            goto label_40fbc0;
        }
    }
    ctx->pc = 0x40FBBCu;
    // 0x40fbbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40fbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40fbc0:
    // 0x40fbc0: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x40FBC0u;
    {
        const bool branch_taken_0x40fbc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FBC0u;
        // 0x40fbc4: 0xaec247c8  sw          $v0, 0x47C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fbc0) {
            ctx->pc = 0x40FC44u;
            goto label_40fc44;
        }
    }
    ctx->pc = 0x40FBC8u;
    // 0x40fbc8: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40FBC8u;
    SET_GPR_U32(ctx, 31, 0x40FBD0u);
    ctx->pc = 0x40FBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FBC8u;
    // 0x40fbcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40FBC8u, 0x40FBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FBD0u;
label_40fbd0:
    // 0x40fbd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40fbd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fbd4: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40FBD4u;
    SET_GPR_U32(ctx, 31, 0x40FBDCu);
    ctx->pc = 0x40FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FBD4u;
    // 0x40fbd8: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40FBD4u, 0x40FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FBDCu;
label_40fbdc:
    // 0x40fbdc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x40fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x40fbe0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x40fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x40fbe4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x40fbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x40fbe8: 0x90820410  lbu         $v0, 0x410($a0)
    ctx->pc = 0x40fbe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1040)));
    // 0x40fbec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x40fbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x40fbf0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x40FBF0u;
    {
        const bool branch_taken_0x40fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FBF0u;
        // 0x40fbf4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fbf0) {
            ctx->pc = 0x40FC2Cu;
            goto label_40fc2c;
        }
    }
    ctx->pc = 0x40FBF8u;
    // 0x40fbf8: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x40fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x40fbfc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40FBFCu;
    {
        const bool branch_taken_0x40fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FBFCu;
        // 0x40fc00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fbfc) {
            ctx->pc = 0x40FC0Cu;
            goto label_40fc0c;
        }
    }
    ctx->pc = 0x40FC04u;
    // 0x40fc04: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x40fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x40fc08: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x40fc08u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40fc0c:
    // 0x40fc0c: 0xc0627b6  jal         func_189ED8
    ctx->pc = 0x40FC0Cu;
    SET_GPR_U32(ctx, 31, 0x40FC14u);
    ctx->pc = 0x40FC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FC0Cu;
    // 0x40fc10: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189ED8u, 0x40FC0Cu, 0x40FC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FC14u;
label_40fc14:
    // 0x40fc14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x40fc14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fc18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40fc1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40FC1Cu;
    {
        const bool branch_taken_0x40fc1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC1Cu;
        // 0x40fc20: 0x38620008  xori        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc1c) {
            ctx->pc = 0x40FC30u;
            goto label_40fc30;
        }
    }
    ctx->pc = 0x40FC24u;
    // 0x40fc24: 0x1000ff43  b           . + 4 + (-0xBD << 2)
    ctx->pc = 0x40FC24u;
    {
        const bool branch_taken_0x40fc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC24u;
        // 0x40fc28: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc24) {
            ctx->pc = 0x40F934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40f934;
        }
    }
    ctx->pc = 0x40FC2Cu;
label_40fc2c:
    // 0x40fc2c: 0x38620008  xori        $v0, $v1, 0x8
    ctx->pc = 0x40fc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_40fc30:
    // 0x40fc30: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x40FC30u;
    {
        const bool branch_taken_0x40fc30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC30u;
        // 0x40fc34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc30) {
            ctx->pc = 0x40FDACu;
            goto label_40fdac;
        }
    }
    ctx->pc = 0x40FC38u;
    // 0x40fc38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40fc3c: 0x1000015b  b           . + 4 + (0x15B << 2)
    ctx->pc = 0x40FC3Cu;
    {
        const bool branch_taken_0x40fc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC3Cu;
        // 0x40fc40: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc3c) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40FC44u;
label_40fc44:
    // 0x40fc44: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fc48: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x40FC48u;
    {
        const bool branch_taken_0x40fc48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC48u;
        // 0x40fc4c: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc48) {
            ctx->pc = 0x40FCFCu;
            goto label_40fcfc;
        }
    }
    ctx->pc = 0x40FC50u;
    // 0x40fc50: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fc54: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x40FC54u;
    {
        const bool branch_taken_0x40fc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40fc54) {
            ctx->pc = 0x40FCFCu;
            goto label_40fcfc;
        }
    }
    ctx->pc = 0x40FC5Cu;
    // 0x40fc5c: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FC5Cu;
    SET_GPR_U32(ctx, 31, 0x40FC64u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FC5Cu, 0x40FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FC64u;
label_40fc64:
    // 0x40fc64: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x40fc64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x40fc68: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x40fc68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x40fc6c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x40fc6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x40fc70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40fc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40fc74: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x40fc74u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x40fc78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40fc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fc7c: 0x0  nop
    ctx->pc = 0x40fc7cu;
    // NOP
    // 0x40fc80: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x40FC80u;
    {
        const bool branch_taken_0x40fc80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FC80u;
        // 0x40fc84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fc80) {
            ctx->pc = 0x40FCF8u;
            goto label_40fcf8;
        }
    }
    ctx->pc = 0x40FC88u;
    // 0x40fc88: 0xc103e14  jal         func_40F850
    ctx->pc = 0x40FC88u;
    SET_GPR_U32(ctx, 31, 0x40FC90u);
    ctx->pc = 0x40FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FC88u;
    // 0x40fc8c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x40FC88u, 0x40FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FC90u;
label_40fc90:
    // 0x40fc90: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fc94: 0xc064560  jal         func_191580
    ctx->pc = 0x40FC94u;
    SET_GPR_U32(ctx, 31, 0x40FC9Cu);
    ctx->pc = 0x40FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FC94u;
    // 0x40fc98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191580u, 0x40FC94u, 0x40FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FC9Cu;
label_40fc9c:
    // 0x40fc9c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x40fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40fca0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x40fca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x40fca4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x40FCA4u;
    {
        const bool branch_taken_0x40fca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FCA4u;
        // 0x40fca8: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fca4) {
            ctx->pc = 0x40FDACu;
            goto label_40fdac;
        }
    }
    ctx->pc = 0x40FCACu;
    // 0x40fcac: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x40fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fcb0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x40fcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x40fcb4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x40fcb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fcbc: 0xac5100f0  sw          $s1, 0xF0($v0)
    ctx->pc = 0x40fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 17));
    // 0x40fcc0: 0x24c68c68  addiu       $a2, $a2, -0x7398
    ctx->pc = 0x40fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937704));
    // 0x40fcc4: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x40fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fcc8: 0xc10ca04  jal         func_432810
    ctx->pc = 0x40FCC8u;
    SET_GPR_U32(ctx, 31, 0x40FCD0u);
    ctx->pc = 0x40FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FCC8u;
    // 0x40fccc: 0x8c470038  lw          $a3, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x40FCC8u, 0x40FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FCD0u;
label_40fcd0:
    // 0x40fcd0: 0x8e48005c  lw          $t0, 0x5C($s2)
    ctx->pc = 0x40fcd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40fcd4: 0x3c070019  lui         $a3, 0x19
    ctx->pc = 0x40fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)25 << 16));
    // 0x40fcd8: 0x8ee45340  lw          $a0, 0x5340($s7)
    ctx->pc = 0x40fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 21312)));
    // 0x40fcdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40fcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fce0: 0x8d06003c  lw          $a2, 0x3C($t0)
    ctx->pc = 0x40fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x40fce4: 0x24e72588  addiu       $a3, $a3, 0x2588
    ctx->pc = 0x40fce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9608));
    // 0x40fce8: 0xc055354  jal         func_154D50
    ctx->pc = 0x40FCE8u;
    SET_GPR_U32(ctx, 31, 0x40FCF0u);
    ctx->pc = 0x40FCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FCE8u;
    // 0x40fcec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x40FCE8u, 0x40FCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FCF0u;
label_40fcf0:
    // 0x40fcf0: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x40FCF0u;
    {
        const bool branch_taken_0x40fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FCF0u;
        // 0x40fcf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fcf0) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40FCF8u;
label_40fcf8:
    // 0x40fcf8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x40fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40fcfc:
    // 0x40fcfc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x40fcfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x40fd00: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x40fd00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x40fd04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x40fd04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x40fd08: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x40fd08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x40fd0c: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x40fd0cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x40fd10: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x40fd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fd14: 0x0  nop
    ctx->pc = 0x40fd14u;
    // NOP
    // 0x40fd18: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x40FD18u;
    {
        const bool branch_taken_0x40fd18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD18u;
        // 0x40fd1c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd18) {
            ctx->pc = 0x40FD3Cu;
            goto label_40fd3c;
        }
    }
    ctx->pc = 0x40FD20u;
    // 0x40fd20: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x40fd20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x40fd24: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x40fd24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x40fd28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x40fd28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fd2c: 0x0  nop
    ctx->pc = 0x40fd2cu;
    // NOP
    // 0x40fd30: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x40FD30u;
    {
        const bool branch_taken_0x40fd30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fd30) {
            ctx->pc = 0x40FD7Cu;
            goto label_40fd7c;
        }
    }
    ctx->pc = 0x40FD38u;
    // 0x40fd38: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x40fd38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_40fd3c:
    // 0x40fd3c: 0x0  nop
    ctx->pc = 0x40fd3cu;
    // NOP
    // 0x40fd40: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x40FD40u;
    {
        const bool branch_taken_0x40fd40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fd40) {
            ctx->pc = 0x40FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40FD40u;
            // 0x40fd44: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40FD5Cu;
            goto label_40fd5c;
        }
    }
    ctx->pc = 0x40FD48u;
    // 0x40fd48: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40FD48u;
    SET_GPR_U32(ctx, 31, 0x40FD50u);
    ctx->pc = 0x40FD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FD48u;
    // 0x40fd4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40FD48u, 0x40FD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FD50u;
label_40fd50:
    // 0x40fd50: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x40fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40fd54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40FD54u;
    {
        const bool branch_taken_0x40fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD54u;
        // 0x40fd58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd54) {
            ctx->pc = 0x40FD60u;
            goto label_40fd60;
        }
    }
    ctx->pc = 0x40FD5Cu;
label_40fd5c:
    // 0x40fd5c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x40fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_40fd60:
    // 0x40fd60: 0xc1048c4  jal         func_412310
    ctx->pc = 0x40FD60u;
    SET_GPR_U32(ctx, 31, 0x40FD68u);
    ctx->pc = 0x412310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412310u, 0x40FD60u, 0x40FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FD68u;
label_40fd68:
    // 0x40fd68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40fd68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fd6c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x40FD6Cu;
    {
        const bool branch_taken_0x40fd6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD6Cu;
        // 0x40fd70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd6c) {
            ctx->pc = 0x40FDACu;
            goto label_40fdac;
        }
    }
    ctx->pc = 0x40FD74u;
    // 0x40fd74: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x40FD74u;
    {
        const bool branch_taken_0x40fd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD74u;
        // 0x40fd78: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd74) {
            ctx->pc = 0x4101B0u;
            goto label_4101b0;
        }
    }
    ctx->pc = 0x40FD7Cu;
label_40fd7c:
    // 0x40fd7c: 0xc0625ea  jal         func_1897A8
    ctx->pc = 0x40FD7Cu;
    SET_GPR_U32(ctx, 31, 0x40FD84u);
    ctx->pc = 0x40FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FD7Cu;
    // 0x40fd80: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1897A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1897A8u, 0x40FD7Cu, 0x40FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FD84u;
label_40fd84:
    // 0x40fd84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40FD84u;
    {
        const bool branch_taken_0x40fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FD84u;
        // 0x40fd88: 0x8e65cd4c  lw          $a1, -0x32B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fd84) {
            ctx->pc = 0x40FDACu;
            goto label_40fdac;
        }
    }
    ctx->pc = 0x40FD8Cu;
    // 0x40fd8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40fd90: 0x8ec447c8  lw          $a0, 0x47C8($s6)
    ctx->pc = 0x40fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18376)));
    // 0x40fd94: 0x8ca30bbc  lw          $v1, 0xBBC($a1)
    ctx->pc = 0x40fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3004)));
    // 0x40fd98: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x40fd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x40fd9c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x40fd9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x40fda0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x40fda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x40fda4: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x40FDA4u;
    {
        const bool branch_taken_0x40fda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FDA4u;
        // 0x40fda8: 0xaec447c8  sw          $a0, 0x47C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fda4) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40FDACu;
label_40fdac:
    // 0x40fdac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x40fdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40fdb0:
    // 0x40fdb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40fdb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fdb4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x40fdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x40fdb8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x40FDB8u;
    SET_GPR_U32(ctx, 31, 0x40FDC0u);
    ctx->pc = 0x40FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FDB8u;
    // 0x40fdbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x40FDB8u, 0x40FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FDC0u;
label_40fdc0:
    // 0x40fdc0: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x40fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x40fdc4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x40fdc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x40fdc8: 0x24678c70  addiu       $a3, $v1, -0x7390
    ctx->pc = 0x40fdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937712));
    // 0x40fdcc: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x40fdccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40fdd0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x40fdd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40fdd4: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x40fdd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40fdd8: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x40fdd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40fddc: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40FDDCu;
    SET_GPR_U32(ctx, 31, 0x40FDE4u);
    ctx->pc = 0x40FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FDDCu;
    // 0x40fde0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40FDDCu, 0x40FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FDE4u;
label_40fde4:
    // 0x40fde4: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x40fde4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40fde8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40fde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fdec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fdf0: 0xc10482a  jal         func_4120A8
    ctx->pc = 0x40FDF0u;
    SET_GPR_U32(ctx, 31, 0x40FDF8u);
    ctx->pc = 0x40FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FDF0u;
    // 0x40fdf4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4120A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4120A8u, 0x40FDF0u, 0x40FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FDF8u;
label_40fdf8:
    // 0x40fdf8: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x40fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x40fdfc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40FDFCu;
    {
        const bool branch_taken_0x40fdfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FDFCu;
        // 0x40fe00: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fdfc) {
            ctx->pc = 0x40FE1Cu;
            goto label_40fe1c;
        }
    }
    ctx->pc = 0x40FE04u;
    // 0x40fe04: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x40fe04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x40fe08: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x40fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x40fe0c: 0xc10482a  jal         func_4120A8
    ctx->pc = 0x40FE0Cu;
    SET_GPR_U32(ctx, 31, 0x40FE14u);
    ctx->pc = 0x40FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FE0Cu;
    // 0x40fe10: 0x27a60034  addiu       $a2, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4120A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4120A8u, 0x40FE0Cu, 0x40FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FE14u;
label_40fe14:
    // 0x40fe14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40FE14u;
    {
        const bool branch_taken_0x40fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FE14u;
        // 0x40fe18: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fe14) {
            ctx->pc = 0x40FE20u;
            goto label_40fe20;
        }
    }
    ctx->pc = 0x40FE1Cu;
label_40fe1c:
    // 0x40fe1c: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x40fe1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
label_40fe20:
    // 0x40fe20: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x40fe20u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40fe24: 0x8e62cd4c  lw          $v0, -0x32B4($s3)
    ctx->pc = 0x40fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    // 0x40fe28: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x40fe28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x40fe2c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x40fe2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x40fe30: 0xc4410bd8  lwc1        $f1, 0xBD8($v0)
    ctx->pc = 0x40fe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fe34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40fe38: 0xc4420bc8  lwc1        $f2, 0xBC8($v0)
    ctx->pc = 0x40fe38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fe3c: 0xc4400be8  lwc1        $f0, 0xBE8($v0)
    ctx->pc = 0x40fe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fe40: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x40fe40u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x40fe44: 0xc4540bf8  lwc1        $f20, 0xBF8($v0)
    ctx->pc = 0x40fe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40fe48: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x40fe48u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x40fe4c: 0x4600a528  max.s       $f20, $f20, $f0
    ctx->pc = 0x40fe4cu;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[0]);
    // 0x40fe50: 0xc0625d4  jal         func_189750
    ctx->pc = 0x40FE50u;
    SET_GPR_U32(ctx, 31, 0x40FE58u);
    ctx->pc = 0x40FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FE50u;
    // 0x40fe54: 0x4603a501  sub.s       $f20, $f20, $f3 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189750u, 0x40FE50u, 0x40FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FE58u;
label_40fe58:
    // 0x40fe58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40fe58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fe5c: 0x0  nop
    ctx->pc = 0x40fe5cu;
    // NOP
    // 0x40fe60: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x40FE60u;
    {
        const bool branch_taken_0x40fe60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40fe60) {
            ctx->pc = 0x40FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40FE60u;
            // 0x40fe64: 0x36100001  ori         $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x40FE68u;
            goto label_40fe68;
        }
    }
    ctx->pc = 0x40FE68u;
label_40fe68:
    // 0x40fe68: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x40fe68u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x40fe6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40FE6Cu;
    {
        const bool branch_taken_0x40fe6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FE6Cu;
        // 0x40fe70: 0x8e63cd4c  lw          $v1, -0x32B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fe6c) {
            ctx->pc = 0x40FE84u;
            goto label_40fe84;
        }
    }
    ctx->pc = 0x40FE74u;
    // 0x40fe74: 0xaec047c8  sw          $zero, 0x47C8($s6)
    ctx->pc = 0x40fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
    // 0x40fe78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40fe7c: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x40FE7Cu;
    {
        const bool branch_taken_0x40fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FE7Cu;
        // 0x40fe80: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fe7c) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x40FE84u;
label_40fe84:
    // 0x40fe84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40fe88: 0xc44447cc  lwc1        $f4, 0x47CC($v0)
    ctx->pc = 0x40fe88u;
    { uint32_t bits = FAST_READ32(0x5147CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x40fe8c: 0xc4630bc8  lwc1        $f3, 0xBC8($v1)
    ctx->pc = 0x40fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40fe90: 0xc4600bd8  lwc1        $f0, 0xBD8($v1)
    ctx->pc = 0x40fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fe94: 0xc4610be8  lwc1        $f1, 0xBE8($v1)
    ctx->pc = 0x40fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40fe98: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x40fe98u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x40fe9c: 0xc4620bf8  lwc1        $f2, 0xBF8($v1)
    ctx->pc = 0x40fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x40fea0: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x40fea0u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x40fea4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x40fea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x40fea8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x40fea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40feac: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x40feacu;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
    // 0x40feb0: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40feb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40feb4: 0x46022542  mul.s       $f21, $f4, $f2
    ctx->pc = 0x40feb4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x40feb8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FEB8u;
    {
        const bool branch_taken_0x40feb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FEB8u;
        // 0x40febc: 0x46001d28  max.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40feb8) {
            ctx->pc = 0x40FEECu;
            goto label_40feec;
        }
    }
    ctx->pc = 0x40FEC0u;
    // 0x40fec0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40fec4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40FEC4u;
    {
        const bool branch_taken_0x40fec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FEC4u;
        // 0x40fec8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fec4) {
            ctx->pc = 0x40FEF0u;
            goto label_40fef0;
        }
    }
    ctx->pc = 0x40FECCu;
    // 0x40fecc: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FECCu;
    SET_GPR_U32(ctx, 31, 0x40FED4u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FECCu, 0x40FED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FED4u;
label_40fed4:
    // 0x40fed4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x40fed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fed8: 0x0  nop
    ctx->pc = 0x40fed8u;
    // NOP
    // 0x40fedc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x40FEDCu;
    {
        const bool branch_taken_0x40fedc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FEDCu;
        // 0x40fee0: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fedc) {
            ctx->pc = 0x40FF04u;
            goto label_40ff04;
        }
    }
    ctx->pc = 0x40FEE4u;
    // 0x40fee4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40FEE4u;
    {
        const bool branch_taken_0x40fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FEE4u;
        // 0x40fee8: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fee4) {
            ctx->pc = 0x40FF10u;
            goto label_40ff10;
        }
    }
    ctx->pc = 0x40FEECu;
label_40feec:
    // 0x40feec: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40fef0:
    // 0x40fef0: 0xc4408c7c  lwc1        $f0, -0x7384($v0)
    ctx->pc = 0x40fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40fef4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x40fef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40fef8: 0x0  nop
    ctx->pc = 0x40fef8u;
    // NOP
    // 0x40fefc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x40FEFCu;
    {
        const bool branch_taken_0x40fefc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FEFCu;
        // 0x40ff00: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fefc) {
            ctx->pc = 0x40FF10u;
            goto label_40ff10;
        }
    }
    ctx->pc = 0x40FF04u;
label_40ff04:
    // 0x40ff04: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x40ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x40ff08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x40FF08u;
    {
        const bool branch_taken_0x40ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF08u;
        // 0x40ff0c: 0x46010028  max.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff08) {
            ctx->pc = 0x40FF2Cu;
            goto label_40ff2c;
        }
    }
    ctx->pc = 0x40FF10u;
label_40ff10:
    // 0x40ff10: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FF10u;
    {
        const bool branch_taken_0x40ff10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF10u;
        // 0x40ff14: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff10) {
            ctx->pc = 0x40FF44u;
            goto label_40ff44;
        }
    }
    ctx->pc = 0x40FF18u;
    // 0x40ff18: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40ff1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40FF1Cu;
    {
        const bool branch_taken_0x40ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF1Cu;
        // 0x40ff20: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff1c) {
            ctx->pc = 0x40FF44u;
            goto label_40ff44;
        }
    }
    ctx->pc = 0x40FF24u;
    // 0x40ff24: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FF24u;
    SET_GPR_U32(ctx, 31, 0x40FF2Cu);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FF24u, 0x40FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FF2Cu;
label_40ff2c:
    // 0x40ff2c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x40ff2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ff30: 0x0  nop
    ctx->pc = 0x40ff30u;
    // NOP
    // 0x40ff34: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x40FF34u;
    {
        const bool branch_taken_0x40ff34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF34u;
        // 0x40ff38: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff34) {
            ctx->pc = 0x40FF58u;
            goto label_40ff58;
        }
    }
    ctx->pc = 0x40FF3Cu;
    // 0x40ff3c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x40FF3Cu;
    {
        const bool branch_taken_0x40ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF3Cu;
        // 0x40ff40: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff3c) {
            ctx->pc = 0x40FFE8u;
            goto label_40ffe8;
        }
    }
    ctx->pc = 0x40FF44u;
label_40ff44:
    // 0x40ff44: 0xc4408c7c  lwc1        $f0, -0x7384($v0)
    ctx->pc = 0x40ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ff48: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x40ff48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ff4c: 0x0  nop
    ctx->pc = 0x40ff4cu;
    // NOP
    // 0x40ff50: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x40FF50u;
    {
        const bool branch_taken_0x40ff50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF50u;
        // 0x40ff54: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff50) {
            ctx->pc = 0x40FFE4u;
            goto label_40ffe4;
        }
    }
    ctx->pc = 0x40FF58u;
label_40ff58:
    // 0x40ff58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x40ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ff5c: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x40ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x40ff60: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40FF60u;
    {
        const bool branch_taken_0x40ff60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF60u;
        // 0x40ff64: 0x46000d28  max.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff60) {
            ctx->pc = 0x40FF94u;
            goto label_40ff94;
        }
    }
    ctx->pc = 0x40FF68u;
    // 0x40ff68: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40ff6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40FF6Cu;
    {
        const bool branch_taken_0x40ff6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF6Cu;
        // 0x40ff70: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff6c) {
            ctx->pc = 0x40FF98u;
            goto label_40ff98;
        }
    }
    ctx->pc = 0x40FF74u;
    // 0x40ff74: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FF74u;
    SET_GPR_U32(ctx, 31, 0x40FF7Cu);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FF74u, 0x40FF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FF7Cu;
label_40ff7c:
    // 0x40ff7c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x40ff7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ff80: 0x0  nop
    ctx->pc = 0x40ff80u;
    // NOP
    // 0x40ff84: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x40FF84u;
    {
        const bool branch_taken_0x40ff84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF84u;
        // 0x40ff88: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff84) {
            ctx->pc = 0x40FFACu;
            goto label_40ffac;
        }
    }
    ctx->pc = 0x40FF8Cu;
    // 0x40ff8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40FF8Cu;
    {
        const bool branch_taken_0x40ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF8Cu;
        // 0x40ff90: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff8c) {
            ctx->pc = 0x40FFB8u;
            goto label_40ffb8;
        }
    }
    ctx->pc = 0x40FF94u;
label_40ff94:
    // 0x40ff94: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_40ff98:
    // 0x40ff98: 0xc4408c7c  lwc1        $f0, -0x7384($v0)
    ctx->pc = 0x40ff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ff9c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x40ff9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40ffa0: 0x0  nop
    ctx->pc = 0x40ffa0u;
    // NOP
    // 0x40ffa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x40FFA4u;
    {
        const bool branch_taken_0x40ffa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x40FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFA4u;
        // 0x40ffa8: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffa4) {
            ctx->pc = 0x40FFB8u;
            goto label_40ffb8;
        }
    }
    ctx->pc = 0x40FFACu;
label_40ffac:
    // 0x40ffac: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x40ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40ffb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x40FFB0u;
    {
        const bool branch_taken_0x40ffb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFB0u;
        // 0x40ffb4: 0x46000d28  max.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = std::max(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffb0) {
            ctx->pc = 0x40FFE8u;
            goto label_40ffe8;
        }
    }
    ctx->pc = 0x40FFB8u;
label_40ffb8:
    // 0x40ffb8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40FFB8u;
    {
        const bool branch_taken_0x40ffb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFB8u;
        // 0x40ffbc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffb8) {
            ctx->pc = 0x40FFDCu;
            goto label_40ffdc;
        }
    }
    ctx->pc = 0x40FFC0u;
    // 0x40ffc0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x40ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x40ffc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40FFC4u;
    {
        const bool branch_taken_0x40ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFC4u;
        // 0x40ffc8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffc4) {
            ctx->pc = 0x40FFDCu;
            goto label_40ffdc;
        }
    }
    ctx->pc = 0x40FFCCu;
    // 0x40ffcc: 0xc064698  jal         func_191A60
    ctx->pc = 0x40FFCCu;
    SET_GPR_U32(ctx, 31, 0x40FFD4u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x40FFCCu, 0x40FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FFD4u;
label_40ffd4:
    // 0x40ffd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40FFD4u;
    {
        const bool branch_taken_0x40ffd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFD4u;
        // 0x40ffd8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffd4) {
            ctx->pc = 0x40FFE8u;
            goto label_40ffe8;
        }
    }
    ctx->pc = 0x40FFDCu;
label_40ffdc:
    // 0x40ffdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40FFDCu;
    {
        const bool branch_taken_0x40ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFDCu;
        // 0x40ffe0: 0xc4548c7c  lwc1        $f20, -0x7384($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffdc) {
            ctx->pc = 0x40FFE8u;
            goto label_40ffe8;
        }
    }
    ctx->pc = 0x40FFE4u;
label_40ffe4:
    // 0x40ffe4: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x40ffe4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_40ffe8:
    // 0x40ffe8: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x40FFE8u;
    {
        const bool branch_taken_0x40ffe8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFE8u;
        // 0x40ffec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffe8) {
            ctx->pc = 0x41001Cu;
            goto label_41001c;
        }
    }
    ctx->pc = 0x40FFF0u;
    // 0x40fff0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x40fff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x40fff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40fff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x40fff8: 0x0  nop
    ctx->pc = 0x40fff8u;
    // NOP
    // 0x40fffc: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x40fffcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x410000: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x410000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x410004: 0x0  nop
    ctx->pc = 0x410004u;
    // NOP
    // 0x410008: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x410008u;
    {
        const bool branch_taken_0x410008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410008u;
        // 0x41000c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410008) {
            ctx->pc = 0x41001Cu;
            goto label_41001c;
        }
    }
    ctx->pc = 0x410010u;
    // 0x410010: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x410010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x410014: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x410014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x410018: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x410018u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_41001c:
    // 0x41001c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x41001Cu;
    {
        const bool branch_taken_0x41001c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x410020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41001Cu;
        // 0x410020: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41001c) {
            ctx->pc = 0x410068u;
            goto label_410068;
        }
    }
    ctx->pc = 0x410024u;
    // 0x410024: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x410024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x410028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x410028u;
    {
        const bool branch_taken_0x410028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410028u;
        // 0x41002c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410028) {
            ctx->pc = 0x410038u;
            goto label_410038;
        }
    }
    ctx->pc = 0x410030u;
    // 0x410030: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x410030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x410034: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x410034u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_410038:
    // 0x410038: 0xc0627b6  jal         func_189ED8
    ctx->pc = 0x410038u;
    SET_GPR_U32(ctx, 31, 0x410040u);
    ctx->pc = 0x41003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410038u;
    // 0x41003c: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189ED8u, 0x410038u, 0x410040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410040u;
label_410040:
    // 0x410040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x410040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x410044: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x410044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x410048: 0x10640058  beq         $v1, $a0, . + 4 + (0x58 << 2)
    ctx->pc = 0x410048u;
    {
        const bool branch_taken_0x410048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x41004Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410048u;
        // 0x41004c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410048) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x410050u;
    // 0x410050: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x410050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x410054: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x410054u;
    {
        const bool branch_taken_0x410054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x410054) {
            ctx->pc = 0x410058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410054u;
            // 0x410058: 0xae400034  sw          $zero, 0x34($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410064u;
            goto label_410064;
        }
    }
    ctx->pc = 0x41005Cu;
    // 0x41005c: 0xae440034  sw          $a0, 0x34($s2)
    ctx->pc = 0x41005cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 4));
    // 0x410060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x410060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410064:
    // 0x410064: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x410064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_410068:
    // 0x410068: 0xc4408c7c  lwc1        $f0, -0x7384($v0)
    ctx->pc = 0x410068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x41006c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x41006cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x410070: 0x0  nop
    ctx->pc = 0x410070u;
    // NOP
    // 0x410074: 0x4503004c  bc1tl       . + 4 + (0x4C << 2)
    ctx->pc = 0x410074u;
    {
        const bool branch_taken_0x410074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x410074) {
            ctx->pc = 0x410078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410074u;
            // 0x410078: 0xaec047c8  sw          $zero, 0x47C8($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4101A8u;
            goto label_4101a8;
        }
    }
    ctx->pc = 0x41007Cu;
    // 0x41007c: 0x5280000a  beql        $s4, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x41007Cu;
    {
        const bool branch_taken_0x41007c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x41007c) {
            ctx->pc = 0x410080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41007Cu;
            // 0x410080: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4100A8u;
            goto label_4100a8;
        }
    }
    ctx->pc = 0x410084u;
    // 0x410084: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x410084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x410088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x410088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x41008c: 0x0  nop
    ctx->pc = 0x41008cu;
    // NOP
    // 0x410090: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x410090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x410094: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x410094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x410098: 0x0  nop
    ctx->pc = 0x410098u;
    // NOP
    // 0x41009c: 0x45020042  bc1fl       . + 4 + (0x42 << 2)
    ctx->pc = 0x41009Cu;
    {
        const bool branch_taken_0x41009c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41009c) {
            ctx->pc = 0x4100A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41009Cu;
            // 0x4100a0: 0xaec047c8  sw          $zero, 0x47C8($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4101A8u;
            goto label_4101a8;
        }
    }
    ctx->pc = 0x4100A4u;
    // 0x4100a4: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x4100a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_4100a8:
    // 0x4100a8: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4100A8u;
    {
        const bool branch_taken_0x4100a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4100a8) {
            ctx->pc = 0x4100ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4100A8u;
            // 0x4100ac: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4100F8u;
            goto label_4100f8;
        }
    }
    ctx->pc = 0x4100B0u;
    // 0x4100b0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x4100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x4100b4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4100B4u;
    {
        const bool branch_taken_0x4100b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4100b4) {
            ctx->pc = 0x4100B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4100B4u;
            // 0x4100b8: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4100F8u;
            goto label_4100f8;
        }
    }
    ctx->pc = 0x4100BCu;
    // 0x4100bc: 0xc064698  jal         func_191A60
    ctx->pc = 0x4100BCu;
    SET_GPR_U32(ctx, 31, 0x4100C4u);
    ctx->pc = 0x191A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A60u, 0x4100BCu, 0x4100C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4100C4u;
label_4100c4:
    // 0x4100c4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x4100c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x4100c8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x4100c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x4100cc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x4100ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x4100d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4100d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4100d4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x4100d4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x4100d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4100d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4100dc: 0x0  nop
    ctx->pc = 0x4100dcu;
    // NOP
    // 0x4100e0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x4100E0u;
    {
        const bool branch_taken_0x4100e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4100e0) {
            ctx->pc = 0x4100E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4100E0u;
            // 0x4100e4: 0x4614a801  sub.s       $f0, $f21, $f20 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x410104u;
            goto label_410104;
        }
    }
    ctx->pc = 0x4100E8u;
    // 0x4100e8: 0xc064456  jal         func_191158
    ctx->pc = 0x4100E8u;
    SET_GPR_U32(ctx, 31, 0x4100F0u);
    ctx->pc = 0x4100ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4100E8u;
    // 0x4100ec: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191158u, 0x4100E8u, 0x4100F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4100F0u;
label_4100f0:
    // 0x4100f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x4100F0u;
    {
        const bool branch_taken_0x4100f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4100F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100F0u;
        // 0x4100f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4100f0) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x4100F8u;
label_4100f8:
    // 0x4100f8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x4100f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x4100fc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x4100fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x410100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x410100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_410104:
    // 0x410104: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x410104u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x410108: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x410108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x41010c: 0x0  nop
    ctx->pc = 0x41010cu;
    // NOP
    // 0x410110: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x410110u;
    {
        const bool branch_taken_0x410110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x410114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410110u;
        // 0x410114: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410110) {
            ctx->pc = 0x410128u;
            goto label_410128;
        }
    }
    ctx->pc = 0x410118u;
    // 0x410118: 0xc0628ac  jal         func_18A2B0
    ctx->pc = 0x410118u;
    SET_GPR_U32(ctx, 31, 0x410120u);
    ctx->pc = 0x41011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410118u;
    // 0x41011c: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A2B0u, 0x410118u, 0x410120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410120u;
label_410120:
    // 0x410120: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x410120u;
    {
        const bool branch_taken_0x410120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410120u;
        // 0x410124: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410120) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x410128u;
label_410128:
    // 0x410128: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x410128u;
    {
        const bool branch_taken_0x410128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410128u;
        // 0x41012c: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x410128) {
            ctx->pc = 0x41013Cu;
            goto label_41013c;
        }
    }
    ctx->pc = 0x410130u;
    // 0x410130: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x410130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x410134: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x410134u;
    {
        const bool branch_taken_0x410134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410134u;
        // 0x410138: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410134) {
            ctx->pc = 0x410194u;
            goto label_410194;
        }
    }
    ctx->pc = 0x41013Cu;
label_41013c:
    // 0x41013c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x41013cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x410140: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x410140u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x410144: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x410144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x410148: 0x0  nop
    ctx->pc = 0x410148u;
    // NOP
    // 0x41014c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x41014Cu;
    {
        const bool branch_taken_0x41014c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x410150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41014Cu;
        // 0x410150: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41014c) {
            ctx->pc = 0x410168u;
            goto label_410168;
        }
    }
    ctx->pc = 0x410154u;
    // 0x410154: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x410154u;
    SET_GPR_U32(ctx, 31, 0x41015Cu);
    ctx->pc = 0x410158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410154u;
    // 0x410158: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x410154u, 0x41015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41015Cu;
label_41015c:
    // 0x41015c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x41015cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x410160: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x410160u;
    {
        const bool branch_taken_0x410160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410160u;
        // 0x410164: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410160) {
            ctx->pc = 0x410184u;
            goto label_410184;
        }
    }
    ctx->pc = 0x410168u;
label_410168:
    // 0x410168: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x410168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x41016c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x41016cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x410170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x410170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x410174: 0x0  nop
    ctx->pc = 0x410174u;
    // NOP
    // 0x410178: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x410178u;
    {
        const bool branch_taken_0x410178 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410178u;
        // 0x41017c: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410178) {
            ctx->pc = 0x4101A4u;
            goto label_4101a4;
        }
    }
    ctx->pc = 0x410180u;
    // 0x410180: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x410180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_410184:
    // 0x410184: 0xc104574  jal         func_4115D0
    ctx->pc = 0x410184u;
    SET_GPR_U32(ctx, 31, 0x41018Cu);
    ctx->pc = 0x4115D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4115D0u, 0x410184u, 0x41018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41018Cu;
label_41018c:
    // 0x41018c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x41018Cu;
    {
        const bool branch_taken_0x41018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41018Cu;
        // 0x410190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41018c) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x410194u;
label_410194:
    // 0x410194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x410194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x410198: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x410198u;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x41019c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41019Cu;
    {
        const bool branch_taken_0x41019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41019Cu;
        // 0x4101a0: 0xaec047c8  sw          $zero, 0x47C8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41019c) {
            ctx->pc = 0x4101ACu;
            goto label_4101ac;
        }
    }
    ctx->pc = 0x4101A4u;
label_4101a4:
    // 0x4101a4: 0xaec047c8  sw          $zero, 0x47C8($s6)
    ctx->pc = 0x4101a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 18376), GPR_U32(ctx, 0));
label_4101a8:
    // 0x4101a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4101a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4101ac:
    // 0x4101ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4101acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4101b0:
    // 0x4101b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4101b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4101b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4101b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4101b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4101b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4101bc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4101bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4101c0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4101c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4101c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4101c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4101c8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4101c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4101cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4101ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4101d0: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x4101d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x4101d4: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x4101d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x4101d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x4101d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4101dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4101DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4101E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4101DCu;
        // 0x4101e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4101DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4101E4u;
    // 0x4101e4: 0x0  nop
    ctx->pc = 0x4101e4u;
    // NOP
    // 0x4101e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4101e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4101ec: 0x0  nop
    ctx->pc = 0x4101ecu;
    // NOP
    ctx->pc = 0x4101f0u;
}
