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

// Function: sub_00477EF8
// Address: 0x477ef8 - 0x478f68
void sub_00477EF8_0x477ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477EF8_0x477ef8");
#endif

    switch (ctx->pc) {
        case 0x4780c8u: goto label_4780c8;
        case 0x478118u: goto label_478118;
        case 0x478218u: goto label_478218;
        case 0x478268u: goto label_478268;
        case 0x478370u: goto label_478370;
        case 0x4783e8u: goto label_4783e8;
        case 0x4784a0u: goto label_4784a0;
        case 0x478568u: goto label_478568;
        case 0x4785a0u: goto label_4785a0;
        case 0x478678u: goto label_478678;
        case 0x4786c0u: goto label_4786c0;
        case 0x478790u: goto label_478790;
        case 0x4787f8u: goto label_4787f8;
        case 0x4788b0u: goto label_4788b0;
        case 0x478978u: goto label_478978;
        case 0x4789b0u: goto label_4789b0;
        case 0x478a78u: goto label_478a78;
        case 0x478ac8u: goto label_478ac8;
        case 0x478bf0u: goto label_478bf0;
        case 0x478c40u: goto label_478c40;
        case 0x478d68u: goto label_478d68;
        case 0x478dc0u: goto label_478dc0;
        case 0x478e60u: goto label_478e60;
        default: break;
    }

    ctx->pc = 0x477ef8u;

    // 0x477ef8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x477ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x477efc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x477efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x477f00: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x477f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x477f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x477f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f08: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x477f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x477f0c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x477f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x477f10: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x477f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x477f14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x477f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x477f18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x477f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x477f1c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x477f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x477f20: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x477f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x477f24: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x477f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x477f28: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x477f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x477f2c: 0x8c790018  lw          $t9, 0x18($v1)
    ctx->pc = 0x477f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x477f30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x477f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x477f34: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x477f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x477f38: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x477f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x477f3c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x477f3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x477f40: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x477f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x477f44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x477f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477f48: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x477f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x477f4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x477F4Cu;
    {
        const bool branch_taken_0x477f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477F4Cu;
        // 0x477f50: 0x8dde000c  lw          $fp, 0xC($t6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477f4c) {
            ctx->pc = 0x477F78u;
            goto label_477f78;
        }
    }
    ctx->pc = 0x477F54u;
    // 0x477f54: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x477f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x477f58: 0x2443eb60  addiu       $v1, $v0, -0x14A0
    ctx->pc = 0x477f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x477f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x477f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f60: 0x2476000f  addiu       $s6, $v1, 0xF
    ctx->pc = 0x477f60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x477f64: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x477f64u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x58EB67u));
    // 0x477f68: 0x90770008  lbu         $s7, 0x8($v1)
    ctx->pc = 0x477f68u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)FAST_READ8(0x58EB68u));
    // 0x477f6c: 0x24740009  addiu       $s4, $v1, 0x9
    ctx->pc = 0x477f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x477f70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x477F70u;
    {
        const bool branch_taken_0x477f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477F70u;
        // 0x477f74: 0x2473000c  addiu       $s3, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477f70) {
            ctx->pc = 0x477F98u;
            goto label_477f98;
        }
    }
    ctx->pc = 0x477F78u;
label_477f78:
    // 0x477f78: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x477f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x477f7c: 0x2443eb60  addiu       $v1, $v0, -0x14A0
    ctx->pc = 0x477f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x477f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x477f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477f84: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x477f84u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x58EB62u));
    // 0x477f88: 0x24760006  addiu       $s6, $v1, 0x6
    ctx->pc = 0x477f88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x477f8c: 0x90770003  lbu         $s7, 0x3($v1)
    ctx->pc = 0x477f8cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)FAST_READ8(0x58EB63u));
    // 0x477f90: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x477f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x477f94: 0x24730005  addiu       $s3, $v1, 0x5
    ctx->pc = 0x477f94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_477f98:
    // 0x477f98: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x477f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x477f9c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x477f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477fa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x477fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x477fa4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x477fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x477fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x477FA8u;
    {
        const bool branch_taken_0x477fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x477FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477FA8u;
        // 0x477fac: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477fa8) {
            ctx->pc = 0x477FB8u;
            goto label_477fb8;
        }
    }
    ctx->pc = 0x477FB0u;
    // 0x477fb0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x477fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x477fb4: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x477fb4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_477fb8:
    // 0x477fb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x477fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x477fbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x477fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x477fc0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x477FC0u;
    {
        const bool branch_taken_0x477fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x477FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477FC0u;
        // 0x477fc4: 0x24b8eb60  addiu       $t8, $a1, -0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477fc0) {
            ctx->pc = 0x477FDCu;
            goto label_477fdc;
        }
    }
    ctx->pc = 0x477FC8u;
    // 0x477fc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x477fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477fcc: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x477fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x477fd0: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x477fd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477fd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x477fd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477fd8: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x477fd8u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_477fdc:
    // 0x477fdc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x477fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x477fe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x477fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477fe4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x477fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x477fe8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x477FE8u;
    {
        const bool branch_taken_0x477fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477FE8u;
        // 0x477fec: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477fe8) {
            ctx->pc = 0x47800Cu;
            goto label_47800c;
        }
    }
    ctx->pc = 0x477FF0u;
    // 0x477ff0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x477ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x477ff4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x477ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x477ff8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x477ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x477ffc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x477FFCu;
    {
        const bool branch_taken_0x477ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477FFCu;
        // 0x478000: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477ffc) {
            ctx->pc = 0x47800Cu;
            goto label_47800c;
        }
    }
    ctx->pc = 0x478004u;
    // 0x478004: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x478004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x478008: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x478008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_47800c:
    // 0x47800c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x47800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x478010: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478010u;
    {
        const bool branch_taken_0x478010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478010u;
        // 0x478014: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478010) {
            ctx->pc = 0x478034u;
            goto label_478034;
        }
    }
    ctx->pc = 0x478018u;
    // 0x478018: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x478018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x47801c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x47801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x478020: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x478020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x478024: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x478024u;
    {
        const bool branch_taken_0x478024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478024u;
        // 0x478028: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478024) {
            ctx->pc = 0x478034u;
            goto label_478034;
        }
    }
    ctx->pc = 0x47802Cu;
    // 0x47802c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x47802cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x478030: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x478030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_478034:
    // 0x478034: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x478034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x478038: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478038u;
    {
        const bool branch_taken_0x478038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478038u;
        // 0x47803c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478038) {
            ctx->pc = 0x47805Cu;
            goto label_47805c;
        }
    }
    ctx->pc = 0x478040u;
    // 0x478040: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x478040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x478044: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x478044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x478048: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x478048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x47804c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47804Cu;
    {
        const bool branch_taken_0x47804c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47804Cu;
        // 0x478050: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x47804c) {
            ctx->pc = 0x47805Cu;
            goto label_47805c;
        }
    }
    ctx->pc = 0x478054u;
    // 0x478054: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x478054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x478058: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x478058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_47805c:
    // 0x47805c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47805cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478060: 0x8f24005c  lw          $a0, 0x5C($t9)
    ctx->pc = 0x478060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x478064: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x478064u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x478068: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x478068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x47806c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x47806cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x478070: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x478070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x478074: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x478074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x478078: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x478078u;
    {
        const bool branch_taken_0x478078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x47807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478078u;
        // 0x47807c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478078) {
            ctx->pc = 0x4781C8u;
            goto label_4781c8;
        }
    }
    ctx->pc = 0x478080u;
    // 0x478080: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478084: 0x8dc300a0  lw          $v1, 0xA0($t6)
    ctx->pc = 0x478084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 160)));
    // 0x478088: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x478088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x47808c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478090: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x478090u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x478094: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x478098: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x478098u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x47809c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x47809cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4780a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4780A0u;
    {
        const bool branch_taken_0x4780a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4780A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4780A0u;
        // 0x4780a4: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4780a0) {
            ctx->pc = 0x4780B4u;
            goto label_4780b4;
        }
    }
    ctx->pc = 0x4780A8u;
    // 0x4780a8: 0x8dc200a4  lw          $v0, 0xA4($t6)
    ctx->pc = 0x4780a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 164)));
    // 0x4780ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4780acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4780b0: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x4780b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4780b4:
    // 0x4780b4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x4780b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780b8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4780b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780bc: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x4780bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780c0: 0x19800040  blez        $t4, . + 4 + (0x40 << 2)
    ctx->pc = 0x4780C0u;
    {
        const bool branch_taken_0x4780c0 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x4780C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4780C0u;
        // 0x4780c4: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4780c0) {
            ctx->pc = 0x4781C4u;
            goto label_4781c4;
        }
    }
    ctx->pc = 0x4780C8u;
label_4780c8:
    // 0x4780c8: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x4780c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x4780cc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x4780ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x4780d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4780D0u;
    {
        const bool branch_taken_0x4780d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4780D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4780D0u;
        // 0x4780d4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4780d0) {
            ctx->pc = 0x4780F4u;
            goto label_4780f4;
        }
    }
    ctx->pc = 0x4780D8u;
    // 0x4780d8: 0x85c200ac  lh          $v0, 0xAC($t6)
    ctx->pc = 0x4780d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 172)));
    // 0x4780dc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x4780dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780e0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4780e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4780e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4780e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4780e8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4780e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4780ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4780ECu;
    {
        const bool branch_taken_0x4780ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4780F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4780ECu;
        // 0x4780f0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4780ec) {
            ctx->pc = 0x478108u;
            goto label_478108;
        }
    }
    ctx->pc = 0x4780F4u;
label_4780f4:
    // 0x4780f4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4780F4u;
    {
        const bool branch_taken_0x4780f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4780F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4780F4u;
        // 0x4780f8: 0x8dc90098  lw          $t1, 0x98($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4780f4) {
            ctx->pc = 0x478100u;
            goto label_478100;
        }
    }
    ctx->pc = 0x4780FCu;
    // 0x4780fc: 0x8dc9009c  lw          $t1, 0x9C($t6)
    ctx->pc = 0x4780fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 156)));
label_478100:
    // 0x478100: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x478100u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x478104: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x478104u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_478108:
    // 0x478108: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x478108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47810c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x47810Cu;
    {
        const bool branch_taken_0x47810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47810Cu;
        // 0x478110: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47810c) {
            ctx->pc = 0x478198u;
            goto label_478198;
        }
    }
    ctx->pc = 0x478114u;
    // 0x478114: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x478114u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_478118:
    // 0x478118: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x478118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x47811c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x47811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478120: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478124: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478128: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x478128u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47812c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47812cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478130: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x478130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478134: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x478134u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478138: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x478138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47813c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47813cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x478140: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x478140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x478144: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x478144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478148: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x478148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47814c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47814cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478150: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x478150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478154: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478158: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x478158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x47815c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x47815cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x478160: 0x600013  mtlo        $v1
    ctx->pc = 0x478160u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x478164: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x478164u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x478168: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x478168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47816c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47816cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478170: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478174: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x478174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478178: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x47817c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x47817cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478180: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x478180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478184: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478188: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47818c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x47818cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x478190: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x478190u;
    {
        const bool branch_taken_0x478190 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x478194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478190u;
        // 0x478194: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478190) {
            ctx->pc = 0x478118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478118;
        }
    }
    ctx->pc = 0x478198u;
label_478198:
    // 0x478198: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x47819c: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x47819cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x4781a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4781a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4781a4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4781a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4781a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4781A8u;
    {
        const bool branch_taken_0x4781a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4781ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4781A8u;
        // 0x4781ac: 0x85c900a8  lh          $t1, 0xA8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4781a8) {
            ctx->pc = 0x4781B4u;
            goto label_4781b4;
        }
    }
    ctx->pc = 0x4781B0u;
    // 0x4781b0: 0x85c900aa  lh          $t1, 0xAA($t6)
    ctx->pc = 0x4781b0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 170)));
label_4781b4:
    // 0x4781b4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x4781b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x4781b8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4781b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4781bc: 0x1d80ffc2  bgtz        $t4, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4781BCu;
    {
        const bool branch_taken_0x4781bc = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x4781C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4781BCu;
        // 0x4781c0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4781bc) {
            ctx->pc = 0x4780C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4780c8;
        }
    }
    ctx->pc = 0x4781C4u;
label_4781c4:
    // 0x4781c4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4781c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4781c8:
    // 0x4781c8: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x4781C8u;
    {
        const bool branch_taken_0x4781c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4781CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4781C8u;
        // 0x4781cc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4781c8) {
            ctx->pc = 0x478320u;
            goto label_478320;
        }
    }
    ctx->pc = 0x4781D0u;
    // 0x4781d0: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x4781d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x4781d4: 0x8dc300b8  lw          $v1, 0xB8($t6)
    ctx->pc = 0x4781d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 184)));
    // 0x4781d8: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x4781d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x4781dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4781dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4781e0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4781e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4781e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4781e8: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x4781e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4781ec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4781ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4781f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4781F0u;
    {
        const bool branch_taken_0x4781f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4781F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4781F0u;
        // 0x4781f4: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4781f0) {
            ctx->pc = 0x478204u;
            goto label_478204;
        }
    }
    ctx->pc = 0x4781F8u;
    // 0x4781f8: 0x8dc200bc  lw          $v0, 0xBC($t6)
    ctx->pc = 0x4781f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 188)));
    // 0x4781fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4781fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478200: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x478200u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_478204:
    // 0x478204: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x478204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478208: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x478208u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47820c: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x47820cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478210: 0x19800042  blez        $t4, . + 4 + (0x42 << 2)
    ctx->pc = 0x478210u;
    {
        const bool branch_taken_0x478210 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478210u;
        // 0x478214: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478210) {
            ctx->pc = 0x47831Cu;
            goto label_47831c;
        }
    }
    ctx->pc = 0x478218u;
label_478218:
    // 0x478218: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x47821c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47821cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478220: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478220u;
    {
        const bool branch_taken_0x478220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478220u;
        // 0x478224: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478220) {
            ctx->pc = 0x478244u;
            goto label_478244;
        }
    }
    ctx->pc = 0x478228u;
    // 0x478228: 0x85c200c4  lh          $v0, 0xC4($t6)
    ctx->pc = 0x478228u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 196)));
    // 0x47822c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47822cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478230: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478230u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478234: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478238: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x478238u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47823c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47823Cu;
    {
        const bool branch_taken_0x47823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47823Cu;
        // 0x478240: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47823c) {
            ctx->pc = 0x478258u;
            goto label_478258;
        }
    }
    ctx->pc = 0x478244u;
label_478244:
    // 0x478244: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478244u;
    {
        const bool branch_taken_0x478244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478244u;
        // 0x478248: 0x8dc900b0  lw          $t1, 0xB0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478244) {
            ctx->pc = 0x478250u;
            goto label_478250;
        }
    }
    ctx->pc = 0x47824Cu;
    // 0x47824c: 0x8dc900b4  lw          $t1, 0xB4($t6)
    ctx->pc = 0x47824cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 180)));
label_478250:
    // 0x478250: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x478250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x478254: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x478254u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_478258:
    // 0x478258: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x478258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47825c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x47825Cu;
    {
        const bool branch_taken_0x47825c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47825Cu;
        // 0x478260: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47825c) {
            ctx->pc = 0x4782F0u;
            goto label_4782f0;
        }
    }
    ctx->pc = 0x478264u;
    // 0x478264: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x478264u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_478268:
    // 0x478268: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x478268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x47826c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x47826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478270: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478274: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478278: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x478278u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47827c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x47827cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478280: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x478280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478284: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x478284u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478288: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x478288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47828c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x47828cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x478290: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x478290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x478294: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x478294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478298: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x478298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x47829c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x47829cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4782a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4782a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4782a4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4782a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4782a8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4782a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4782ac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4782acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4782b0: 0x600013  mtlo        $v1
    ctx->pc = 0x4782b0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x4782b4: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x4782b4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4782b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4782b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4782bc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4782bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4782c0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4782c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4782c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4782c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4782c8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4782c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4782cc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4782ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4782d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4782d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4782d4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x4782d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x4782d8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4782d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4782dc: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x4782dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x4782e0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4782e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4782e4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4782e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4782e8: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x4782E8u;
    {
        const bool branch_taken_0x4782e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4782ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4782E8u;
        // 0x4782ec: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4782e8) {
            ctx->pc = 0x478268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478268;
        }
    }
    ctx->pc = 0x4782F0u;
label_4782f0:
    // 0x4782f0: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x4782f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x4782f4: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x4782f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x4782f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4782f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4782fc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4782fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478300: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478300u;
    {
        const bool branch_taken_0x478300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478300u;
        // 0x478304: 0x85c900c0  lh          $t1, 0xC0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478300) {
            ctx->pc = 0x47830Cu;
            goto label_47830c;
        }
    }
    ctx->pc = 0x478308u;
    // 0x478308: 0x85c900c2  lh          $t1, 0xC2($t6)
    ctx->pc = 0x478308u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 194)));
label_47830c:
    // 0x47830c: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x47830cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x478310: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x478310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478314: 0x1d80ffc0  bgtz        $t4, . + 4 + (-0x40 << 2)
    ctx->pc = 0x478314u;
    {
        const bool branch_taken_0x478314 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x478318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478314u;
        // 0x478318: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478314) {
            ctx->pc = 0x478218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478218;
        }
    }
    ctx->pc = 0x47831Cu;
label_47831c:
    // 0x47831c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x47831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_478320:
    // 0x478320: 0x108000b6  beqz        $a0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x478320u;
    {
        const bool branch_taken_0x478320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x478324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478320u;
        // 0x478324: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478320) {
            ctx->pc = 0x4785FCu;
            goto label_4785fc;
        }
    }
    ctx->pc = 0x478328u;
    // 0x478328: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x47832c: 0x8dc30118  lw          $v1, 0x118($t6)
    ctx->pc = 0x47832cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 280)));
    // 0x478330: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x478330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478338: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x47833c: 0x8e520018  lw          $s2, 0x18($s2)
    ctx->pc = 0x47833cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x478340: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478344u;
    {
        const bool branch_taken_0x478344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478344u;
        // 0x478348: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478344) {
            ctx->pc = 0x478358u;
            goto label_478358;
        }
    }
    ctx->pc = 0x47834Cu;
    // 0x47834c: 0x8dc2011c  lw          $v0, 0x11C($t6)
    ctx->pc = 0x47834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 284)));
    // 0x478350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478354: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x478354u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_478358:
    // 0x478358: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x478358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47835c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x47835cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478360: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478360u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478364: 0x198000a4  blez        $t4, . + 4 + (0xA4 << 2)
    ctx->pc = 0x478364u;
    {
        const bool branch_taken_0x478364 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478364u;
        // 0x478368: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478364) {
            ctx->pc = 0x4785F8u;
            goto label_4785f8;
        }
    }
    ctx->pc = 0x47836Cu;
    // 0x47836c: 0x0  nop
    ctx->pc = 0x47836cu;
    // NOP
label_478370:
    // 0x478370: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x478374: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x478374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478378: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478378u;
    {
        const bool branch_taken_0x478378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478378u;
        // 0x47837c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478378) {
            ctx->pc = 0x47839Cu;
            goto label_47839c;
        }
    }
    ctx->pc = 0x478380u;
    // 0x478380: 0x85c20124  lh          $v0, 0x124($t6)
    ctx->pc = 0x478380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 292)));
    // 0x478384: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x478384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478388: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478388u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47838c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47838cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478390: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x478390u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x478394u;
    {
        const bool branch_taken_0x478394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478394u;
        // 0x478398: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478394) {
            ctx->pc = 0x4783B0u;
            goto label_4783b0;
        }
    }
    ctx->pc = 0x47839Cu;
label_47839c:
    // 0x47839c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x47839Cu;
    {
        const bool branch_taken_0x47839c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4783A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47839Cu;
        // 0x4783a0: 0x8dc90110  lw          $t1, 0x110($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47839c) {
            ctx->pc = 0x4783A8u;
            goto label_4783a8;
        }
    }
    ctx->pc = 0x4783A4u;
    // 0x4783a4: 0x8dc90114  lw          $t1, 0x114($t6)
    ctx->pc = 0x4783a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 276)));
label_4783a8:
    // 0x4783a8: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x4783a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x4783ac: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x4783acu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_4783b0:
    // 0x4783b0: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x4783b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x4783b4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4783b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4783b8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x4783B8u;
    {
        const bool branch_taken_0x4783b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4783BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4783B8u;
        // 0x4783bc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4783b8) {
            ctx->pc = 0x47854Cu;
            goto label_47854c;
        }
    }
    ctx->pc = 0x4783C0u;
    // 0x4783c0: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x4783c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x4783c4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4783c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4783c8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x4783C8u;
    {
        const bool branch_taken_0x4783c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4783C8u;
        // 0x4783cc: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4783c8) {
            ctx->pc = 0x47848Cu;
            goto label_47848c;
        }
    }
    ctx->pc = 0x4783D0u;
    // 0x4783d0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x4783D0u;
    {
        const bool branch_taken_0x4783d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4783D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4783D0u;
        // 0x4783d4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4783d0) {
            ctx->pc = 0x4785CCu;
            goto label_4785cc;
        }
    }
    ctx->pc = 0x4783D8u;
    // 0x4783d8: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x4783d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x4783dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4783dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4783e0: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4783e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4783e4: 0x0  nop
    ctx->pc = 0x4783e4u;
    // NOP
label_4783e8:
    // 0x4783e8: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x4783e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x4783ec: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x4783ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x4783f0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4783f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4783f4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4783f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4783f8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4783f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4783fc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4783fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478400: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x478400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x478404: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478408: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x478408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47840c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47840cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478410: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x478410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x478414: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x478414u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478418: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x478418u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47841c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x47841cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478420: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478420u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478424: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x478424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x478428: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x478428u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47842c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x47842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x478430: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x478430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478438: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478438u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47843c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47843cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478440: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478440u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478444: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478444u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478448: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47844c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47844cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478450: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x478454: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x478454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478458: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478458u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47845c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47845cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478460: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x478460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478464: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478468: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47846c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47846cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478470: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478470u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478474: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478478: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47847c: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x47847Cu;
    {
        const bool branch_taken_0x47847c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x478480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47847Cu;
        // 0x478480: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47847c) {
            ctx->pc = 0x4783E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4783e8;
        }
    }
    ctx->pc = 0x478484u;
    // 0x478484: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x478484u;
    {
        const bool branch_taken_0x478484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478484u;
        // 0x478488: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478484) {
            ctx->pc = 0x4785D0u;
            goto label_4785d0;
        }
    }
    ctx->pc = 0x47848Cu;
label_47848c:
    // 0x47848c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x47848Cu;
    {
        const bool branch_taken_0x47848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47848Cu;
        // 0x478490: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47848c) {
            ctx->pc = 0x4785CCu;
            goto label_4785cc;
        }
    }
    ctx->pc = 0x478494u;
    // 0x478494: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x478494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x478498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x478498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x47849c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x47849cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4784a0:
    // 0x4784a0: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x4784a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x4784a4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x4784a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x4784a8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4784a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4784ac: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4784acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4784b0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4784b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4784b4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4784b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x4784b8: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x4784b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4784bc: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x4784bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x4784c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4784c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4784c4: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x4784c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x4784c8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x4784c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x4784cc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x4784ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4784d0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4784d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4784d4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4784d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4784d8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4784d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4784dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4784dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4784e0: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x4784e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4784e4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x4784e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4784e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4784e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4784ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4784ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4784f0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4784f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4784f4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4784f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4784f8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x4784f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4784fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4784fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478500: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478504: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478508: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47850c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47850cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478510: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478510u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478514: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478518: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x478518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47851c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47851cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478520: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x478524: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x478524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478528: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478528u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47852c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47852cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478530: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478530u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x478534: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478534u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478538: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478538u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47853c: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x47853Cu;
    {
        const bool branch_taken_0x47853c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x478540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47853Cu;
        // 0x478540: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47853c) {
            ctx->pc = 0x4784A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4784a0;
        }
    }
    ctx->pc = 0x478544u;
    // 0x478544: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x478544u;
    {
        const bool branch_taken_0x478544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478544u;
        // 0x478548: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478544) {
            ctx->pc = 0x4785D0u;
            goto label_4785d0;
        }
    }
    ctx->pc = 0x47854Cu;
label_47854c:
    // 0x47854c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x47854cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x478550: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x478550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x478554: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x478554u;
    {
        const bool branch_taken_0x478554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478554u;
        // 0x478558: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478554) {
            ctx->pc = 0x478594u;
            goto label_478594;
        }
    }
    ctx->pc = 0x47855Cu;
    // 0x47855c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x47855Cu;
    {
        const bool branch_taken_0x47855c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47855Cu;
        // 0x478560: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47855c) {
            ctx->pc = 0x4785CCu;
            goto label_4785cc;
        }
    }
    ctx->pc = 0x478564u;
    // 0x478564: 0x0  nop
    ctx->pc = 0x478564u;
    // NOP
label_478568:
    // 0x478568: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478568u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47856c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47856cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478570: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478574: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478574u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478578: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478578u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47857c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47857cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478580: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478580u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x478584: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x478584u;
    {
        const bool branch_taken_0x478584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478584u;
        // 0x478588: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478584) {
            ctx->pc = 0x478568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478568;
        }
    }
    ctx->pc = 0x47858Cu;
    // 0x47858c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x47858Cu;
    {
        const bool branch_taken_0x47858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47858Cu;
        // 0x478590: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47858c) {
            ctx->pc = 0x4785D0u;
            goto label_4785d0;
        }
    }
    ctx->pc = 0x478594u;
label_478594:
    // 0x478594: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x478594u;
    {
        const bool branch_taken_0x478594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478594u;
        // 0x478598: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478594) {
            ctx->pc = 0x4785CCu;
            goto label_4785cc;
        }
    }
    ctx->pc = 0x47859Cu;
    // 0x47859c: 0x0  nop
    ctx->pc = 0x47859cu;
    // NOP
label_4785a0:
    // 0x4785a0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4785a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4785a4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4785a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4785a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4785a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4785ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4785acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4785b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4785b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4785b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4785b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4785b8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4785b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4785bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4785bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4785c0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4785c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4785c4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4785C4u;
    {
        const bool branch_taken_0x4785c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4785C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4785C4u;
        // 0x4785c8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4785c4) {
            ctx->pc = 0x4785A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4785a0;
        }
    }
    ctx->pc = 0x4785CCu;
label_4785cc:
    // 0x4785cc: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x4785ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4785d0:
    // 0x4785d0: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x4785d0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x4785d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4785d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4785d8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4785d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4785dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4785DCu;
    {
        const bool branch_taken_0x4785dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4785E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4785DCu;
        // 0x4785e0: 0x85c90120  lh          $t1, 0x120($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4785dc) {
            ctx->pc = 0x4785E8u;
            goto label_4785e8;
        }
    }
    ctx->pc = 0x4785E4u;
    // 0x4785e4: 0x85c90122  lh          $t1, 0x122($t6)
    ctx->pc = 0x4785e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 290)));
label_4785e8:
    // 0x4785e8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x4785e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x4785ec: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4785ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4785f0: 0x1d80ff5f  bgtz        $t4, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x4785F0u;
    {
        const bool branch_taken_0x4785f0 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x4785F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4785F0u;
        // 0x4785f4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4785f0) {
            ctx->pc = 0x478370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478370;
        }
    }
    ctx->pc = 0x4785F8u;
label_4785f8:
    // 0x4785f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4785f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4785fc:
    // 0x4785fc: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x4785fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x478600: 0xadc20024  sw          $v0, 0x24($t6)
    ctx->pc = 0x478600u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 2));
    // 0x478604: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x478604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x478608: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x478608u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x47860c: 0xadc30028  sw          $v1, 0x28($t6)
    ctx->pc = 0x47860cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 3));
    // 0x478610: 0x8f240018  lw          $a0, 0x18($t9)
    ctx->pc = 0x478610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478614: 0xadc4002c  sw          $a0, 0x2C($t6)
    ctx->pc = 0x478614u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 4));
    // 0x478618: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x47861c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x47861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478620: 0x544000f5  bnel        $v0, $zero, . + 4 + (0xF5 << 2)
    ctx->pc = 0x478620u;
    {
        const bool branch_taken_0x478620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478620) {
            ctx->pc = 0x478624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478620u;
            // 0x478624: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4789F8u;
            goto label_4789f8;
        }
    }
    ctx->pc = 0x478628u;
    // 0x478628: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x478628u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47862c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x47862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x478630: 0x8f24005c  lw          $a0, 0x5C($t9)
    ctx->pc = 0x478630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x478634: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x478634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x478638: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x478638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47863c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x47863cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x478640: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x478640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x478644: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x478644u;
    {
        const bool branch_taken_0x478644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478644u;
        // 0x478648: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478644) {
            ctx->pc = 0x47875Cu;
            goto label_47875c;
        }
    }
    ctx->pc = 0x47864Cu;
    // 0x47864c: 0x8dc201ac  lw          $v0, 0x1AC($t6)
    ctx->pc = 0x47864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 428)));
    // 0x478650: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x478650u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478654: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x478654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478658: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x478658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47865c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x47865cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478660: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x478660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x478664: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x478664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478668: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478668u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47866c: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47866cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x478670: 0x19800039  blez        $t4, . + 4 + (0x39 << 2)
    ctx->pc = 0x478670u;
    {
        const bool branch_taken_0x478670 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478670u;
        // 0x478674: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478670) {
            ctx->pc = 0x478758u;
            goto label_478758;
        }
    }
    ctx->pc = 0x478678u;
label_478678:
    // 0x478678: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x47867c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x47867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478680: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x478680u;
    {
        const bool branch_taken_0x478680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478680) {
            ctx->pc = 0x478684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478680u;
            // 0x478684: 0x8dc901a4  lw          $t1, 0x1A4($t6) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4786A4u;
            goto label_4786a4;
        }
    }
    ctx->pc = 0x478688u;
    // 0x478688: 0x85c201b4  lh          $v0, 0x1B4($t6)
    ctx->pc = 0x478688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 436)));
    // 0x47868c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x47868cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478690: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478690u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478694: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478698: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x478698u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x47869c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x47869Cu;
    {
        const bool branch_taken_0x47869c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4786A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47869Cu;
        // 0x4786a0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47869c) {
            ctx->pc = 0x4786ACu;
            goto label_4786ac;
        }
    }
    ctx->pc = 0x4786A4u;
label_4786a4:
    // 0x4786a4: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x4786a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x4786a8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x4786a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_4786ac:
    // 0x4786ac: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4786acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4786b0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4786B0u;
    {
        const bool branch_taken_0x4786b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4786B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4786B0u;
        // 0x4786b4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4786b0) {
            ctx->pc = 0x478740u;
            goto label_478740;
        }
    }
    ctx->pc = 0x4786B8u;
    // 0x4786b8: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4786b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4786bc: 0x0  nop
    ctx->pc = 0x4786bcu;
    // NOP
label_4786c0:
    // 0x4786c0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x4786c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x4786c4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x4786c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x4786c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4786c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4786cc: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x4786ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x4786d0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x4786d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4786d4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4786d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4786d8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x4786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x4786dc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4786dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x4786e0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4786e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4786e4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x4786e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x4786e8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x4786e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x4786ec: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4786ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4786f0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4786f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4786f4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x4786f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4786f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4786f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4786fc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4786fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478700: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x478700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x478704: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x478704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x478708: 0x600013  mtlo        $v1
    ctx->pc = 0x478708u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x47870c: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x47870cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x478710: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x478710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478714: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478718: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x47871c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x47871cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478720: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478724: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478728: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x478728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47872c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x47872cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478730: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478730u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478734: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x478738: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x478738u;
    {
        const bool branch_taken_0x478738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x47873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478738u;
        // 0x47873c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478738) {
            ctx->pc = 0x4786C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4786c0;
        }
    }
    ctx->pc = 0x478740u;
label_478740:
    // 0x478740: 0x85c201b2  lh          $v0, 0x1B2($t6)
    ctx->pc = 0x478740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 434)));
    // 0x478744: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x478744u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x478748: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x47874c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x47874cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478750: 0x1d80ffc9  bgtz        $t4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x478750u;
    {
        const bool branch_taken_0x478750 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x478754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478750u;
        // 0x478754: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478750) {
            ctx->pc = 0x478678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478678;
        }
    }
    ctx->pc = 0x478758u;
label_478758:
    // 0x478758: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x478758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_47875c:
    // 0x47875c: 0x508000a6  beql        $a0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x47875Cu;
    {
        const bool branch_taken_0x47875c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47875c) {
            ctx->pc = 0x478760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47875Cu;
            // 0x478760: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4789F8u;
            goto label_4789f8;
        }
    }
    ctx->pc = 0x478764u;
    // 0x478764: 0x8dc201c4  lw          $v0, 0x1C4($t6)
    ctx->pc = 0x478764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 452)));
    // 0x478768: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x478768u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47876c: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x47876cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478770: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x478770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478774: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478778: 0x8e520018  lw          $s2, 0x18($s2)
    ctx->pc = 0x478778u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x47877c: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x47877cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478780: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478780u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478784: 0x1980009b  blez        $t4, . + 4 + (0x9B << 2)
    ctx->pc = 0x478784u;
    {
        const bool branch_taken_0x478784 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478784u;
        // 0x478788: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478784) {
            ctx->pc = 0x4789F4u;
            goto label_4789f4;
        }
    }
    ctx->pc = 0x47878Cu;
    // 0x47878c: 0x0  nop
    ctx->pc = 0x47878cu;
    // NOP
label_478790:
    // 0x478790: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x478794: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x478794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478798: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x478798u;
    {
        const bool branch_taken_0x478798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478798) {
            ctx->pc = 0x47879Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478798u;
            // 0x47879c: 0x8dc901bc  lw          $t1, 0x1BC($t6) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4787BCu;
            goto label_4787bc;
        }
    }
    ctx->pc = 0x4787A0u;
    // 0x4787a0: 0x85c201cc  lh          $v0, 0x1CC($t6)
    ctx->pc = 0x4787a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 460)));
    // 0x4787a4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x4787a4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4787a8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4787a8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4787ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4787acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4787b0: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4787b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4787b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4787B4u;
    {
        const bool branch_taken_0x4787b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4787B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4787B4u;
        // 0x4787b8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4787b4) {
            ctx->pc = 0x4787C4u;
            goto label_4787c4;
        }
    }
    ctx->pc = 0x4787BCu;
label_4787bc:
    // 0x4787bc: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x4787bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x4787c0: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x4787c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_4787c4:
    // 0x4787c4: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x4787c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x4787c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4787c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x4787cc: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x4787CCu;
    {
        const bool branch_taken_0x4787cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4787D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4787CCu;
        // 0x4787d0: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4787cc) {
            ctx->pc = 0x47895Cu;
            goto label_47895c;
        }
    }
    ctx->pc = 0x4787D4u;
    // 0x4787d4: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x4787d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x4787d8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4787d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4787dc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4787DCu;
    {
        const bool branch_taken_0x4787dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4787E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4787DCu;
        // 0x4787e0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4787dc) {
            ctx->pc = 0x47889Cu;
            goto label_47889c;
        }
    }
    ctx->pc = 0x4787E4u;
    // 0x4787e4: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x4787E4u;
    {
        const bool branch_taken_0x4787e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4787E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4787E4u;
        // 0x4787e8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4787e4) {
            ctx->pc = 0x4789DCu;
            goto label_4789dc;
        }
    }
    ctx->pc = 0x4787ECu;
    // 0x4787ec: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x4787ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x4787f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4787f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4787f4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4787f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4787f8:
    // 0x4787f8: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x4787f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x4787fc: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x4787fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478800: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x478800u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478804: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x478804u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478808: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x478808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x47880c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x47880cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478810: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x478810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x478814: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478818: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x478818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x47881c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x47881cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478820: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x478820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x478824: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x478824u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478828: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x478828u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x47882c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x47882cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478830: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478830u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478834: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x478834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x478838: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x478838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x47883c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x47883cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x478840: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x478840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478848: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47884c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47884cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478850: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478850u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478854: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478858: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47885c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47885cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478860: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x478864: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x478864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478868: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478868u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47886c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47886cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478870: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x478870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478874: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478878: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47887c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47887cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478880: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478880u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478884: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478888: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47888c: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x47888Cu;
    {
        const bool branch_taken_0x47888c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x478890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47888Cu;
        // 0x478890: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47888c) {
            ctx->pc = 0x4787F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4787f8;
        }
    }
    ctx->pc = 0x478894u;
    // 0x478894: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x478894u;
    {
        const bool branch_taken_0x478894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478894u;
        // 0x478898: 0x85c201ca  lh          $v0, 0x1CA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 458)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478894) {
            ctx->pc = 0x4789E0u;
            goto label_4789e0;
        }
    }
    ctx->pc = 0x47889Cu;
label_47889c:
    // 0x47889c: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x47889Cu;
    {
        const bool branch_taken_0x47889c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4788A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47889Cu;
        // 0x4788a0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47889c) {
            ctx->pc = 0x4789DCu;
            goto label_4789dc;
        }
    }
    ctx->pc = 0x4788A4u;
    // 0x4788a4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x4788a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x4788a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4788a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4788ac: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x4788acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4788b0:
    // 0x4788b0: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x4788b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x4788b4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x4788b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x4788b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4788b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4788bc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x4788bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x4788c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4788c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4788c4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x4788c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x4788c8: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x4788c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x4788cc: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x4788ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x4788d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4788d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4788d4: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x4788d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x4788d8: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x4788d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x4788dc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x4788dcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4788e0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4788e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4788e4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4788e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4788e8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4788e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4788ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4788ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4788f0: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x4788f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4788f4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x4788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4788f8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4788f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4788fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4788fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478900: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x478904: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x478904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478908: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478908u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47890c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47890cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478910: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478914: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x478914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478918: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478918u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x47891c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x47891cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478920: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478920u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x478924: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478928: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x478928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x47892c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x47892cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x478930: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x478930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x478934: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x478934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x478938: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x478938u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x47893c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47893cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478940: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478940u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x478944: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478948: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x47894c: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x47894Cu;
    {
        const bool branch_taken_0x47894c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x478950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47894Cu;
        // 0x478950: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47894c) {
            ctx->pc = 0x4788B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4788b0;
        }
    }
    ctx->pc = 0x478954u;
    // 0x478954: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x478954u;
    {
        const bool branch_taken_0x478954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478954u;
        // 0x478958: 0x85c201ca  lh          $v0, 0x1CA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 458)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478954) {
            ctx->pc = 0x4789E0u;
            goto label_4789e0;
        }
    }
    ctx->pc = 0x47895Cu;
label_47895c:
    // 0x47895c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x47895cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x478960: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x478960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x478964: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x478964u;
    {
        const bool branch_taken_0x478964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478964u;
        // 0x478968: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478964) {
            ctx->pc = 0x4789A4u;
            goto label_4789a4;
        }
    }
    ctx->pc = 0x47896Cu;
    // 0x47896c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x47896Cu;
    {
        const bool branch_taken_0x47896c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47896Cu;
        // 0x478970: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47896c) {
            ctx->pc = 0x4789DCu;
            goto label_4789dc;
        }
    }
    ctx->pc = 0x478974u;
    // 0x478974: 0x0  nop
    ctx->pc = 0x478974u;
    // NOP
label_478978:
    // 0x478978: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478978u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47897c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x47897cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478980: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x478980u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478984: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478988: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478988u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x47898c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x47898cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x478990: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x478990u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x478994: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x478994u;
    {
        const bool branch_taken_0x478994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478994u;
        // 0x478998: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478994) {
            ctx->pc = 0x478978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478978;
        }
    }
    ctx->pc = 0x47899Cu;
    // 0x47899c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x47899Cu;
    {
        const bool branch_taken_0x47899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4789A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47899Cu;
        // 0x4789a0: 0x85c201ca  lh          $v0, 0x1CA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 458)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47899c) {
            ctx->pc = 0x4789E0u;
            goto label_4789e0;
        }
    }
    ctx->pc = 0x4789A4u;
label_4789a4:
    // 0x4789a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4789A4u;
    {
        const bool branch_taken_0x4789a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4789A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4789A4u;
        // 0x4789a8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4789a4) {
            ctx->pc = 0x4789DCu;
            goto label_4789dc;
        }
    }
    ctx->pc = 0x4789ACu;
    // 0x4789ac: 0x0  nop
    ctx->pc = 0x4789acu;
    // NOP
label_4789b0:
    // 0x4789b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4789b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4789b4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4789b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4789b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4789b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4789bc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4789bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4789c0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4789c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4789c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4789c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4789c8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4789c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4789cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4789ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4789d0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x4789d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4789d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4789D4u;
    {
        const bool branch_taken_0x4789d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4789D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4789D4u;
        // 0x4789d8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4789d4) {
            ctx->pc = 0x4789B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4789b0;
        }
    }
    ctx->pc = 0x4789DCu;
label_4789dc:
    // 0x4789dc: 0x85c201ca  lh          $v0, 0x1CA($t6)
    ctx->pc = 0x4789dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 458)));
label_4789e0:
    // 0x4789e0: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x4789e0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x4789e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4789e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4789e8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4789e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4789ec: 0x1d80ff68  bgtz        $t4, . + 4 + (-0x98 << 2)
    ctx->pc = 0x4789ECu;
    {
        const bool branch_taken_0x4789ec = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x4789F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4789ECu;
        // 0x4789f0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4789ec) {
            ctx->pc = 0x478790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478790;
        }
    }
    ctx->pc = 0x4789F4u;
label_4789f4:
    // 0x4789f4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x4789f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_4789f8:
    // 0x4789f8: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x4789f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x4789fc: 0x504000bf  beql        $v0, $zero, . + 4 + (0xBF << 2)
    ctx->pc = 0x4789FCu;
    {
        const bool branch_taken_0x4789fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4789fc) {
            ctx->pc = 0x478A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4789FCu;
            // 0x478a00: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478CFCu;
            goto label_478cfc;
        }
    }
    ctx->pc = 0x478A04u;
    // 0x478a04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x478a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x478a08: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x478a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x478a0c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x478a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x478a10: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x478A10u;
    {
        const bool branch_taken_0x478a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478A10u;
        // 0x478a14: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a10) {
            ctx->pc = 0x478B64u;
            goto label_478b64;
        }
    }
    ctx->pc = 0x478A18u;
    // 0x478a18: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x478A18u;
    {
        const bool branch_taken_0x478a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478a18) {
            ctx->pc = 0x478A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478A18u;
            // 0x478a1c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478B68u;
            goto label_478b68;
        }
    }
    ctx->pc = 0x478A20u;
    // 0x478a20: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x478a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x478a24: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x478a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x478a28: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x478A28u;
    {
        const bool branch_taken_0x478a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478a28) {
            ctx->pc = 0x478A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478A28u;
            // 0x478a2c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478B68u;
            goto label_478b68;
        }
    }
    ctx->pc = 0x478A30u;
    // 0x478a30: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478a34: 0x8dc300d0  lw          $v1, 0xD0($t6)
    ctx->pc = 0x478a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 208)));
    // 0x478a38: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x478a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x478a44: 0x8f2f0034  lw          $t7, 0x34($t9)
    ctx->pc = 0x478a44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x478a48: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478a4c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478A4Cu;
    {
        const bool branch_taken_0x478a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478A4Cu;
        // 0x478a50: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a4c) {
            ctx->pc = 0x478A60u;
            goto label_478a60;
        }
    }
    ctx->pc = 0x478A54u;
    // 0x478a54: 0x8dc200d4  lw          $v0, 0xD4($t6)
    ctx->pc = 0x478a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 212)));
    // 0x478a58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478a5c: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x478a5cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_478a60:
    // 0x478a60: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x478a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a64: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x478a64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a68: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478a68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a6c: 0x1980003d  blez        $t4, . + 4 + (0x3D << 2)
    ctx->pc = 0x478A6Cu;
    {
        const bool branch_taken_0x478a6c = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478A6Cu;
        // 0x478a70: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a6c) {
            ctx->pc = 0x478B64u;
            goto label_478b64;
        }
    }
    ctx->pc = 0x478A74u;
    // 0x478a74: 0x0  nop
    ctx->pc = 0x478a74u;
    // NOP
label_478a78:
    // 0x478a78: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x478a7c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x478a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478a80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478A80u;
    {
        const bool branch_taken_0x478a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478A80u;
        // 0x478a84: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a80) {
            ctx->pc = 0x478AA4u;
            goto label_478aa4;
        }
    }
    ctx->pc = 0x478A88u;
    // 0x478a88: 0x85c200dc  lh          $v0, 0xDC($t6)
    ctx->pc = 0x478a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 220)));
    // 0x478a8c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x478a8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a90: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478a90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478a94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478a98: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x478a98u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478a9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x478A9Cu;
    {
        const bool branch_taken_0x478a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478A9Cu;
        // 0x478aa0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478a9c) {
            ctx->pc = 0x478AB8u;
            goto label_478ab8;
        }
    }
    ctx->pc = 0x478AA4u;
label_478aa4:
    // 0x478aa4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478AA4u;
    {
        const bool branch_taken_0x478aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478AA4u;
        // 0x478aa8: 0x8dc900c8  lw          $t1, 0xC8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478aa4) {
            ctx->pc = 0x478AB0u;
            goto label_478ab0;
        }
    }
    ctx->pc = 0x478AACu;
    // 0x478aac: 0x8dc900cc  lw          $t1, 0xCC($t6)
    ctx->pc = 0x478aacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 204)));
label_478ab0:
    // 0x478ab0: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x478ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x478ab4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x478ab4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_478ab8:
    // 0x478ab8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x478ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478abc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x478ABCu;
    {
        const bool branch_taken_0x478abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478ABCu;
        // 0x478ac0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478abc) {
            ctx->pc = 0x478B38u;
            goto label_478b38;
        }
    }
    ctx->pc = 0x478AC4u;
    // 0x478ac4: 0x0  nop
    ctx->pc = 0x478ac4u;
    // NOP
label_478ac8:
    // 0x478ac8: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x478ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x478acc: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x478accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478ad0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478ad4: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478ad8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x478ad8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x478adc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x478adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478ae0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x478ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478ae4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x478ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478ae8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x478ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x478aec: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x478aecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x478af0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x478af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x478af4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x478af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478af8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x478af8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478afc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x478afcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478b00: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478b00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478b04: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x478b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x478b08: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x478b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x478b0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x478b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x478b10: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x478b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x478b14: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x478b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478b18: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478b1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478b20: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x478b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478b24: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478b28: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478b2c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x478b30: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x478B30u;
    {
        const bool branch_taken_0x478b30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x478B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478B30u;
        // 0x478b34: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b30) {
            ctx->pc = 0x478AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478ac8;
        }
    }
    ctx->pc = 0x478B38u;
label_478b38:
    // 0x478b38: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478b3c: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x478b3cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x478b40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478b44: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478b48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478B48u;
    {
        const bool branch_taken_0x478b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478B48u;
        // 0x478b4c: 0x85c900d8  lh          $t1, 0xD8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b48) {
            ctx->pc = 0x478B54u;
            goto label_478b54;
        }
    }
    ctx->pc = 0x478B50u;
    // 0x478b50: 0x85c900da  lh          $t1, 0xDA($t6)
    ctx->pc = 0x478b50u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 218)));
label_478b54:
    // 0x478b54: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x478b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x478b58: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x478b58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478b5c: 0x1d80ffc6  bgtz        $t4, . + 4 + (-0x3A << 2)
    ctx->pc = 0x478B5Cu;
    {
        const bool branch_taken_0x478b5c = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x478B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478B5Cu;
        // 0x478b60: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b5c) {
            ctx->pc = 0x478A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478a78;
        }
    }
    ctx->pc = 0x478B64u;
label_478b64:
    // 0x478b64: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x478b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_478b68:
    // 0x478b68: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x478b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x478b6c: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x478B6Cu;
    {
        const bool branch_taken_0x478b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478b6c) {
            ctx->pc = 0x478B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478B6Cu;
            // 0x478b70: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478CFCu;
            goto label_478cfc;
        }
    }
    ctx->pc = 0x478B74u;
    // 0x478b74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x478b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x478b78: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x478b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x478b7c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x478b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x478b80: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x478B80u;
    {
        const bool branch_taken_0x478b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478B80u;
        // 0x478b84: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b80) {
            ctx->pc = 0x478CF8u;
            goto label_478cf8;
        }
    }
    ctx->pc = 0x478B88u;
    // 0x478b88: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x478B88u;
    {
        const bool branch_taken_0x478b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478b88) {
            ctx->pc = 0x478B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478B88u;
            // 0x478b8c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478CFCu;
            goto label_478cfc;
        }
    }
    ctx->pc = 0x478B90u;
    // 0x478b90: 0x8f230008  lw          $v1, 0x8($t9)
    ctx->pc = 0x478b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x478b94: 0x30620084  andi        $v0, $v1, 0x84
    ctx->pc = 0x478b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)132);
    // 0x478b98: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x478B98u;
    {
        const bool branch_taken_0x478b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478B98u;
        // 0x478b9c: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478b98) {
            ctx->pc = 0x478CF8u;
            goto label_478cf8;
        }
    }
    ctx->pc = 0x478BA0u;
    // 0x478ba0: 0x8f320034  lw          $s2, 0x34($t9)
    ctx->pc = 0x478ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x478ba4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478BA4u;
    {
        const bool branch_taken_0x478ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478BA4u;
        // 0x478ba8: 0x240782d  daddu       $t7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478ba4) {
            ctx->pc = 0x478BB0u;
            goto label_478bb0;
        }
    }
    ctx->pc = 0x478BACu;
    // 0x478bac: 0x8f2f0038  lw          $t7, 0x38($t9)
    ctx->pc = 0x478bacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_478bb0:
    // 0x478bb0: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478bb4: 0x8dc300e8  lw          $v1, 0xE8($t6)
    ctx->pc = 0x478bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 232)));
    // 0x478bb8: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x478bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478bbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478bc0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x478bc4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478bc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478BC8u;
    {
        const bool branch_taken_0x478bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478BC8u;
        // 0x478bcc: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478bc8) {
            ctx->pc = 0x478BDCu;
            goto label_478bdc;
        }
    }
    ctx->pc = 0x478BD0u;
    // 0x478bd0: 0x8dc200ec  lw          $v0, 0xEC($t6)
    ctx->pc = 0x478bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 236)));
    // 0x478bd4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478bd8: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x478bd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_478bdc:
    // 0x478bdc: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x478bdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478be0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x478be0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478be4: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478be4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478be8: 0x19800043  blez        $t4, . + 4 + (0x43 << 2)
    ctx->pc = 0x478BE8u;
    {
        const bool branch_taken_0x478be8 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478BE8u;
        // 0x478bec: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478be8) {
            ctx->pc = 0x478CF8u;
            goto label_478cf8;
        }
    }
    ctx->pc = 0x478BF0u;
label_478bf0:
    // 0x478bf0: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x478bf4: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x478bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478bf8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478BF8u;
    {
        const bool branch_taken_0x478bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478BF8u;
        // 0x478bfc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478bf8) {
            ctx->pc = 0x478C1Cu;
            goto label_478c1c;
        }
    }
    ctx->pc = 0x478C00u;
    // 0x478c00: 0x85c200f4  lh          $v0, 0xF4($t6)
    ctx->pc = 0x478c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 244)));
    // 0x478c04: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x478c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478c08: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478c08u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478c0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478c10: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x478c10u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x478C14u;
    {
        const bool branch_taken_0x478c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478C14u;
        // 0x478c18: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478c14) {
            ctx->pc = 0x478C30u;
            goto label_478c30;
        }
    }
    ctx->pc = 0x478C1Cu;
label_478c1c:
    // 0x478c1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478C1Cu;
    {
        const bool branch_taken_0x478c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478C1Cu;
        // 0x478c20: 0x8dc900e0  lw          $t1, 0xE0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478c1c) {
            ctx->pc = 0x478C28u;
            goto label_478c28;
        }
    }
    ctx->pc = 0x478C24u;
    // 0x478c24: 0x8dc900e4  lw          $t1, 0xE4($t6)
    ctx->pc = 0x478c24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 228)));
label_478c28:
    // 0x478c28: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x478c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x478c2c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x478c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_478c30:
    // 0x478c30: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x478c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478c34: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x478C34u;
    {
        const bool branch_taken_0x478c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478C34u;
        // 0x478c38: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478c34) {
            ctx->pc = 0x478CCCu;
            goto label_478ccc;
        }
    }
    ctx->pc = 0x478C3Cu;
    // 0x478c3c: 0x0  nop
    ctx->pc = 0x478c3cu;
    // NOP
label_478c40:
    // 0x478c40: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x478c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x478c44: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x478c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478c48: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478c48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478c4c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x478c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478c50: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x478c50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x478c54: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x478c54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478c58: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x478c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478c5c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x478c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478c60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x478c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x478c64: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x478c64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x478c68: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x478c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x478c6c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x478c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478c70: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x478c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478c74: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x478c74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478c78: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478c78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478c7c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x478c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x478c80: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x478c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x478c84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x478c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x478c88: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x478c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x478c8c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x478c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478c90: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478c94: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478c98: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478c9c: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x478c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x478ca0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478ca4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478ca8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x478ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478cac: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478cb0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478cb4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x478cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x478cb8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x478cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x478cbc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x478cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x478cc0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x478cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x478cc4: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x478CC4u;
    {
        const bool branch_taken_0x478cc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x478CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478CC4u;
        // 0x478cc8: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478cc4) {
            ctx->pc = 0x478C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478c40;
        }
    }
    ctx->pc = 0x478CCCu;
label_478ccc:
    // 0x478ccc: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478cd0: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x478cd0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x478cd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478cd8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478cdc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478CDCu;
    {
        const bool branch_taken_0x478cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478CDCu;
        // 0x478ce0: 0x85c900f0  lh          $t1, 0xF0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478cdc) {
            ctx->pc = 0x478CE8u;
            goto label_478ce8;
        }
    }
    ctx->pc = 0x478CE4u;
    // 0x478ce4: 0x85c900f2  lh          $t1, 0xF2($t6)
    ctx->pc = 0x478ce4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 242)));
label_478ce8:
    // 0x478ce8: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x478ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x478cec: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x478cecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x478cf0: 0x1d80ffbf  bgtz        $t4, . + 4 + (-0x41 << 2)
    ctx->pc = 0x478CF0u;
    {
        const bool branch_taken_0x478cf0 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x478CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478CF0u;
        // 0x478cf4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478cf0) {
            ctx->pc = 0x478BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478bf0;
        }
    }
    ctx->pc = 0x478CF8u;
label_478cf8:
    // 0x478cf8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x478cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_478cfc:
    // 0x478cfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x478cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x478d00: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x478D00u;
    {
        const bool branch_taken_0x478d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478d00) {
            ctx->pc = 0x478D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478D00u;
            // 0x478d04: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478EACu;
            goto label_478eac;
        }
    }
    ctx->pc = 0x478D08u;
    // 0x478d08: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x478d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x478d0c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x478d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x478d10: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x478d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x478d14: 0x10600064  beqz        $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x478D14u;
    {
        const bool branch_taken_0x478d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x478D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D14u;
        // 0x478d18: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d14) {
            ctx->pc = 0x478EA8u;
            goto label_478ea8;
        }
    }
    ctx->pc = 0x478D1Cu;
    // 0x478d1c: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x478D1Cu;
    {
        const bool branch_taken_0x478d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x478d1c) {
            ctx->pc = 0x478D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478D1Cu;
            // 0x478d20: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478EACu;
            goto label_478eac;
        }
    }
    ctx->pc = 0x478D24u;
    // 0x478d24: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x478d28: 0x8dc30100  lw          $v1, 0x100($t6)
    ctx->pc = 0x478d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 256)));
    // 0x478d2c: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x478d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x478d30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x478d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x478d38: 0x8f310030  lw          $s1, 0x30($t9)
    ctx->pc = 0x478d38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x478d3c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478d3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478d40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478D40u;
    {
        const bool branch_taken_0x478d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D40u;
        // 0x478d44: 0xa37821  addu        $t7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d40) {
            ctx->pc = 0x478D54u;
            goto label_478d54;
        }
    }
    ctx->pc = 0x478D48u;
    // 0x478d48: 0x8dc20104  lw          $v0, 0x104($t6)
    ctx->pc = 0x478d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 260)));
    // 0x478d4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478d50: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x478d50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_478d54:
    // 0x478d54: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x478d54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d58: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x478d58u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d5c: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x478d5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d60: 0x19800051  blez        $t4, . + 4 + (0x51 << 2)
    ctx->pc = 0x478D60u;
    {
        const bool branch_taken_0x478d60 = (GPR_S32(ctx, 12) <= 0);
        ctx->pc = 0x478D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D60u;
        // 0x478d64: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d60) {
            ctx->pc = 0x478EA8u;
            goto label_478ea8;
        }
    }
    ctx->pc = 0x478D68u;
label_478d68:
    // 0x478d68: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x478d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x478d6c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x478d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x478d70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x478D70u;
    {
        const bool branch_taken_0x478d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D70u;
        // 0x478d74: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d70) {
            ctx->pc = 0x478D94u;
            goto label_478d94;
        }
    }
    ctx->pc = 0x478D78u;
    // 0x478d78: 0x85c2010c  lh          $v0, 0x10C($t6)
    ctx->pc = 0x478d78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 268)));
    // 0x478d7c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x478d7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d80: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x478d80u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478d84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x478d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x478d88: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x478d88u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x478d8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x478D8Cu;
    {
        const bool branch_taken_0x478d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D8Cu;
        // 0x478d90: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d8c) {
            ctx->pc = 0x478DA8u;
            goto label_478da8;
        }
    }
    ctx->pc = 0x478D94u;
label_478d94:
    // 0x478d94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478D94u;
    {
        const bool branch_taken_0x478d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478D94u;
        // 0x478d98: 0x8dc900f8  lw          $t1, 0xF8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478d94) {
            ctx->pc = 0x478DA0u;
            goto label_478da0;
        }
    }
    ctx->pc = 0x478D9Cu;
    // 0x478d9c: 0x8dc900fc  lw          $t1, 0xFC($t6)
    ctx->pc = 0x478d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 252)));
label_478da0:
    // 0x478da0: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x478da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x478da4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x478da4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_478da8:
    // 0x478da8: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x478da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x478dac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x478dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x478db0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x478DB0u;
    {
        const bool branch_taken_0x478db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478DB0u;
        // 0x478db4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478db0) {
            ctx->pc = 0x478E50u;
            goto label_478e50;
        }
    }
    ctx->pc = 0x478DB8u;
    // 0x478db8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x478DB8u;
    {
        const bool branch_taken_0x478db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478DB8u;
        // 0x478dbc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478db8) {
            ctx->pc = 0x478E7Cu;
            goto label_478e7c;
        }
    }
    ctx->pc = 0x478DC0u;
label_478dc0:
    // 0x478dc0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x478dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x478dc4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x478dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x478dc8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478dcc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x478dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x478dd0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x478dd0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x478dd4: 0x2cd4021  addu        $t0, $s6, $t5
    ctx->pc = 0x478dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x478dd8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x478dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x478ddc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x478ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x478de0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x478de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x478de4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x478de4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x478de8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x478de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x478dec: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x478decu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x478df0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x478df0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478df4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x478df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478df8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x478df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x478dfc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x478dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x478e00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x478e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x478e04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x478e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x478e08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x478e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x478e0c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x478e0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x478e10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x478e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478e14: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x478e14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x478e18: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x478e18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x478e1c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x478e1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x478e20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x478e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x478e24: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x478e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x478e28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x478e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x478e2c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x478e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x478e30: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x478e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x478e34: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x478e34u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x478e38: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x478e38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x478e3c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x478e3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x478e40: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x478E40u;
    {
        const bool branch_taken_0x478e40 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x478E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478E40u;
        // 0x478e44: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e40) {
            ctx->pc = 0x478DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478dc0;
        }
    }
    ctx->pc = 0x478E48u;
    // 0x478e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x478E48u;
    {
        const bool branch_taken_0x478e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478E48u;
        // 0x478e4c: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e48) {
            ctx->pc = 0x478E80u;
            goto label_478e80;
        }
    }
    ctx->pc = 0x478E50u;
label_478e50:
    // 0x478e50: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x478E50u;
    {
        const bool branch_taken_0x478e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478E50u;
        // 0x478e54: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e50) {
            ctx->pc = 0x478E7Cu;
            goto label_478e7c;
        }
    }
    ctx->pc = 0x478E58u;
    // 0x478e58: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x478e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x478e5c: 0x0  nop
    ctx->pc = 0x478e5cu;
    // NOP
label_478e60:
    // 0x478e60: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x478e60u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x478e64: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x478e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478e68: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x478e68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x478e6c: 0x0  nop
    ctx->pc = 0x478e6cu;
    // NOP
    // 0x478e70: 0x0  nop
    ctx->pc = 0x478e70u;
    // NOP
    // 0x478e74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x478E74u;
    {
        const bool branch_taken_0x478e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478E74u;
        // 0x478e78: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e74) {
            ctx->pc = 0x478E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478e60;
        }
    }
    ctx->pc = 0x478E7Cu;
label_478e7c:
    // 0x478e7c: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x478e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_478e80:
    // 0x478e80: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x478e80u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x478e84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x478e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478e88: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x478e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x478e8c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478E8Cu;
    {
        const bool branch_taken_0x478e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x478E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478E8Cu;
        // 0x478e90: 0x85c90108  lh          $t1, 0x108($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478e8c) {
            ctx->pc = 0x478E98u;
            goto label_478e98;
        }
    }
    ctx->pc = 0x478E94u;
    // 0x478e94: 0x85c9010a  lh          $t1, 0x10A($t6)
    ctx->pc = 0x478e94u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 266)));
label_478e98:
    // 0x478e98: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x478e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x478e9c: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x478e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x478ea0: 0x1d80ffb1  bgtz        $t4, . + 4 + (-0x4F << 2)
    ctx->pc = 0x478EA0u;
    {
        const bool branch_taken_0x478ea0 = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x478EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478EA0u;
        // 0x478ea4: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478ea0) {
            ctx->pc = 0x478D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_478d68;
        }
    }
    ctx->pc = 0x478EA8u;
label_478ea8:
    // 0x478ea8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x478ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_478eac:
    // 0x478eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x478eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x478eb0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x478eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x478eb4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x478eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x478eb8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x478eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x478ebc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x478ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x478ec0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x478ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x478ec4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x478ec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x478ec8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x478ec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478ecc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x478eccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x478ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478ED0u;
        // 0x478ed4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478ED8u;
    // 0x478ed8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x478ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478edc: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x478edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x478ee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x478ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478ee4: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x478ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x478ee8: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x478ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x478eec: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x478eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x478ef0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x478ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x478ef4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x478ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x478ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x478EF8u;
    {
        const bool branch_taken_0x478ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x478EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478EF8u;
        // 0x478efc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478ef8) {
            ctx->pc = 0x478F10u;
            goto label_478f10;
        }
    }
    ctx->pc = 0x478F00u;
    // 0x478f00: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x478f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x478f04: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x478f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x478f08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x478f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x478f0c: 0x0  nop
    ctx->pc = 0x478f0cu;
    // NOP
label_478f10:
    // 0x478f10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x478f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x478f14: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x478F14u;
    {
        const bool branch_taken_0x478f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x478f14) {
            ctx->pc = 0x478F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478F14u;
            // 0x478f18: 0x8cc70034  lw          $a3, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478F2Cu;
            goto label_478f2c;
        }
    }
    ctx->pc = 0x478F1Cu;
    // 0x478f1c: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x478f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x478f20: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x478f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x478f24: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x478f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x478f28: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x478f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_478f2c:
    // 0x478f2c: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x478f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x478f30: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x478F30u;
    {
        const bool branch_taken_0x478f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x478f30) {
            ctx->pc = 0x478F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x478F30u;
            // 0x478f34: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x478F40u;
            goto label_478f40;
        }
    }
    ctx->pc = 0x478F38u;
    // 0x478f38: 0x3e00008  jr          $ra
    ctx->pc = 0x478F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478F38u;
        // 0x478f3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478F40u;
label_478f40:
    // 0x478f40: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x478f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x478f44: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x478f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x478f48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x478f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478f4c: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x478f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x478f50: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x478f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x478f54: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x478F54u;
    {
        const bool branch_taken_0x478f54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x478F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478F54u;
        // 0x478f58: 0x34e20008  ori         $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x478f54) {
            ctx->pc = 0x478F60u;
            goto label_478f60;
        }
    }
    ctx->pc = 0x478F5Cu;
    // 0x478f5c: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x478f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_478f60:
    // 0x478f60: 0x3e00008  jr          $ra
    ctx->pc = 0x478F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478F60u;
        // 0x478f64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478F68u;
}
