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

// Function: sub_0028A570
// Address: 0x28a570 - 0x28aa18
void sub_0028A570_0x28a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A570_0x28a570");
#endif

    switch (ctx->pc) {
        case 0x28a5b4u: goto label_28a5b4;
        case 0x28a5c4u: goto label_28a5c4;
        case 0x28a5d0u: goto label_28a5d0;
        case 0x28a5e0u: goto label_28a5e0;
        case 0x28a5ecu: goto label_28a5ec;
        case 0x28a5f4u: goto label_28a5f4;
        case 0x28a654u: goto label_28a654;
        case 0x28a65cu: goto label_28a65c;
        case 0x28a678u: goto label_28a678;
        case 0x28a684u: goto label_28a684;
        case 0x28a694u: goto label_28a694;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a700u: goto label_28a700;
        case 0x28a738u: goto label_28a738;
        case 0x28a774u: goto label_28a774;
        case 0x28a7b8u: goto label_28a7b8;
        case 0x28a7f0u: goto label_28a7f0;
        case 0x28a800u: goto label_28a800;
        case 0x28a820u: goto label_28a820;
        case 0x28a828u: goto label_28a828;
        case 0x28a838u: goto label_28a838;
        case 0x28a858u: goto label_28a858;
        case 0x28a8dcu: goto label_28a8dc;
        case 0x28a8ecu: goto label_28a8ec;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9e4u: goto label_28a9e4;
        default: break;
    }

    ctx->pc = 0x28a570u;

    // 0x28a570: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28a570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28a574: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x28a574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x28a578: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28a578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a57c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x28a57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x28a580: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x28a580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x28a584: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28a584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a588: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x28a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x28a58c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x28a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x28a590: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a594: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x28a598: 0x3c11006f  lui         $s1, 0x6F
    ctx->pc = 0x28a598u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
    // 0x28a59c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x28a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x28a5a0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x28a5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x28a5a4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x28a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x28a5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28a5ac: 0xc0a3e7a  jal         func_28F9E8
    ctx->pc = 0x28A5ACu;
    SET_GPR_U32(ctx, 31, 0x28A5B4u);
    ctx->pc = 0x28A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5ACu;
    // 0x28a5b0: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F9E8u, 0x28A5ACu, 0x28A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5B4u;
label_28a5b4:
    // 0x28a5b4: 0xa240000a  sb          $zero, 0xA($s2)
    ctx->pc = 0x28a5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5bc: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x28A5BCu;
    SET_GPR_U32(ctx, 31, 0x28A5C4u);
    ctx->pc = 0x28A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5BCu;
    // 0x28a5c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x28A5BCu, 0x28A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5C4u;
label_28a5c4:
    // 0x28a5c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5c8: 0xc0a3398  jal         func_28CE60
    ctx->pc = 0x28A5C8u;
    SET_GPR_U32(ctx, 31, 0x28A5D0u);
    ctx->pc = 0x28A5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5C8u;
    // 0x28a5cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CE60u, 0x28A5C8u, 0x28A5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5D0u;
label_28a5d0:
    // 0x28a5d0: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x28a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x28a5d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d8: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x28A5D8u;
    SET_GPR_U32(ctx, 31, 0x28A5E0u);
    ctx->pc = 0x28A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5D8u;
    // 0x28a5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x28A5D8u, 0x28A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5E0u;
label_28a5e0:
    // 0x28a5e0: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x28a5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x28a5e4: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x28A5E4u;
    SET_GPR_U32(ctx, 31, 0x28A5ECu);
    ctx->pc = 0x28A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5E4u;
    // 0x28a5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x28A5E4u, 0x28A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5ECu;
label_28a5ec:
    // 0x28a5ec: 0xc0a78ac  jal         func_29E2B0
    ctx->pc = 0x28A5ECu;
    SET_GPR_U32(ctx, 31, 0x28A5F4u);
    ctx->pc = 0x28A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5ECu;
    // 0x28a5f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2B0u, 0x28A5ECu, 0x28A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5F4u;
label_28a5f4:
    // 0x28a5f4: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x28a5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x28a5f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28a5f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a5fc: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x28a5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
    // 0x28a600: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x28a600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
    // 0x28a604: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28a604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28a608: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x28a60c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28a60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28a610: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x28a610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x28a614: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28a614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28a618: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x28a61c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28a61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28a620: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x28a620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x28a624: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a628: 0xae40020c  sw          $zero, 0x20C($s2)
    ctx->pc = 0x28a628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 0));
    // 0x28a62c: 0xa6500210  sh          $s0, 0x210($s2)
    ctx->pc = 0x28a62cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 528), (uint16_t)GPR_U32(ctx, 16));
    // 0x28a630: 0xa2500212  sb          $s0, 0x212($s2)
    ctx->pc = 0x28a630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 530), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a634: 0xa2500268  sb          $s0, 0x268($s2)
    ctx->pc = 0x28a634u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 616), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a638: 0xe6410218  swc1        $f1, 0x218($s2)
    ctx->pc = 0x28a638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 536), bits); }
    // 0x28a63c: 0xe642012c  swc1        $f2, 0x12C($s2)
    ctx->pc = 0x28a63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x28a640: 0xe6430130  swc1        $f3, 0x130($s2)
    ctx->pc = 0x28a640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x28a644: 0xe6440134  swc1        $f4, 0x134($s2)
    ctx->pc = 0x28a644u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 308), bits); }
    // 0x28a648: 0xe6450138  swc1        $f5, 0x138($s2)
    ctx->pc = 0x28a648u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 312), bits); }
    // 0x28a64c: 0xc0a5198  jal         func_294660
    ctx->pc = 0x28A64Cu;
    SET_GPR_U32(ctx, 31, 0x28A654u);
    ctx->pc = 0x28A650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A64Cu;
    // 0x28a650: 0xe6400214  swc1        $f0, 0x214($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 532), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294660u, 0x28A64Cu, 0x28A654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A654u;
label_28a654:
    // 0x28a654: 0xc0a51a0  jal         func_294680
    ctx->pc = 0x28A654u;
    SET_GPR_U32(ctx, 31, 0x28A65Cu);
    ctx->pc = 0x28A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A654u;
    // 0x28a658: 0xe640013c  swc1        $f0, 0x13C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 316), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294680u, 0x28A654u, 0x28A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A65Cu;
label_28a65c:
    // 0x28a65c: 0x240207d0  addiu       $v0, $zero, 0x7D0
    ctx->pc = 0x28a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x28a660: 0xa6400148  sh          $zero, 0x148($s2)
    ctx->pc = 0x28a660u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x28a664: 0xe6400140  swc1        $f0, 0x140($s2)
    ctx->pc = 0x28a664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 320), bits); }
    // 0x28a668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a66c: 0xae420144  sw          $v0, 0x144($s2)
    ctx->pc = 0x28a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 2));
    // 0x28a670: 0xc0a4476  jal         func_2911D8
    ctx->pc = 0x28A670u;
    SET_GPR_U32(ctx, 31, 0x28A678u);
    ctx->pc = 0x28A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A670u;
    // 0x28a674: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D8u, 0x28A670u, 0x28A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A678u;
label_28a678:
    // 0x28a678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a67c: 0xc0a4478  jal         func_2911E0
    ctx->pc = 0x28A67Cu;
    SET_GPR_U32(ctx, 31, 0x28A684u);
    ctx->pc = 0x28A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A67Cu;
    // 0x28a680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E0u, 0x28A67Cu, 0x28A684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A684u;
label_28a684:
    // 0x28a684: 0xae400110  sw          $zero, 0x110($s2)
    ctx->pc = 0x28a684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 0));
    // 0x28a688: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a68c: 0xc0a2ab0  jal         func_28AAC0
    ctx->pc = 0x28A68Cu;
    SET_GPR_U32(ctx, 31, 0x28A694u);
    ctx->pc = 0x28A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A68Cu;
    // 0x28a690: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AAC0u, 0x28A68Cu, 0x28A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A694u;
label_28a694:
    // 0x28a694: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x28a698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28a698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28a69c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a6a0: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x28a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x28a6a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a6a8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28a6a8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x28a6ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6b0: 0xa246014d  sb          $a2, 0x14D($s2)
    ctx->pc = 0x28a6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 333), (uint8_t)GPR_U32(ctx, 6));
    // 0x28a6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6b8: 0x7e430090  sq          $v1, 0x90($s2)
    ctx->pc = 0x28a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 144), GPR_VEC(ctx, 3));
    // 0x28a6bc: 0xa246011e  sb          $a2, 0x11E($s2)
    ctx->pc = 0x28a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 286), (uint8_t)GPR_U32(ctx, 6));
    // 0x28a6c0: 0xa24602d3  sb          $a2, 0x2D3($s2)
    ctx->pc = 0x28a6c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 723), (uint8_t)GPR_U32(ctx, 6));
    // 0x28a6c4: 0xa246011f  sb          $a2, 0x11F($s2)
    ctx->pc = 0x28a6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 287), (uint8_t)GPR_U32(ctx, 6));
    // 0x28a6c8: 0xa2460120  sb          $a2, 0x120($s2)
    ctx->pc = 0x28a6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 288), (uint8_t)GPR_U32(ctx, 6));
    // 0x28a6cc: 0xe640009c  swc1        $f0, 0x9C($s2)
    ctx->pc = 0x28a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 156), bits); }
    // 0x28a6d0: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x28a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
    // 0x28a6d4: 0xa240011c  sb          $zero, 0x11C($s2)
    ctx->pc = 0x28a6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a6d8: 0xa240011d  sb          $zero, 0x11D($s2)
    ctx->pc = 0x28a6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a6dc: 0xae400284  sw          $zero, 0x284($s2)
    ctx->pc = 0x28a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 644), GPR_U32(ctx, 0));
    // 0x28a6e0: 0x8e22bd30  lw          $v0, -0x42D0($s1)
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
    // 0x28a6e4: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x28a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
    // 0x28a6e8: 0x8e23bd30  lw          $v1, -0x42D0($s1)
    ctx->pc = 0x28a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950192)));
    // 0x28a6ec: 0xc0a3ba2  jal         func_28EE88
    ctx->pc = 0x28A6ECu;
    SET_GPR_U32(ctx, 31, 0x28A6F4u);
    ctx->pc = 0x28A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6ECu;
    // 0x28a6f0: 0xae430128  sw          $v1, 0x128($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE88u, 0x28A6ECu, 0x28A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6F4u;
label_28a6f4:
    // 0x28a6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6f8: 0xc0a3bc0  jal         func_28EF00
    ctx->pc = 0x28A6F8u;
    SET_GPR_U32(ctx, 31, 0x28A700u);
    ctx->pc = 0x28A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6F8u;
    // 0x28a6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF00u, 0x28A6F8u, 0x28A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A700u;
label_28a700:
    // 0x28a700: 0xa250002d  sb          $s0, 0x2D($s2)
    ctx->pc = 0x28a700u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 45), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a704: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x28a704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x28a708: 0xa250002c  sb          $s0, 0x2C($s2)
    ctx->pc = 0x28a708u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a70c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x28a70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28a710: 0xa240002f  sb          $zero, 0x2F($s2)
    ctx->pc = 0x28a710u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a714: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28a714u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a718: 0xa240002e  sb          $zero, 0x2E($s2)
    ctx->pc = 0x28a718u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a71c: 0x26460150  addiu       $a2, $s2, 0x150
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x28a720: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x28a720u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x28a724: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x28a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28a728: 0xae450154  sw          $a1, 0x154($s2)
    ctx->pc = 0x28a728u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 5));
    // 0x28a72c: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x28a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x28a730: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x28a730u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x28a734: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x28a734u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_28a738:
    // 0x28a738: 0xa0c0fffe  sb          $zero, -0x2($a2)
    ctx->pc = 0x28a738u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294967294), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a73c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28a73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x28a740: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x28a740u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a744: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x28a744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x28a748: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28A748u;
    {
        const bool branch_taken_0x28a748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A748u;
        // 0x28a74c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a748) {
            ctx->pc = 0x28A738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a738;
        }
    }
    ctx->pc = 0x28A750u;
    // 0x28a750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a754: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x28a754u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x28a758: 0xae400160  sw          $zero, 0x160($s2)
    ctx->pc = 0x28a758u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
    // 0x28a75c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a760: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x28a760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x28a764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a768: 0xa242014c  sb          $v0, 0x14C($s2)
    ctx->pc = 0x28a768u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 332), (uint8_t)GPR_U32(ctx, 2));
    // 0x28a76c: 0xc0a438c  jal         func_290E30
    ctx->pc = 0x28A76Cu;
    SET_GPR_U32(ctx, 31, 0x28A774u);
    ctx->pc = 0x28A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A76Cu;
    // 0x28a770: 0x26710090  addiu       $s1, $s3, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290E30u, 0x28A76Cu, 0x28A774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A774u;
label_28a774:
    // 0x28a774: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x28a774u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x28a778: 0xae4001ec  sw          $zero, 0x1EC($s2)
    ctx->pc = 0x28a778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 0));
    // 0x28a77c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x28a77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x28a780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a784: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a784u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a788: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x28a788u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28a78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a790: 0x26530164  addiu       $s3, $s2, 0x164
    ctx->pc = 0x28a790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    // 0x28a794: 0x26540298  addiu       $s4, $s2, 0x298
    ctx->pc = 0x28a794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 664));
    // 0x28a798: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x28a798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x28a79c: 0x265500a0  addiu       $s5, $s2, 0xA0
    ctx->pc = 0x28a79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x28a7a0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28a7a4: 0x265600e0  addiu       $s6, $s2, 0xE0
    ctx->pc = 0x28a7a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x28a7a8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x28a7a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28a7ac: 0x265700f8  addiu       $s7, $s2, 0xF8
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 248));
    // 0x28a7b0: 0xc0a3050  jal         func_28C140
    ctx->pc = 0x28A7B0u;
    SET_GPR_U32(ctx, 31, 0x28A7B8u);
    ctx->pc = 0x28A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7B0u;
    // 0x28a7b4: 0x7e420230  sq          $v0, 0x230($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 560), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x28A7B0u, 0x28A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7B8u;
label_28a7b8:
    // 0x28a7b8: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x28a7b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x28a7bc: 0x26430250  addiu       $v1, $s2, 0x250
    ctx->pc = 0x28a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x28a7c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x28a7cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28a7d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a7d4: 0xe6400250  swc1        $f0, 0x250($s2)
    ctx->pc = 0x28a7d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 592), bits); }
    // 0x28a7d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x28a7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a7dc: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x28a7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28a7e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a7e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28a7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28a7e8: 0xc0a3032  jal         func_28C0C8
    ctx->pc = 0x28A7E8u;
    SET_GPR_U32(ctx, 31, 0x28A7F0u);
    ctx->pc = 0x28A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7E8u;
    // 0x28a7ec: 0xae40025c  sw          $zero, 0x25C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 604), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x28A7E8u, 0x28A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7F0u;
label_28a7f0:
    // 0x28a7f0: 0x264401a4  addiu       $a0, $s2, 0x1A4
    ctx->pc = 0x28a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 420));
    // 0x28a7f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7f8: 0x264301f0  addiu       $v1, $s2, 0x1F0
    ctx->pc = 0x28a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 496));
    // 0x28a7fc: 0x0  nop
    ctx->pc = 0x28a7fcu;
    // NOP
label_28a800:
    // 0x28a800: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28a800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x28a804: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28a804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28a808: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x28a808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a80c: 0x0  nop
    ctx->pc = 0x28a80cu;
    // NOP
    // 0x28a810: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28A810u;
    {
        const bool branch_taken_0x28a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A810u;
        // 0x28a814: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a810) {
            ctx->pc = 0x28A800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a800;
        }
    }
    ctx->pc = 0x28A818u;
    // 0x28a818: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x28A818u;
    SET_GPR_U32(ctx, 31, 0x28A820u);
    ctx->pc = 0x28A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A818u;
    // 0x28a81c: 0xae400200  sw          $zero, 0x200($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 512), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28A818u, 0x28A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A820u;
label_28a820:
    // 0x28a820: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x28A820u;
    SET_GPR_U32(ctx, 31, 0x28A828u);
    ctx->pc = 0x28A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A820u;
    // 0x28a824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28A820u, 0x28A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A828u;
label_28a828:
    // 0x28a828: 0xa2400152  sb          $zero, 0x152($s2)
    ctx->pc = 0x28a828u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 338), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a82c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a830: 0xc0a36e2  jal         func_28DB88
    ctx->pc = 0x28A830u;
    SET_GPR_U32(ctx, 31, 0x28A838u);
    ctx->pc = 0x28A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A830u;
    // 0x28a834: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB88u, 0x28A830u, 0x28A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A838u;
label_28a838:
    // 0x28a838: 0xae4002e0  sw          $zero, 0x2E0($s2)
    ctx->pc = 0x28a838u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 736), GPR_U32(ctx, 0));
    // 0x28a83c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28a83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a840: 0xa24002e5  sb          $zero, 0x2E5($s2)
    ctx->pc = 0x28a840u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 741), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a848: 0xae4002dc  sw          $zero, 0x2DC($s2)
    ctx->pc = 0x28a848u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
    // 0x28a84c: 0xa24002e4  sb          $zero, 0x2E4($s2)
    ctx->pc = 0x28a84cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 740), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a850: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x28a850u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
    // 0x28a854: 0x0  nop
    ctx->pc = 0x28a854u;
    // NOP
label_28a858:
    // 0x28a858: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x28a858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x28a85c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28a85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28a860: 0x2c82002d  sltiu       $v0, $a0, 0x2D
    ctx->pc = 0x28a860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x28a864: 0x0  nop
    ctx->pc = 0x28a864u;
    // NOP
    // 0x28a868: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28A868u;
    {
        const bool branch_taken_0x28a868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A868u;
        // 0x28a86c: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a868) {
            ctx->pc = 0x28A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a858;
        }
    }
    ctx->pc = 0x28A870u;
    // 0x28a870: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x28a870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a874: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28a874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28a878: 0xae42021c  sw          $v0, 0x21C($s2)
    ctx->pc = 0x28a878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 540), GPR_U32(ctx, 2));
    // 0x28a87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a880: 0xae400204  sw          $zero, 0x204($s2)
    ctx->pc = 0x28a880u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 516), GPR_U32(ctx, 0));
    // 0x28a884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a888: 0xae40026c  sw          $zero, 0x26C($s2)
    ctx->pc = 0x28a888u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 620), GPR_U32(ctx, 0));
    // 0x28a88c: 0xae500220  sw          $s0, 0x220($s2)
    ctx->pc = 0x28a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 16));
    // 0x28a890: 0xae500224  sw          $s0, 0x224($s2)
    ctx->pc = 0x28a890u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 548), GPR_U32(ctx, 16));
    // 0x28a894: 0xa2400228  sb          $zero, 0x228($s2)
    ctx->pc = 0x28a894u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 552), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a898: 0xae400270  sw          $zero, 0x270($s2)
    ctx->pc = 0x28a898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
    // 0x28a89c: 0xa2500265  sb          $s0, 0x265($s2)
    ctx->pc = 0x28a89cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 613), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a8a0: 0xa2500266  sb          $s0, 0x266($s2)
    ctx->pc = 0x28a8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 614), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a8a4: 0xa2500267  sb          $s0, 0x267($s2)
    ctx->pc = 0x28a8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 615), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a8a8: 0xa240028f  sb          $zero, 0x28F($s2)
    ctx->pc = 0x28a8a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 655), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8ac: 0xa240028d  sb          $zero, 0x28D($s2)
    ctx->pc = 0x28a8acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8b0: 0xa250028e  sb          $s0, 0x28E($s2)
    ctx->pc = 0x28a8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 654), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a8b4: 0xa2400290  sb          $zero, 0x290($s2)
    ctx->pc = 0x28a8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 656), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8b8: 0x8fc2bd30  lw          $v0, -0x42D0($fp)
    ctx->pc = 0x28a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    // 0x28a8bc: 0xae400288  sw          $zero, 0x288($s2)
    ctx->pc = 0x28a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 648), GPR_U32(ctx, 0));
    // 0x28a8c0: 0xae500274  sw          $s0, 0x274($s2)
    ctx->pc = 0x28a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 628), GPR_U32(ctx, 16));
    // 0x28a8c4: 0xae40027c  sw          $zero, 0x27C($s2)
    ctx->pc = 0x28a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 636), GPR_U32(ctx, 0));
    // 0x28a8c8: 0xa2400280  sb          $zero, 0x280($s2)
    ctx->pc = 0x28a8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 640), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8cc: 0xa240028c  sb          $zero, 0x28C($s2)
    ctx->pc = 0x28a8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8d0: 0xae400208  sw          $zero, 0x208($s2)
    ctx->pc = 0x28a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 0));
    // 0x28a8d4: 0xc0a482e  jal         func_2920B8
    ctx->pc = 0x28A8D4u;
    SET_GPR_U32(ctx, 31, 0x28A8DCu);
    ctx->pc = 0x28A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8D4u;
    // 0x28a8d8: 0xae420294  sw          $v0, 0x294($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 660), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920B8u, 0x28A8D4u, 0x28A8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8DCu;
label_28a8dc:
    // 0x28a8dc: 0xa24002d0  sb          $zero, 0x2D0($s2)
    ctx->pc = 0x28a8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 720), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a8e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28a8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a8e4: 0xc0a484c  jal         func_292130
    ctx->pc = 0x28A8E4u;
    SET_GPR_U32(ctx, 31, 0x28A8ECu);
    ctx->pc = 0x28A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A8E4u;
    // 0x28a8e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292130u, 0x28A8E4u, 0x28A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A8ECu;
label_28a8ec:
    // 0x28a8ec: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28a8f0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x28a8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28a8f4: 0xa24202d2  sb          $v0, 0x2D2($s2)
    ctx->pc = 0x28a8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 722), (uint8_t)GPR_U32(ctx, 2));
    // 0x28a8f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28a8fc: 0xa25002d1  sb          $s0, 0x2D1($s2)
    ctx->pc = 0x28a8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 721), (uint8_t)GPR_U32(ctx, 16));
    // 0x28a900: 0xa24002d6  sb          $zero, 0x2D6($s2)
    ctx->pc = 0x28a900u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 726), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a904: 0xa2400121  sb          $zero, 0x121($s2)
    ctx->pc = 0x28a904u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 289), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a908: 0xa24002d7  sb          $zero, 0x2D7($s2)
    ctx->pc = 0x28a908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 727), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a90c: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28A90Cu;
    {
        const bool branch_taken_0x28a90c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x28A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A90Cu;
        // 0x28a910: 0xa24002d8  sb          $zero, 0x2D8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 728), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a90c) {
            ctx->pc = 0x28A938u;
            goto label_28a938;
        }
    }
    ctx->pc = 0x28A914u;
    // 0x28a914: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x28a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x28a918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a91c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x28a91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x28a920: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28a920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28a924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28a924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a928: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x28a928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x28a92c: 0xe641012c  swc1        $f1, 0x12C($s2)
    ctx->pc = 0x28a92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x28a930: 0xa2400265  sb          $zero, 0x265($s2)
    ctx->pc = 0x28a930u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 613), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a934: 0xae500270  sw          $s0, 0x270($s2)
    ctx->pc = 0x28a934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 16));
label_28a938:
    // 0x28a938: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28a938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28a93c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28a940: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28A940u;
    {
        const bool branch_taken_0x28a940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28a940) {
            ctx->pc = 0x28A944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A940u;
            // 0x28a944: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A960u;
            goto label_28a960;
        }
    }
    ctx->pc = 0x28A948u;
    // 0x28a948: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x28a948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x28a94c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28a94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28a950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a954: 0x0  nop
    ctx->pc = 0x28a954u;
    // NOP
    // 0x28a958: 0xe640012c  swc1        $f0, 0x12C($s2)
    ctx->pc = 0x28a958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
    // 0x28a95c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28a960:
    // 0x28a960: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28A960u;
    {
        const bool branch_taken_0x28a960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x28a960) {
            ctx->pc = 0x28A964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A960u;
            // 0x28a964: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A984u;
            goto label_28a984;
        }
    }
    ctx->pc = 0x28A968u;
    // 0x28a968: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a96c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x28a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x28a970: 0xa642027a  sh          $v0, 0x27A($s2)
    ctx->pc = 0x28a970u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 634), (uint16_t)GPR_U32(ctx, 2));
    // 0x28a974: 0xae430144  sw          $v1, 0x144($s2)
    ctx->pc = 0x28a974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 3));
    // 0x28a978: 0xa2400265  sb          $zero, 0x265($s2)
    ctx->pc = 0x28a978u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 613), (uint8_t)GPR_U32(ctx, 0));
    // 0x28a97c: 0xa6400278  sh          $zero, 0x278($s2)
    ctx->pc = 0x28a97cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 632), (uint16_t)GPR_U32(ctx, 0));
    // 0x28a980: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_28a984:
    // 0x28a984: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28a984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28a988: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28A988u;
    {
        const bool branch_taken_0x28a988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A988u;
        // 0x28a98c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a988) {
            ctx->pc = 0x28A9B8u;
            goto label_28a9b8;
        }
    }
    ctx->pc = 0x28A990u;
    // 0x28a990: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x28a990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x28a994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28a994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a998: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28a998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28a99c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x28a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x28a9a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28a9a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28a9a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28a9a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a9a8: 0x2442bf98  addiu       $v0, $v0, -0x4068
    ctx->pc = 0x28a9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950808));
    // 0x28a9ac: 0xe6400130  swc1        $f0, 0x130($s2)
    ctx->pc = 0x28a9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 304), bits); }
    // 0x28a9b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28A9B0u;
    {
        const bool branch_taken_0x28a9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9B0u;
        // 0x28a9b4: 0xe641012c  swc1        $f1, 0x12C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 300), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9b0) {
            ctx->pc = 0x28A9BCu;
            goto label_28a9bc;
        }
    }
    ctx->pc = 0x28A9B8u;
label_28a9b8:
    // 0x28a9b8: 0x2442bf60  addiu       $v0, $v0, -0x40A0
    ctx->pc = 0x28a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950752));
label_28a9bc:
    // 0x28a9bc: 0xae42015c  sw          $v0, 0x15C($s2)
    ctx->pc = 0x28a9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 2));
    // 0x28a9c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9c4: 0xc0a229e  jal         func_288A78
    ctx->pc = 0x28A9C4u;
    SET_GPR_U32(ctx, 31, 0x28A9CCu);
    ctx->pc = 0x28A9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9C4u;
    // 0x28a9c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288A78u, 0x28A9C4u, 0x28A9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9CCu;
label_28a9cc:
    // 0x28a9cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9d0: 0xc0a68e2  jal         func_29A388
    ctx->pc = 0x28A9D0u;
    SET_GPR_U32(ctx, 31, 0x28A9D8u);
    ctx->pc = 0x28A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9D0u;
    // 0x28a9d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A388u, 0x28A9D0u, 0x28A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9D8u;
label_28a9d8:
    // 0x28a9d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a9dc: 0xc0a5a42  jal         func_296908
    ctx->pc = 0x28A9DCu;
    SET_GPR_U32(ctx, 31, 0x28A9E4u);
    ctx->pc = 0x28A9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A9DCu;
    // 0x28a9e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296908u, 0x28A9DCu, 0x28A9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A9E4u;
label_28a9e4:
    // 0x28a9e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x28a9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28a9e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x28a9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28a9ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x28a9ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28a9f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x28a9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a9f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28a9f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a9f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x28a9f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a9fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x28a9fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28aa00: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x28aa00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28aa04: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x28aa04u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28aa08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28aa08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA0Cu;
        // 0x28aa10: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA14u;
    // 0x28aa14: 0x0  nop
    ctx->pc = 0x28aa14u;
    // NOP
    ctx->pc = 0x28aa18u;
}
