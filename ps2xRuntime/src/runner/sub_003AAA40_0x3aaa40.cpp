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

// Function: sub_003AAA40
// Address: 0x3aaa40 - 0x3aad68
void sub_003AAA40_0x3aaa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA40_0x3aaa40");
#endif

    switch (ctx->pc) {
        case 0x3aaa40u: goto label_3aaa40;
        case 0x3aaa44u: goto label_3aaa44;
        case 0x3aaa48u: goto label_3aaa48;
        case 0x3aaa4cu: goto label_3aaa4c;
        case 0x3aaa50u: goto label_3aaa50;
        case 0x3aaa54u: goto label_3aaa54;
        case 0x3aaa58u: goto label_3aaa58;
        case 0x3aaa5cu: goto label_3aaa5c;
        case 0x3aaa60u: goto label_3aaa60;
        case 0x3aaa64u: goto label_3aaa64;
        case 0x3aaa68u: goto label_3aaa68;
        case 0x3aaa6cu: goto label_3aaa6c;
        case 0x3aaa70u: goto label_3aaa70;
        case 0x3aaa74u: goto label_3aaa74;
        case 0x3aaa78u: goto label_3aaa78;
        case 0x3aaa7cu: goto label_3aaa7c;
        case 0x3aaa80u: goto label_3aaa80;
        case 0x3aaa84u: goto label_3aaa84;
        case 0x3aaa88u: goto label_3aaa88;
        case 0x3aaa8cu: goto label_3aaa8c;
        case 0x3aaa90u: goto label_3aaa90;
        case 0x3aaa94u: goto label_3aaa94;
        case 0x3aaa98u: goto label_3aaa98;
        case 0x3aaa9cu: goto label_3aaa9c;
        case 0x3aaaa0u: goto label_3aaaa0;
        case 0x3aaaa4u: goto label_3aaaa4;
        case 0x3aaaa8u: goto label_3aaaa8;
        case 0x3aaaacu: goto label_3aaaac;
        case 0x3aaab0u: goto label_3aaab0;
        case 0x3aaab4u: goto label_3aaab4;
        case 0x3aaab8u: goto label_3aaab8;
        case 0x3aaabcu: goto label_3aaabc;
        case 0x3aaac0u: goto label_3aaac0;
        case 0x3aaac4u: goto label_3aaac4;
        case 0x3aaac8u: goto label_3aaac8;
        case 0x3aaaccu: goto label_3aaacc;
        case 0x3aaad0u: goto label_3aaad0;
        case 0x3aaad4u: goto label_3aaad4;
        case 0x3aaad8u: goto label_3aaad8;
        case 0x3aaadcu: goto label_3aaadc;
        case 0x3aaae0u: goto label_3aaae0;
        case 0x3aaae4u: goto label_3aaae4;
        case 0x3aaae8u: goto label_3aaae8;
        case 0x3aaaecu: goto label_3aaaec;
        case 0x3aaaf0u: goto label_3aaaf0;
        case 0x3aaaf4u: goto label_3aaaf4;
        case 0x3aaaf8u: goto label_3aaaf8;
        case 0x3aaafcu: goto label_3aaafc;
        case 0x3aab00u: goto label_3aab00;
        case 0x3aab04u: goto label_3aab04;
        case 0x3aab08u: goto label_3aab08;
        case 0x3aab0cu: goto label_3aab0c;
        case 0x3aab10u: goto label_3aab10;
        case 0x3aab14u: goto label_3aab14;
        case 0x3aab18u: goto label_3aab18;
        case 0x3aab1cu: goto label_3aab1c;
        case 0x3aab20u: goto label_3aab20;
        case 0x3aab24u: goto label_3aab24;
        case 0x3aab28u: goto label_3aab28;
        case 0x3aab2cu: goto label_3aab2c;
        case 0x3aab30u: goto label_3aab30;
        case 0x3aab34u: goto label_3aab34;
        case 0x3aab38u: goto label_3aab38;
        case 0x3aab3cu: goto label_3aab3c;
        case 0x3aab40u: goto label_3aab40;
        case 0x3aab44u: goto label_3aab44;
        case 0x3aab48u: goto label_3aab48;
        case 0x3aab4cu: goto label_3aab4c;
        case 0x3aab50u: goto label_3aab50;
        case 0x3aab54u: goto label_3aab54;
        case 0x3aab58u: goto label_3aab58;
        case 0x3aab5cu: goto label_3aab5c;
        case 0x3aab60u: goto label_3aab60;
        case 0x3aab64u: goto label_3aab64;
        case 0x3aab68u: goto label_3aab68;
        case 0x3aab6cu: goto label_3aab6c;
        case 0x3aab70u: goto label_3aab70;
        case 0x3aab74u: goto label_3aab74;
        case 0x3aab78u: goto label_3aab78;
        case 0x3aab7cu: goto label_3aab7c;
        case 0x3aab80u: goto label_3aab80;
        case 0x3aab84u: goto label_3aab84;
        case 0x3aab88u: goto label_3aab88;
        case 0x3aab8cu: goto label_3aab8c;
        case 0x3aab90u: goto label_3aab90;
        case 0x3aab94u: goto label_3aab94;
        case 0x3aab98u: goto label_3aab98;
        case 0x3aab9cu: goto label_3aab9c;
        case 0x3aaba0u: goto label_3aaba0;
        case 0x3aaba4u: goto label_3aaba4;
        case 0x3aaba8u: goto label_3aaba8;
        case 0x3aabacu: goto label_3aabac;
        case 0x3aabb0u: goto label_3aabb0;
        case 0x3aabb4u: goto label_3aabb4;
        case 0x3aabb8u: goto label_3aabb8;
        case 0x3aabbcu: goto label_3aabbc;
        case 0x3aabc0u: goto label_3aabc0;
        case 0x3aabc4u: goto label_3aabc4;
        case 0x3aabc8u: goto label_3aabc8;
        case 0x3aabccu: goto label_3aabcc;
        case 0x3aabd0u: goto label_3aabd0;
        case 0x3aabd4u: goto label_3aabd4;
        case 0x3aabd8u: goto label_3aabd8;
        case 0x3aabdcu: goto label_3aabdc;
        case 0x3aabe0u: goto label_3aabe0;
        case 0x3aabe4u: goto label_3aabe4;
        case 0x3aabe8u: goto label_3aabe8;
        case 0x3aabecu: goto label_3aabec;
        case 0x3aabf0u: goto label_3aabf0;
        case 0x3aabf4u: goto label_3aabf4;
        case 0x3aabf8u: goto label_3aabf8;
        case 0x3aabfcu: goto label_3aabfc;
        case 0x3aac00u: goto label_3aac00;
        case 0x3aac04u: goto label_3aac04;
        case 0x3aac08u: goto label_3aac08;
        case 0x3aac0cu: goto label_3aac0c;
        case 0x3aac10u: goto label_3aac10;
        case 0x3aac14u: goto label_3aac14;
        case 0x3aac18u: goto label_3aac18;
        case 0x3aac1cu: goto label_3aac1c;
        case 0x3aac20u: goto label_3aac20;
        case 0x3aac24u: goto label_3aac24;
        case 0x3aac28u: goto label_3aac28;
        case 0x3aac2cu: goto label_3aac2c;
        case 0x3aac30u: goto label_3aac30;
        case 0x3aac34u: goto label_3aac34;
        case 0x3aac38u: goto label_3aac38;
        case 0x3aac3cu: goto label_3aac3c;
        case 0x3aac40u: goto label_3aac40;
        case 0x3aac44u: goto label_3aac44;
        case 0x3aac48u: goto label_3aac48;
        case 0x3aac4cu: goto label_3aac4c;
        case 0x3aac50u: goto label_3aac50;
        case 0x3aac54u: goto label_3aac54;
        case 0x3aac58u: goto label_3aac58;
        case 0x3aac5cu: goto label_3aac5c;
        case 0x3aac60u: goto label_3aac60;
        case 0x3aac64u: goto label_3aac64;
        case 0x3aac68u: goto label_3aac68;
        case 0x3aac6cu: goto label_3aac6c;
        case 0x3aac70u: goto label_3aac70;
        case 0x3aac74u: goto label_3aac74;
        case 0x3aac78u: goto label_3aac78;
        case 0x3aac7cu: goto label_3aac7c;
        case 0x3aac80u: goto label_3aac80;
        case 0x3aac84u: goto label_3aac84;
        case 0x3aac88u: goto label_3aac88;
        case 0x3aac8cu: goto label_3aac8c;
        case 0x3aac90u: goto label_3aac90;
        case 0x3aac94u: goto label_3aac94;
        case 0x3aac98u: goto label_3aac98;
        case 0x3aac9cu: goto label_3aac9c;
        case 0x3aaca0u: goto label_3aaca0;
        case 0x3aaca4u: goto label_3aaca4;
        case 0x3aaca8u: goto label_3aaca8;
        case 0x3aacacu: goto label_3aacac;
        case 0x3aacb0u: goto label_3aacb0;
        case 0x3aacb4u: goto label_3aacb4;
        case 0x3aacb8u: goto label_3aacb8;
        case 0x3aacbcu: goto label_3aacbc;
        case 0x3aacc0u: goto label_3aacc0;
        case 0x3aacc4u: goto label_3aacc4;
        case 0x3aacc8u: goto label_3aacc8;
        case 0x3aacccu: goto label_3aaccc;
        case 0x3aacd0u: goto label_3aacd0;
        case 0x3aacd4u: goto label_3aacd4;
        case 0x3aacd8u: goto label_3aacd8;
        case 0x3aacdcu: goto label_3aacdc;
        case 0x3aace0u: goto label_3aace0;
        case 0x3aace4u: goto label_3aace4;
        case 0x3aace8u: goto label_3aace8;
        case 0x3aacecu: goto label_3aacec;
        case 0x3aacf0u: goto label_3aacf0;
        case 0x3aacf4u: goto label_3aacf4;
        case 0x3aacf8u: goto label_3aacf8;
        case 0x3aacfcu: goto label_3aacfc;
        case 0x3aad00u: goto label_3aad00;
        case 0x3aad04u: goto label_3aad04;
        case 0x3aad08u: goto label_3aad08;
        case 0x3aad0cu: goto label_3aad0c;
        case 0x3aad10u: goto label_3aad10;
        case 0x3aad14u: goto label_3aad14;
        case 0x3aad18u: goto label_3aad18;
        case 0x3aad1cu: goto label_3aad1c;
        case 0x3aad20u: goto label_3aad20;
        case 0x3aad24u: goto label_3aad24;
        case 0x3aad28u: goto label_3aad28;
        case 0x3aad2cu: goto label_3aad2c;
        case 0x3aad30u: goto label_3aad30;
        case 0x3aad34u: goto label_3aad34;
        case 0x3aad38u: goto label_3aad38;
        case 0x3aad3cu: goto label_3aad3c;
        case 0x3aad40u: goto label_3aad40;
        case 0x3aad44u: goto label_3aad44;
        case 0x3aad48u: goto label_3aad48;
        case 0x3aad4cu: goto label_3aad4c;
        case 0x3aad50u: goto label_3aad50;
        case 0x3aad54u: goto label_3aad54;
        case 0x3aad58u: goto label_3aad58;
        case 0x3aad5cu: goto label_3aad5c;
        case 0x3aad60u: goto label_3aad60;
        case 0x3aad64u: goto label_3aad64;
        default: break;
    }

    ctx->pc = 0x3aaa40u;

label_3aaa40:
    // 0x3aaa40: 0x27bdf640  addiu       $sp, $sp, -0x9C0
    ctx->pc = 0x3aaa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964800));
label_3aaa44:
    // 0x3aaa44: 0x7fb00980  sq          $s0, 0x980($sp)
    ctx->pc = 0x3aaa44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 16));
label_3aaa48:
    // 0x3aaa48: 0x7fb10970  sq          $s1, 0x970($sp)
    ctx->pc = 0x3aaa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 17));
label_3aaa4c:
    // 0x3aaa4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aaa4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aaa50:
    // 0x3aaa50: 0x7fb20960  sq          $s2, 0x960($sp)
    ctx->pc = 0x3aaa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 18));
label_3aaa54:
    // 0x3aaa54: 0x7fb30950  sq          $s3, 0x950($sp)
    ctx->pc = 0x3aaa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 19));
label_3aaa58:
    // 0x3aaa58: 0x7fb40940  sq          $s4, 0x940($sp)
    ctx->pc = 0x3aaa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 20));
label_3aaa5c:
    // 0x3aaa5c: 0x7fb50930  sq          $s5, 0x930($sp)
    ctx->pc = 0x3aaa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 21));
label_3aaa60:
    // 0x3aaa60: 0x7fb60920  sq          $s6, 0x920($sp)
    ctx->pc = 0x3aaa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2336), GPR_VEC(ctx, 22));
label_3aaa64:
    // 0x3aaa64: 0x7fb70910  sq          $s7, 0x910($sp)
    ctx->pc = 0x3aaa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2320), GPR_VEC(ctx, 23));
label_3aaa68:
    // 0x3aaa68: 0x7fbe0900  sq          $fp, 0x900($sp)
    ctx->pc = 0x3aaa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2304), GPR_VEC(ctx, 30));
label_3aaa6c:
    // 0x3aaa6c: 0xffbf08f0  sd          $ra, 0x8F0($sp)
    ctx->pc = 0x3aaa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2288), GPR_U64(ctx, 31));
label_3aaa70:
    // 0x3aaa70: 0xe7b809b0  swc1        $f24, 0x9B0($sp)
    ctx->pc = 0x3aaa70u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2480), bits); }
label_3aaa74:
    // 0x3aaa74: 0xe7b709a8  swc1        $f23, 0x9A8($sp)
    ctx->pc = 0x3aaa74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2472), bits); }
label_3aaa78:
    // 0x3aaa78: 0xe7b609a0  swc1        $f22, 0x9A0($sp)
    ctx->pc = 0x3aaa78u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2464), bits); }
label_3aaa7c:
    // 0x3aaa7c: 0xe7b50998  swc1        $f21, 0x998($sp)
    ctx->pc = 0x3aaa7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2456), bits); }
label_3aaa80:
    // 0x3aaa80: 0xe7b40990  swc1        $f20, 0x990($sp)
    ctx->pc = 0x3aaa80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2448), bits); }
label_3aaa84:
    // 0x3aaa84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3aaa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3aaa88:
    // 0x3aaa88: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aaa88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aaa8c:
    // 0x3aaa8c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aaa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aaa90:
    // 0x3aaa90: 0x40f809  jalr        $v0
label_3aaa94:
    if (ctx->pc == 0x3AAA94u) {
        ctx->pc = 0x3AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA90u;
        // 0x3aaa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAA98u;
        goto label_3aaa98;
    }
    ctx->pc = 0x3AAA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AAA98u);
        ctx->pc = 0x3AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAA90u;
        // 0x3aaa94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAA90u, 0x3AAA98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAA98u;
label_3aaa98:
    // 0x3aaa98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3aaa98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aaa9c:
    // 0x3aaa9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3aaa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3aaaa0:
    // 0x3aaaa0: 0x27b20440  addiu       $s2, $sp, 0x440
    ctx->pc = 0x3aaaa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3aaaa4:
    // 0x3aaaa4: 0x27b30450  addiu       $s3, $sp, 0x450
    ctx->pc = 0x3aaaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3aaaa8:
    // 0x3aaaa8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3aaaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3aaaac:
    // 0x3aaaac: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3aaaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3aaab0:
    // 0x3aaab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3aaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3aaab4:
    // 0x3aaab4: 0x0  nop
    ctx->pc = 0x3aaab4u;
    // NOP
label_3aaab8:
    // 0x3aaab8: 0x0  nop
    ctx->pc = 0x3aaab8u;
    // NOP
label_3aaabc:
    // 0x3aaabc: 0x0  nop
    ctx->pc = 0x3aaabcu;
    // NOP
label_3aaac0:
    // 0x3aaac0: 0x0  nop
    ctx->pc = 0x3aaac0u;
    // NOP
label_3aaac4:
    // 0x3aaac4: 0x0  nop
    ctx->pc = 0x3aaac4u;
    // NOP
label_3aaac8:
    // 0x3aaac8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3aaacc:
    if (ctx->pc == 0x3AAACCu) {
        ctx->pc = 0x3AAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAC8u;
        // 0x3aaacc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAD0u;
        goto label_3aaad0;
    }
    ctx->pc = 0x3AAAC8u;
    {
        const bool branch_taken_0x3aaac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3AAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAC8u;
        // 0x3aaacc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaac8) {
            ctx->pc = 0x3AAAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aaab8;
        }
    }
    ctx->pc = 0x3AAAD0u;
label_3aaad0:
    // 0x3aaad0: 0xc138ddc  jal         func_4E3770
label_3aaad4:
    if (ctx->pc == 0x3AAAD4u) {
        ctx->pc = 0x3AAAD8u;
        goto label_3aaad8;
    }
    ctx->pc = 0x3AAAD0u;
    SET_GPR_U32(ctx, 31, 0x3AAAD8u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3AAAD0u, 0x3AAAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAD8u;
label_3aaad8:
    // 0x3aaad8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aaad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aaadc:
    // 0x3aaadc: 0xc0e911e  jal         func_3A4478
label_3aaae0:
    if (ctx->pc == 0x3AAAE0u) {
        ctx->pc = 0x3AAAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAADCu;
        // 0x3aaae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAE4u;
        goto label_3aaae4;
    }
    ctx->pc = 0x3AAADCu;
    SET_GPR_U32(ctx, 31, 0x3AAAE4u);
    ctx->pc = 0x3AAAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAADCu;
    // 0x3aaae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3AAADCu, 0x3AAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAE4u;
label_3aaae4:
    // 0x3aaae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aaae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aaae8:
    // 0x3aaae8: 0xc0e90ca  jal         func_3A4328
label_3aaaec:
    if (ctx->pc == 0x3AAAECu) {
        ctx->pc = 0x3AAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAAE8u;
        // 0x3aaaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAAF0u;
        goto label_3aaaf0;
    }
    ctx->pc = 0x3AAAE8u;
    SET_GPR_U32(ctx, 31, 0x3AAAF0u);
    ctx->pc = 0x3AAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAAE8u;
    // 0x3aaaec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3AAAE8u, 0x3AAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAAF0u;
label_3aaaf0:
    // 0x3aaaf0: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3aaaf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3aaaf4:
    // 0x3aaaf4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aaaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aaaf8:
    // 0x3aaaf8: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3aaaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3aaafc:
    // 0x3aaafc: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3aaafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_3aab00:
    // 0x3aab00: 0xafa208e0  sw          $v0, 0x8E0($sp)
    ctx->pc = 0x3aab00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2272), GPR_U32(ctx, 2));
label_3aab04:
    // 0x3aab04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3aab08:
    // 0x3aab08: 0x10430086  beq         $v0, $v1, . + 4 + (0x86 << 2)
label_3aab0c:
    if (ctx->pc == 0x3AAB0Cu) {
        ctx->pc = 0x3AAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB08u;
        // 0x3aab0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB10u;
        goto label_3aab10;
    }
    ctx->pc = 0x3AAB08u;
    {
        const bool branch_taken_0x3aab08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB08u;
        // 0x3aab0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab08) {
            ctx->pc = 0x3AAD24u;
            goto label_3aad24;
        }
    }
    ctx->pc = 0x3AAB10u;
label_3aab10:
    // 0x3aab10: 0xc0e9694  jal         func_3A5A50
label_3aab14:
    if (ctx->pc == 0x3AAB14u) {
        ctx->pc = 0x3AAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB10u;
        // 0x3aab14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB18u;
        goto label_3aab18;
    }
    ctx->pc = 0x3AAB10u;
    SET_GPR_U32(ctx, 31, 0x3AAB18u);
    ctx->pc = 0x3AAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB10u;
    // 0x3aab14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3AAB10u, 0x3AAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB18u;
label_3aab18:
    // 0x3aab18: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_3aab1c:
    if (ctx->pc == 0x3AAB1Cu) {
        ctx->pc = 0x3AAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB18u;
        // 0x3aab1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB20u;
        goto label_3aab20;
    }
    ctx->pc = 0x3AAB18u;
    {
        const bool branch_taken_0x3aab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB18u;
        // 0x3aab1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab18) {
            ctx->pc = 0x3AAD24u;
            goto label_3aad24;
        }
    }
    ctx->pc = 0x3AAB20u;
label_3aab20:
    // 0x3aab20: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3aab20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3aab24:
    // 0x3aab24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aab28:
    // 0x3aab28: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3aab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_3aab2c:
    // 0x3aab2c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aab2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aab30:
    // 0x3aab30: 0xc0e9f56  jal         func_3A7D58
label_3aab34:
    if (ctx->pc == 0x3AAB34u) {
        ctx->pc = 0x3AAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB30u;
        // 0x3aab34: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB38u;
        goto label_3aab38;
    }
    ctx->pc = 0x3AAB30u;
    SET_GPR_U32(ctx, 31, 0x3AAB38u);
    ctx->pc = 0x3AAB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAB30u;
    // 0x3aab34: 0x27a40430  addiu       $a0, $sp, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D58u, 0x3AAB30u, 0x3AAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAB38u;
label_3aab38:
    // 0x3aab38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3aab3c:
    if (ctx->pc == 0x3AAB3Cu) {
        ctx->pc = 0x3AAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB38u;
        // 0x3aab3c: 0x3c1e006f  lui         $fp, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB40u;
        goto label_3aab40;
    }
    ctx->pc = 0x3AAB38u;
    {
        const bool branch_taken_0x3aab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB38u;
        // 0x3aab3c: 0x3c1e006f  lui         $fp, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab38) {
            ctx->pc = 0x3AAB48u;
            goto label_3aab48;
        }
    }
    ctx->pc = 0x3AAB40u;
label_3aab40:
    // 0x3aab40: 0x10000078  b           . + 4 + (0x78 << 2)
label_3aab44:
    if (ctx->pc == 0x3AAB44u) {
        ctx->pc = 0x3AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB40u;
        // 0x3aab44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB48u;
        goto label_3aab48;
    }
    ctx->pc = 0x3AAB40u;
    {
        const bool branch_taken_0x3aab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB40u;
        // 0x3aab44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab40) {
            ctx->pc = 0x3AAD24u;
            goto label_3aad24;
        }
    }
    ctx->pc = 0x3AAB48u;
label_3aab48:
    // 0x3aab48: 0x27b20460  addiu       $s2, $sp, 0x460
    ctx->pc = 0x3aab48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3aab4c:
    // 0x3aab4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aab4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aab50:
    // 0x3aab50: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3aab50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3aab54:
    // 0x3aab54: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x3aab54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aab58:
    // 0x3aab58: 0x3c01bccc  lui         $at, 0xBCCC
    ctx->pc = 0x3aab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48332 << 16));
label_3aab5c:
    // 0x3aab5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aab5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aab60:
    // 0x3aab60: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3aab60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3aab64:
    // 0x3aab64: 0x27d5b8b8  addiu       $s5, $fp, -0x4748
    ctx->pc = 0x3aab64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
label_3aab68:
    // 0x3aab68: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x3aab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
label_3aab6c:
    // 0x3aab6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aab6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aab70:
    // 0x3aab70: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3aab70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3aab74:
    // 0x3aab74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3aab74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aab78:
    // 0x3aab78: 0x27b004d0  addiu       $s0, $sp, 0x4D0
    ctx->pc = 0x3aab78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
label_3aab7c:
    // 0x3aab7c: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x3aab7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aab80:
    // 0x3aab80: 0x8fa208e0  lw          $v0, 0x8E0($sp)
    ctx->pc = 0x3aab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
label_3aab84:
    // 0x3aab84: 0x0  nop
    ctx->pc = 0x3aab84u;
    // NOP
label_3aab88:
    // 0x3aab88: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_3aab8c:
    if (ctx->pc == 0x3AAB8Cu) {
        ctx->pc = 0x3AAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB88u;
        // 0x3aab8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAB90u;
        goto label_3aab90;
    }
    ctx->pc = 0x3AAB88u;
    {
        const bool branch_taken_0x3aab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aab88) {
            ctx->pc = 0x3AAB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AAB88u;
            // 0x3aab8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAC74u;
            goto label_3aac74;
        }
    }
    ctx->pc = 0x3AAB90u;
label_3aab90:
    // 0x3aab90: 0x3c014039  lui         $at, 0x4039
    ctx->pc = 0x3aab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16441 << 16));
label_3aab94:
    // 0x3aab94: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3aab94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3aab98:
    // 0x3aab98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aab98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aab9c:
    // 0x3aab9c: 0x3c01406c  lui         $at, 0x406C
    ctx->pc = 0x3aab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16492 << 16));
label_3aaba0:
    // 0x3aaba0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aaba0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aaba4:
    // 0x3aaba4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aaba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aaba8:
    // 0x3aaba8: 0xc0cd518  jal         func_335460
label_3aabac:
    if (ctx->pc == 0x3AABACu) {
        ctx->pc = 0x3AABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABA8u;
        // 0x3aabac: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AABB0u;
        goto label_3aabb0;
    }
    ctx->pc = 0x3AABA8u;
    SET_GPR_U32(ctx, 31, 0x3AABB0u);
    ctx->pc = 0x3AABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AABA8u;
    // 0x3aabac: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AABA8u, 0x3AABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AABB0u;
label_3aabb0:
    // 0x3aabb0: 0xe7a00464  swc1        $f0, 0x464($sp)
    ctx->pc = 0x3aabb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3aabb4:
    // 0x3aabb4: 0xafa00460  sw          $zero, 0x460($sp)
    ctx->pc = 0x3aabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 0));
label_3aabb8:
    // 0x3aabb8: 0xafa00468  sw          $zero, 0x468($sp)
    ctx->pc = 0x3aabb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1128), GPR_U32(ctx, 0));
label_3aabbc:
    // 0x3aabbc: 0xe6f8000c  swc1        $f24, 0xC($s7)
    ctx->pc = 0x3aabbcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
label_3aabc0:
    // 0x3aabc0: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3aabc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3aabc4:
    // 0x3aabc4: 0x7ba30440  lq          $v1, 0x440($sp)
    ctx->pc = 0x3aabc4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3aabc8:
    // 0x3aabc8: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3aabc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3aabcc:
    // 0x3aabcc: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3aabccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3aabd0:
    // 0x3aabd0: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3aabd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3aabd4:
    // 0x3aabd4: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3aabd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3aabd8:
    // 0x3aabd8: 0x7fa304a0  sq          $v1, 0x4A0($sp)
    ctx->pc = 0x3aabd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 3));
label_3aabdc:
    // 0x3aabdc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3aabdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3aabe0:
    // 0x3aabe0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3aabe0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3aabe4:
    // 0x3aabe4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3aabe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3aabe8:
    // 0x3aabe8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3aabe8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3aabec:
    // 0x3aabec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3aabecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3aabf0:
    // 0x3aabf0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3aabf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3aabf4:
    // 0x3aabf4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3aabf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3aabf8:
    // 0x3aabf8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3aabf8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3aabfc:
    // 0x3aabfc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3aabfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3aac00:
    // 0x3aac00: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3aac00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3aac04:
    // 0x3aac04: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3aac04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3aac08:
    // 0x3aac08: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3aac08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3aac0c:
    // 0x3aac0c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3aac0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3aac10:
    // 0x3aac10: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3aac10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3aac14:
    // 0x3aac14: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3aac14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3aac18:
    // 0x3aac18: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3aac18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3aac1c:
    // 0x3aac1c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3aac1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3aac20:
    // 0x3aac20: 0x7fa30450  sq          $v1, 0x450($sp)
    ctx->pc = 0x3aac20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 3));
label_3aac24:
    // 0x3aac24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aac24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aac28:
    // 0x3aac28: 0x7fa304b0  sq          $v1, 0x4B0($sp)
    ctx->pc = 0x3aac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 3));
label_3aac2c:
    // 0x3aac2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3aac2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3aac30:
    // 0x3aac30: 0x7fa304c0  sq          $v1, 0x4C0($sp)
    ctx->pc = 0x3aac30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 3));
label_3aac34:
    // 0x3aac34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x3aac34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3aac38:
    // 0x3aac38: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3aac38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
label_3aac3c:
    // 0x3aac3c: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3aac3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3aac40:
    // 0x3aac40: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3aac40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3aac44:
    // 0x3aac44: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3aac44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3aac48:
    // 0x3aac48: 0x7fa30410  sq          $v1, 0x410($sp)
    ctx->pc = 0x3aac48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
label_3aac4c:
    // 0x3aac4c: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3aac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3aac50:
    // 0x3aac50: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3aac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3aac54:
    // 0x3aac54: 0xc0e9fa6  jal         func_3A7E98
label_3aac58:
    if (ctx->pc == 0x3AAC58u) {
        ctx->pc = 0x3AAC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC54u;
        // 0x3aac58: 0xafa30470  sw          $v1, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC5Cu;
        goto label_3aac5c;
    }
    ctx->pc = 0x3AAC54u;
    SET_GPR_U32(ctx, 31, 0x3AAC5Cu);
    ctx->pc = 0x3AAC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC54u;
    // 0x3aac58: 0xafa30470  sw          $v1, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3AAC54u, 0x3AAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC5Cu;
label_3aac5c:
    // 0x3aac5c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3aac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3aac60:
    // 0x3aac60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aac60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aac64:
    // 0x3aac64: 0xc0f15bc  jal         func_3C56F0
label_3aac68:
    if (ctx->pc == 0x3AAC68u) {
        ctx->pc = 0x3AAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC64u;
        // 0x3aac68: 0x24441d40  addiu       $a0, $v0, 0x1D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC6Cu;
        goto label_3aac6c;
    }
    ctx->pc = 0x3AAC64u;
    SET_GPR_U32(ctx, 31, 0x3AAC6Cu);
    ctx->pc = 0x3AAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC64u;
    // 0x3aac68: 0x24441d40  addiu       $a0, $v0, 0x1D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AAC64u, 0x3AAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC6Cu;
label_3aac6c:
    // 0x3aac6c: 0x10000026  b           . + 4 + (0x26 << 2)
label_3aac70:
    if (ctx->pc == 0x3AAC70u) {
        ctx->pc = 0x3AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC6Cu;
        // 0x3aac70: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC74u;
        goto label_3aac74;
    }
    ctx->pc = 0x3AAC6Cu;
    {
        const bool branch_taken_0x3aac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC6Cu;
        // 0x3aac70: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aac6c) {
            ctx->pc = 0x3AAD08u;
            goto label_3aad08;
        }
    }
    ctx->pc = 0x3AAC74u;
label_3aac74:
    // 0x3aac74: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aac74u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3aac78:
    // 0x3aac78: 0xc0cd518  jal         func_335460
label_3aac7c:
    if (ctx->pc == 0x3AAC7Cu) {
        ctx->pc = 0x3AAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC78u;
        // 0x3aac7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC80u;
        goto label_3aac80;
    }
    ctx->pc = 0x3AAC78u;
    SET_GPR_U32(ctx, 31, 0x3AAC80u);
    ctx->pc = 0x3AAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC78u;
    // 0x3aac7c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AAC78u, 0x3AAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC80u;
label_3aac80:
    // 0x3aac80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3aac80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3aac84:
    // 0x3aac84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aac88:
    // 0x3aac88: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aac88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3aac8c:
    // 0x3aac8c: 0xc0cd518  jal         func_335460
label_3aac90:
    if (ctx->pc == 0x3AAC90u) {
        ctx->pc = 0x3AAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC8Cu;
        // 0x3aac90: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAC94u;
        goto label_3aac94;
    }
    ctx->pc = 0x3AAC8Cu;
    SET_GPR_U32(ctx, 31, 0x3AAC94u);
    ctx->pc = 0x3AAC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC8Cu;
    // 0x3aac90: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AAC8Cu, 0x3AAC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC94u;
label_3aac94:
    // 0x3aac94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3aac94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3aac98:
    // 0x3aac98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3aac98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3aac9c:
    // 0x3aac9c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3aac9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3aaca0:
    // 0x3aaca0: 0xc0cd518  jal         func_335460
label_3aaca4:
    if (ctx->pc == 0x3AACA4u) {
        ctx->pc = 0x3AACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACA0u;
        // 0x3aaca4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AACA8u;
        goto label_3aaca8;
    }
    ctx->pc = 0x3AACA0u;
    SET_GPR_U32(ctx, 31, 0x3AACA8u);
    ctx->pc = 0x3AACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACA0u;
    // 0x3aaca4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AACA0u, 0x3AACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACA8u;
label_3aaca8:
    // 0x3aaca8: 0xe7b50460  swc1        $f21, 0x460($sp)
    ctx->pc = 0x3aaca8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1120), bits); }
label_3aacac:
    // 0x3aacac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3aacacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aacb0:
    // 0x3aacb0: 0xe7b40464  swc1        $f20, 0x464($sp)
    ctx->pc = 0x3aacb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1124), bits); }
label_3aacb4:
    // 0x3aacb4: 0x27a50860  addiu       $a1, $sp, 0x860
    ctx->pc = 0x3aacb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3aacb8:
    // 0x3aacb8: 0xe7a00468  swc1        $f0, 0x468($sp)
    ctx->pc = 0x3aacb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1128), bits); }
label_3aacbc:
    // 0x3aacbc: 0x27a80890  addiu       $t0, $sp, 0x890
    ctx->pc = 0x3aacbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3aacc0:
    // 0x3aacc0: 0xe658000c  swc1        $f24, 0xC($s2)
    ctx->pc = 0x3aacc0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_3aacc4:
    // 0x3aacc4: 0x27a60870  addiu       $a2, $sp, 0x870
    ctx->pc = 0x3aacc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3aacc8:
    // 0x3aacc8: 0x27a70880  addiu       $a3, $sp, 0x880
    ctx->pc = 0x3aacc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3aaccc:
    // 0x3aaccc: 0x7ba20460  lq          $v0, 0x460($sp)
    ctx->pc = 0x3aacccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3aacd0:
    // 0x3aacd0: 0x7ba30430  lq          $v1, 0x430($sp)
    ctx->pc = 0x3aacd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3aacd4:
    // 0x3aacd4: 0x7fa20870  sq          $v0, 0x870($sp)
    ctx->pc = 0x3aacd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 2));
label_3aacd8:
    // 0x3aacd8: 0x7fa30860  sq          $v1, 0x860($sp)
    ctx->pc = 0x3aacd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 3));
label_3aacdc:
    // 0x3aacdc: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3aacdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3aace0:
    // 0x3aace0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3aace0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3aace4:
    // 0x3aace4: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3aace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3aace8:
    // 0x3aace8: 0xafa00890  sw          $zero, 0x890($sp)
    ctx->pc = 0x3aace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 0));
label_3aacec:
    // 0x3aacec: 0xc0e9fd0  jal         func_3A7F40
label_3aacf0:
    if (ctx->pc == 0x3AACF0u) {
        ctx->pc = 0x3AACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACECu;
        // 0x3aacf0: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AACF4u;
        goto label_3aacf4;
    }
    ctx->pc = 0x3AACECu;
    SET_GPR_U32(ctx, 31, 0x3AACF4u);
    ctx->pc = 0x3AACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACECu;
    // 0x3aacf0: 0xafa30880  sw          $v1, 0x880($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3AACECu, 0x3AACF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AACF4u;
label_3aacf4:
    // 0x3aacf4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3aacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3aacf8:
    // 0x3aacf8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3aacf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3aacfc:
    // 0x3aacfc: 0xc0f15bc  jal         func_3C56F0
label_3aad00:
    if (ctx->pc == 0x3AAD00u) {
        ctx->pc = 0x3AAD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AACFCu;
        // 0x3aad00: 0x24441d50  addiu       $a0, $v0, 0x1D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD04u;
        goto label_3aad04;
    }
    ctx->pc = 0x3AACFCu;
    SET_GPR_U32(ctx, 31, 0x3AAD04u);
    ctx->pc = 0x3AAD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AACFCu;
    // 0x3aad00: 0x24441d50  addiu       $a0, $v0, 0x1D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3AACFCu, 0x3AAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAD04u;
label_3aad04:
    // 0x3aad04: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3aad04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3aad08:
    // 0x3aad08: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x3aad08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3aad0c:
    // 0x3aad0c: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
label_3aad10:
    if (ctx->pc == 0x3AAD10u) {
        ctx->pc = 0x3AAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD0Cu;
        // 0x3aad10: 0x8fa208e0  lw          $v0, 0x8E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD14u;
        goto label_3aad14;
    }
    ctx->pc = 0x3AAD0Cu;
    {
        const bool branch_taken_0x3aad0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD0Cu;
        // 0x3aad10: 0x8fa208e0  lw          $v0, 0x8E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aad0c) {
            ctx->pc = 0x3AAB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aab88;
        }
    }
    ctx->pc = 0x3AAD14u;
label_3aad14:
    // 0x3aad14: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3aad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3aad18:
    // 0x3aad18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3aad18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3aad1c:
    // 0x3aad1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3aad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3aad20:
    // 0x3aad20: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3aad20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_3aad24:
    // 0x3aad24: 0x7bb00980  lq          $s0, 0x980($sp)
    ctx->pc = 0x3aad24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
label_3aad28:
    // 0x3aad28: 0x7bb10970  lq          $s1, 0x970($sp)
    ctx->pc = 0x3aad28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
label_3aad2c:
    // 0x3aad2c: 0x7bb20960  lq          $s2, 0x960($sp)
    ctx->pc = 0x3aad2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
label_3aad30:
    // 0x3aad30: 0x7bb30950  lq          $s3, 0x950($sp)
    ctx->pc = 0x3aad30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
label_3aad34:
    // 0x3aad34: 0x7bb40940  lq          $s4, 0x940($sp)
    ctx->pc = 0x3aad34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
label_3aad38:
    // 0x3aad38: 0x7bb50930  lq          $s5, 0x930($sp)
    ctx->pc = 0x3aad38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
label_3aad3c:
    // 0x3aad3c: 0x7bb60920  lq          $s6, 0x920($sp)
    ctx->pc = 0x3aad3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2336)));
label_3aad40:
    // 0x3aad40: 0x7bb70910  lq          $s7, 0x910($sp)
    ctx->pc = 0x3aad40u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2320)));
label_3aad44:
    // 0x3aad44: 0x7bbe0900  lq          $fp, 0x900($sp)
    ctx->pc = 0x3aad44u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2304)));
label_3aad48:
    // 0x3aad48: 0xdfbf08f0  ld          $ra, 0x8F0($sp)
    ctx->pc = 0x3aad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2288)));
label_3aad4c:
    // 0x3aad4c: 0xc7b809b0  lwc1        $f24, 0x9B0($sp)
    ctx->pc = 0x3aad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3aad50:
    // 0x3aad50: 0xc7b709a8  lwc1        $f23, 0x9A8($sp)
    ctx->pc = 0x3aad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3aad54:
    // 0x3aad54: 0xc7b609a0  lwc1        $f22, 0x9A0($sp)
    ctx->pc = 0x3aad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3aad58:
    // 0x3aad58: 0xc7b50998  lwc1        $f21, 0x998($sp)
    ctx->pc = 0x3aad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3aad5c:
    // 0x3aad5c: 0xc7b40990  lwc1        $f20, 0x990($sp)
    ctx->pc = 0x3aad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3aad60:
    // 0x3aad60: 0x3e00008  jr          $ra
label_3aad64:
    if (ctx->pc == 0x3AAD64u) {
        ctx->pc = 0x3AAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD60u;
        // 0x3aad64: 0x27bd09c0  addiu       $sp, $sp, 0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAD68u;
        goto label_fallthrough_0x3aad60;
    }
    ctx->pc = 0x3AAD60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD60u;
        // 0x3aad64: 0x27bd09c0  addiu       $sp, $sp, 0x9C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAD60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aad60:
    ctx->pc = 0x3AAD68u;
}
